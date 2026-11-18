#pragma once

#include <cstdint>

#include "minecraft/item/ItemInstance.hpp"

namespace mc::helpers
{
    struct DurabilityInfo
    {
        bool damageable = false;
        int maximum     = 0;
        int damage      = 0;
        int remaining   = 0;
    };

    // Reports durability points, not the number of uses remaining with enchantments.
    inline DurabilityInfo inspectDurability(ItemInstance *stack)
    {
        DurabilityInfo result;
        if (stack == nullptr || stack->isEmpty() || !stack->isDamageableItem())
        {
            return result;
        }
        const int maximum = stack->getMaxDamage();
        if (maximum <= 0)
        {
            return result;
        }
        int damage = stack->getDamageValue();
        if (damage < 0)
        {
            damage = 0;
        }
        if (damage > maximum)
        {
            damage = maximum;
        }
        result.damageable = true;
        result.maximum    = maximum;
        result.damage     = damage;
        result.remaining  = maximum - damage;
        return result;
    }

    inline bool belowDurabilityPercent(const DurabilityInfo &durability, int percent)
    {
        if (!durability.damageable || durability.maximum <= 0 || percent <= 0)
        {
            return false;
        }
        if (percent > 100)
        {
            percent = 100;
        }
        return static_cast<int64_t>(durability.remaining) * 100 < static_cast<int64_t>(durability.maximum) * percent;
    }
} // namespace mc::helpers
