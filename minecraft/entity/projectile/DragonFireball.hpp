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
    class DragonFireball : public Fireball
    {
    public:
        DragonFireball(Level *level)
        {
            MLINK_FUNC(DragonFireball *, 0x022E666C, DragonFireball *, Level *)(this, level);
        }

        DragonFireball(Level *level, const mboost::shared_ptr<LivingEntity> &owner, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(DragonFireball *, 0x022E6728, DragonFireball *, Level *, const mboost::shared_ptr<LivingEntity> &, double, double,
                       double)(this, level, owner, xPower, yPower, zPower);
        }

        DragonFireball(Level *level, double xPos, double yPos, double zPos, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(DragonFireball *, 0x022E68FC, DragonFireball *, Level *, double, double, double, double, double,
                       double)(this, level, xPos, yPos, zPos, xPower, yPower, zPower);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, DragonFireball *fireball)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308AD38, mboost::shared_ptr<Entity> *, DragonFireball *)(out, fireball);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02307208)();
        }

        void onHit(const HitResult *hitResult)
        {
            MLINK_FUNC(void, 0x022E6A64, DragonFireball *, const HitResult *)(this, hitResult);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x022E7704, DragonFireball *)(this);
        }

        bool hurt(const DamageSource *source, float damage)
        {
            return MLINK_FUNC(bool, 0x022E770C, DragonFireball *, const DamageSource *, float)(this, source, damage);
        }

        bool shouldBurn()
        {
            return MLINK_FUNC(bool, 0x022E7720, DragonFireball *)(this);
        }
    };
    MC_CHECK_SIZE(DragonFireball, 0x378);
} // namespace mc
