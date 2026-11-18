#pragma once

#include <cstdint>

#include "helpers/StackQuery.hpp"
#include "minecraft/container/Inventory.hpp"
#include "minecraft/internal/shared_ptr.hpp"

namespace mc::helpers
{
    struct InventoryScanResult
    {
        int firstSlot         = -1;
        int matchingStacks    = 0;
        int64_t matchingItems = 0;
    };

    template<typename Callback>
    bool visitMatchingStacks(Inventory &inventory, const StackQuery &query, int first, int last, Callback callback)
    {
        const int size = inventory.getContainerSize();
        if (first < 0)
        {
            first = 0;
        }
        if (last > size)
        {
            last = size;
        }
        for (int slot = first; slot < last; ++slot)
        {
            mboost::shared_ptr<ItemInstance> stack;
            inventory.getItem(static_cast<uint32_t>(slot), stack);
            if (query.matches(stack.get()) && !callback(slot, stack))
            {
                return false;
            }
        }
        return true;
    }

    inline InventoryScanResult scanInventory(Inventory &inventory, const StackQuery &query, int first, int last)
    {
        InventoryScanResult result;
        visitMatchingStacks(inventory, query, first, last,
                            [&result](int slot, const mboost::shared_ptr<ItemInstance> &stack)
                            {
                                if (result.firstSlot < 0)
                                {
                                    result.firstSlot = slot;
                                }
                                ++result.matchingStacks;
                                const int count = stack->getCount();
                                if (count > 0)
                                {
                                    result.matchingItems += count;
                                }
                                return true;
                            });
        return result;
    }

    inline InventoryScanResult scanInventory(Inventory &inventory, const StackQuery &query)
    {
        return scanInventory(inventory, query, 0, inventory.getContainerSize());
    }

}
