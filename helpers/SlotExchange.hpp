#pragma once

#include <cstdint>

#include "minecraft/container/Inventory.hpp"
#include "minecraft/internal/not_null_ptr.hpp"
#include "minecraft/internal/shared_ptr.hpp"

namespace mc::helpers
{
    // Exchange two slots only when both game stacks exist and both destinations accept them.
    // The game receives two setItem calls and their normal player notifications;
    // the exchange is not atomic.
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

        mboost::shared_ptr<ItemInstance> a;
        mboost::shared_ptr<ItemInstance> b;
        inventory.getItem(static_cast<uint32_t>(first), a);
        inventory.getItem(static_cast<uint32_t>(second), b);
        if (!a || !b)
        {
            return false;
        }

        mboost::not_null_ptr<ItemInstance> aForCheck(a.get(), a.detail);
        mboost::not_null_ptr<ItemInstance> bForCheck(b.get(), b.detail);
        if (!inventory.canPlaceItem(second, aForCheck) || !inventory.canPlaceItem(first, bForCheck))
        {
            return false;
        }
        inventory.setItem(static_cast<uint32_t>(first), b);
        inventory.setItem(static_cast<uint32_t>(second), a);
        inventory.setChanged();
        return true;
    }
} // namespace mc::helpers
