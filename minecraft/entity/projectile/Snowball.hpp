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
    class Snowball : public ThrowableProjectile
    {
    public:
        Snowball(Level *level)
        {
            MLINK_FUNC(Snowball *, 0x02959C18, Snowball *, Level *)(this, level);
        }

        Snowball(Level *level, const mboost::shared_ptr<LivingEntity> &owner)
        {
            MLINK_FUNC(Snowball *, 0x028DEC08, Snowball *, Level *, const mboost::shared_ptr<LivingEntity> &)(this, level, owner);
        }

        Snowball(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(Snowball *, 0x02959CC0, Snowball *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, Snowball *snowball)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x030896E8, mboost::shared_ptr<Entity> *, Snowball *)(out, snowball);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297E328)();
        }
    };
    MC_CHECK_SIZE(Snowball, 0x3A8);
} // namespace mc
