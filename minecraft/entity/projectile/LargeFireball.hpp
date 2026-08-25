#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/projectile/Fireball.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "utils/HitResult.hpp"
#include "world/Level.hpp"

namespace mc
{
    class LargeFireball : public Fireball
    {
    public:
        LargeFireball(Level *level)
        {
            MLINK_FUNC(LargeFireball *, 0x025B6670, LargeFireball *, Level *)(this, level);
        }

        LargeFireball(Level *level, double xPos, double yPos, double zPos, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(LargeFireball *, 0x025B6714, LargeFireball *, Level *, double, double, double, double, double,
                       double)(this, level, xPos, yPos, zPos, xPower, yPower, zPower);
        }

        LargeFireball(Level *level, const mboost::shared_ptr<LivingEntity> &owner, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(LargeFireball *, 0x025B6864, LargeFireball *, Level *, const mboost::shared_ptr<LivingEntity> &, double, double,
                       double)(this, level, owner, xPower, yPower, zPower);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, LargeFireball *fireball)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308A708, mboost::shared_ptr<Entity> *, LargeFireball *)(out, fireball);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02602DC4)();
        }

        void onHit(const HitResult *hitResult)
        {
            MLINK_FUNC(void, 0x025B6A20, LargeFireball *, const HitResult *)(this, hitResult);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025B6FA8, LargeFireball *, CompoundTag *)(this, tag);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025B7078, LargeFireball *, CompoundTag *)(this, tag);
        }

        int explosionPower;
        uint32_t field_0x37C;
    };
    MC_CHECK_SIZE(LargeFireball, 0x380);
} // namespace mc
