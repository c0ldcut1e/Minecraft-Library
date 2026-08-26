#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/projectile/ThrowableProjectile.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ThrownEgg : public ThrowableProjectile
    {
    public:
        ThrownEgg(Level *level)
        {
            MLINK_FUNC(ThrownEgg *, 0x029F32B4, ThrownEgg *, Level *)(this, level);
        }

        ThrownEgg(Level *level, const mboost::shared_ptr<LivingEntity> &owner)
        {
            MLINK_FUNC(ThrownEgg *, 0x029F335C, ThrownEgg *, Level *, const mboost::shared_ptr<LivingEntity> &)(this, level, owner);
        }

        ThrownEgg(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(ThrownEgg *, 0x029F34C4, ThrownEgg *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, ThrownEgg *egg)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308B050, mboost::shared_ptr<Entity> *, ThrownEgg *)(out, egg);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A130D8)();
        }
    };
    MC_CHECK_SIZE(ThrownEgg, 0x3A8);
} // namespace mc
