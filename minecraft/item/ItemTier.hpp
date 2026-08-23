#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class ItemTier
    {
    public:
        ItemTier(double param_1, double param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7)
        {
            MLINK_FUNC(void, 0x024D098C, ItemTier *, double, double, uint32_t, uint32_t, uint32_t, uint32_t,
                       uint32_t)(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
        }

        uint32_t level;
        uint32_t uses;
        float speed;
        float attackDamageBonus;
        uint32_t enchantmentValue;
    };
    MC_CHECK_SIZE(ItemTier, 0x14);
} // namespace mc
