#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/DamageSource.hpp"
#include "entity/vehicle/MinecartContainer.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class MinecartChest : public MinecartContainer
    {
    public:
        MinecartChest(Level *level)
        {
            MLINK_FUNC(void, 0x0266F9D0, MinecartChest *, Level *)(this, level);
        }

        static MinecartChest *Create(Level *level)
        {
            return MLINK_FUNC(MinecartChest *, 0x023E6430, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4EB8)();
        }

        void destroy(DamageSource const *damageSource)
        {
            MLINK_FUNC(void, 0x0266FB60, MinecartChest *, DamageSource const *)(this, damageSource);
        }
    };
    MC_CHECK_SIZE(MinecartChest, 0x3E0);
} // namespace mc
