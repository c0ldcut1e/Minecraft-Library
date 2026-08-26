#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/projectile/ThrowableProjectile.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ThrownPotion : public ThrowableProjectile
    {
    public:
        ThrownPotion(Level *level)
        {
            MLINK_FUNC(void, 0x029F3DC4, ThrownPotion *, Level *)(this, level);
        }

        static ThrownPotion *Create(Level *level)
        {
            return MLINK_FUNC(ThrownPotion *, 0x023E61F0, Level *)(level);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, Level *level)
        {
            MLINK_FUNC(void, 0x0308B6CC, mboost::shared_ptr<Entity> *, Level *)(out, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A130F8)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x029F5074, ThrownPotion *)(this);
        }

        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
    };
    MC_CHECK_SIZE(ThrownPotion, 0x3B0);
} // namespace mc
