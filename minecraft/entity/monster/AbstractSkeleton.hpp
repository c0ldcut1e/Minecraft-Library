#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/Monster.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class AbstractSkeleton : public Monster
    {
    public:
        AbstractSkeleton() = default;

        AbstractSkeleton(Level *level)
        {
            MLINK_FUNC(void, 0x02062748, AbstractSkeleton *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x020B2398)();
        }

        void performRangedAttack(const mboost::shared_ptr<LivingEntity> &target, float distanceFactor)
        {
            MLINK_FUNC(void, 0x02006B4C, AbstractSkeleton *, mboost::shared_ptr<LivingEntity>, float)(this, target, distanceFactor);
        }

        bool isAggressive()
        {
            return MLINK_FUNC(bool, 0x02006FD4, AbstractSkeleton *)(this);
        }

        void setAggressive(bool aggressive)
        {
            MLINK_FUNC(void, 0x02007124, AbstractSkeleton *, bool)(this, aggressive);
        }

        void reassessWeaponGoal()
        {
            MLINK_FUNC(void, 0x02062868, AbstractSkeleton *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02062B1C, AbstractSkeleton *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02062B74, AbstractSkeleton *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02062DC8, AbstractSkeleton *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02062E34, AbstractSkeleton *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02062F30, AbstractSkeleton *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02064F90, AbstractSkeleton *)(this);
        }

        float getRidingHeight()
        {
            return MLINK_FUNC(float, 0x02064F9C, AbstractSkeleton *)(this);
        }

        bool breathesWater()
        {
            return MLINK_FUNC(bool, 0x02064FA8, AbstractSkeleton *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        bool field_0x73C;
        bool field_0x73D;
        uint8_t field_0x73E;
        uint8_t field_0x73F;
    };
    MC_CHECK_SIZE(AbstractSkeleton, 0x740);
} // namespace mc
