#pragma once

#include "minecraft/item/Item.hpp"
#include "minecraft/item/ItemInstance.hpp"

namespace mc::helpers
{
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

}
