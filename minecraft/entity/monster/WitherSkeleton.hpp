#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/AbstractSkeleton.hpp"
#include "entity/monster/WitherBoss.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class WitherSkeleton : public AbstractSkeleton
    {
    public:
        WitherSkeleton(Level *level)
        {
            MLINK_FUNC(void, 0x02A485DC, WitherSkeleton *, Level *)(this, level);
        }

        static WitherSkeleton *Create(Level *level)
        {
            return MLINK_FUNC(WitherSkeleton *, 0x023E60E8, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE824)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A486FC, WitherSkeleton *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02A4882C, WitherSkeleton *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A494D8, WitherSkeleton *)(this);
        }

        mboost::shared_ptr<WitherBoss> witherParent;
    };
    MC_CHECK_SIZE(WitherSkeleton, 0x748);
} // namespace mc
