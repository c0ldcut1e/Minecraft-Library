#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/DamageSource.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "utils/Direction.hpp"
#include "utils/HitResult.hpp"
#include "world/Level.hpp"

namespace mc
{
    class ShulkerBullet : public Entity
    {
    public:
        ShulkerBullet(Level *level)
        {
            MLINK_FUNC(ShulkerBullet *, 0x028FB060, ShulkerBullet *, Level *)(this, level);
        }

        ShulkerBullet(Level *level, double xPos, double yPos, double zPos, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(ShulkerBullet *, 0x028FB1CC, ShulkerBullet *, Level *, double, double, double, double, double,
                       double)(this, level, xPos, yPos, zPos, xPower, yPower, zPower);
        }

        ShulkerBullet(Level *level, const mboost::shared_ptr<LivingEntity> &owner, const mboost::shared_ptr<Entity> &target,
                      const Direction::Axis *axis)
        {
            MLINK_FUNC(ShulkerBullet *, 0x028FC4D4, ShulkerBullet *, Level *, const mboost::shared_ptr<LivingEntity> &,
                       const mboost::shared_ptr<Entity> &, const Direction::Axis *)(this, level, owner, target, axis);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, ShulkerBullet *bullet)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308D2A4, mboost::shared_ptr<Entity> *, ShulkerBullet *)(out, bullet);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297B688)();
        }

        void setMoveDirection(const Direction *direction)
        {
            MLINK_FUNC(void, 0x028FBD18, ShulkerBullet *, const Direction *)(this, direction);
        }

        void selectNextMoveDirection(const Direction::Axis *axis)
        {
            MLINK_FUNC(void, 0x028FBD20, ShulkerBullet *, const Direction::Axis *)(this, axis);
        }

        void onHit(const HitResult *hitResult)
        {
            MLINK_FUNC(void, 0x028FC918, ShulkerBullet *, const HitResult *)(this, hitResult);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x028FD0A4, ShulkerBullet *)(this);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x028FE48C, ShulkerBullet *, CompoundTag *)(this, tag);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x028FEF54, ShulkerBullet *, CompoundTag *)(this, tag);
        }

        bool shouldRenderAtSqrDistance(double distance)
        {
            return MLINK_FUNC(bool, 0x028FFAAC, ShulkerBullet *, double)(this, distance);
        }

        float getBrightness()
        {
            return MLINK_FUNC(float, 0x028FFAC4, ShulkerBullet *)(this);
        }

        int getLightColor()
        {
            return MLINK_FUNC(int, 0x028FFAD0, ShulkerBullet *)(this);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x028FFADC, ShulkerBullet *)(this);
        }

        bool hurt(const DamageSource *source, float damage)
        {
            return MLINK_FUNC(bool, 0x028FFAE4, ShulkerBullet *, const DamageSource *, float)(this, source, damage);
        }

        bool isOnFire()
        {
            return MLINK_FUNC(bool, 0x028FFBBC, ShulkerBullet *)(this);
        }

        mboost::shared_ptr<LivingEntity> owner;
        mboost::shared_ptr<Entity> target;
        Direction *moveDirection;
        int flightSteps;
        double targetDeltaX;
        double targetDeltaY;
        double targetDeltaZ;
        mstd::basic_string<wchar_t> field_0x380;
        BlockPos field_0x3A0;
        mstd::basic_string<wchar_t> field_0x3AC;
        BlockPos field_0x3CC;
    };
    MC_CHECK_SIZE(ShulkerBullet, 0x3D8);
} // namespace mc
