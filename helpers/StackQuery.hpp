#pragma once

#include "minecraft/item/Item.hpp"
#include "minecraft/item/ItemInstance.hpp"

namespace mc::helpers
{
    // Caller-side filter; a null item matches any non-empty stack. Tags are not compared.
    struct StackQuery
    {
        const Item *item = nullptr;
        bool checkAux    = false;
        int auxValue     = 0;
        int minimumCount = 1;

        bool matches(ItemInstance *stack) const
        {
            if (stack == nullptr || stack->isEmpty())
            {
                return false;
            }
            if (item != nullptr && stack->getItem() != item)
            {
                return false;
            }
            if (checkAux && stack->getAuxValue() != auxValue)
            {
                return false;
            }
            return stack->getCount() >= minimumCount;
        }
    };

    // The item limit does not include any additional container-specific limit.
    inline int remainingStackSpace(ItemInstance *stack)
    {
        if (stack == nullptr || stack->isEmpty())
        {
            return 0;
        }
        const int count = stack->getCount();
        const int limit = stack->getMaxStackSize();
        if (limit <= 0 || count >= limit)
        {
            return 0;
        }
        return count <= 0 ? limit : limit - count;
    }
} // namespace mc::helpers
