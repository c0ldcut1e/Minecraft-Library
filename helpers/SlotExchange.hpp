#pragma once

#include <cstdint>

#include "minecraft/container/Inventory.hpp"
#include "minecraft/internal/not_null_ptr.hpp"

namespace mc::helpers
{
    inline bool exchangeSlots(Inventory &inventory, int first, int second)
    {
        const int size = inventory.getContainerSize();
        if (first < 0 || second < 0 || first >= size || second >= size)
        {
            return false;
        }
        if (first == second)
        {
            return true;
        }

        mboost::not_null_ptr<ItemInstance> a;
        mboost::not_null_ptr<ItemInstance> b;
        inventory.getItem(static_cast<uint32_t>(first), &a);
        inventory.getItem(static_cast<uint32_t>(second), &b);
        if (!a || !b)
        {
            return false;
        }

        if (!inventory.canPlaceItem(second, a) || !inventory.canPlaceItem(first, b))
        {
            return false;
        }
        inventory.setItem(static_cast<uint32_t>(first), b);
        inventory.setItem(static_cast<uint32_t>(second), a);
        inventory.setChanged();
        return true;
    }
}
