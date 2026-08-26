#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/projectile/ThrowableProjectile.hpp"
#include "world/Level.hpp"

namespace mc
{
    class ThrownTrident : public ThrowableProjectile
    {
    public:
        ThrownTrident(Level *level)
        {
            MLINK_FUNC(void, 0x029F54B4, ThrownTrident *, Level *)(this, level);
        }

        static ThrownTrident *Create(Level *level)
        {
            return MLINK_FUNC(ThrownTrident *, 0x023E63E8, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A13128)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x029F61C8, ThrownTrident *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x029F633C, ThrownTrident *)(this);
        }

        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
    };
    MC_CHECK_SIZE(ThrownTrident, 0x3B0);
} // namespace mc
