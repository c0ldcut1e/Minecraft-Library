#pragma once

#include <cstdint>

#include "helpers/InventoryQuery.hpp"
#include "minecraft/container/Inventory.hpp"
#include "minecraft/internal/not_null_ptr.hpp"

namespace mc::helpers
{
    struct SlotCollectionResult
    {
        int written = 0;
        int total   = 0;
    };

    inline SlotCollectionResult collectMatchingSlots(Inventory &inventory, const StackQuery &query, int first, int last, int *output, int capacity)
    {
        SlotCollectionResult result;
        visitMatchingStacks(inventory, query, first, last,
                            [&](int slot, const mboost::not_null_ptr<ItemInstance> &)
                            {
                                if (output != nullptr && result.written < capacity)
                                {
                                    output[result.written++] = slot;
                                }
                                ++result.total;
                                return true;
                            });
        return result;
    }

    inline SlotCollectionResult collectEmptySlots(Inventory &inventory, int first, int last, int *output, int capacity)
    {
        SlotCollectionResult result;
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
            mboost::not_null_ptr<ItemInstance> stack;
            inventory.getItem(static_cast<uint32_t>(slot), &stack);
            if (!stack || stack->isEmpty())
            {
                if (output != nullptr && result.written < capacity)
                {
                    output[result.written++] = slot;
                }
                ++result.total;
            }
        }
        return result;
    }
}
