#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/projectile/Fireball.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/HitResult.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class SmallFireball : public Fireball
    {
    public:
        SmallFireball(Level *level)
        {
            MLINK_FUNC(SmallFireball *, 0x02954D88, SmallFireball *, Level *)(this, level);
        }

        SmallFireball(Level *level, const mboost::shared_ptr<LivingEntity> &owner, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(SmallFireball *, 0x02954E44, SmallFireball *, Level *, const mboost::shared_ptr<LivingEntity> &, double, double,
                       double)(this, level, owner, xPower, yPower, zPower);
        }

        SmallFireball(Level *level, double xPos, double yPos, double zPos, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(SmallFireball *, 0x02955018, SmallFireball *, Level *, double, double, double, double, double,
                       double)(this, level, xPos, yPos, zPos, xPower, yPower, zPower);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, SmallFireball *fireball)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308AA20, mboost::shared_ptr<Entity> *, SmallFireball *)(out, fireball);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297E0C4)();
        }

        void onHit(const HitResult *hitResult)
        {
            MLINK_FUNC(void, 0x02955180, SmallFireball *, const HitResult *)(this, hitResult);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x02955834, SmallFireball *)(this);
        }

        bool hurt(const DamageSource *source, float damage)
        {
            return MLINK_FUNC(bool, 0x0295583C, SmallFireball *, const DamageSource *, float)(this, source, damage);
        }
    };
    MC_CHECK_SIZE(SmallFireball, 0x378);
} // namespace mc
