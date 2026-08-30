#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Mob.hpp"
#include "block/BlockPos.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class PathfinderMob : public Mob
    {
    public:
        PathfinderMob() = default;

        PathfinderMob(Level *level)
        {
            MLINK_FUNC(PathfinderMob *, 0x027076F0, PathfinderMob *, Level *)(this, level);
        }

        ~PathfinderMob()
        {
            MLINK_FUNC(void, 0x026D1DD8, PathfinderMob *, uint32_t)(this, 0);
        }

        void clearRestriction()
        {
            MLINK_FUNC(void, 0x02707D58, PathfinderMob *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x02707934, PathfinderMob *)(this);
        }

        bool couldWander()
        {
            return MLINK_FUNC(bool, 0x02708B10, PathfinderMob *)(this);
        }

        BlockPos getRestrictCenter()
        {
            return MLINK_FUNC(BlockPos, 0x02707D34, PathfinderMob *)(this);
        }

        float getRestrictRadius()
        {
            return MLINK_FUNC(float, 0x02707D50, PathfinderMob *)(this);
        }

        float getWalkTargetValue(const BlockPos &position)
        {
            return MLINK_FUNC(float, 0x02707928, PathfinderMob *, const BlockPos *)(this, &position);
        }

        bool hasRestriction()
        {
            return MLINK_FUNC(bool, 0x02707D68, PathfinderMob *)(this);
        }

        bool isPathFinding()
        {
            return MLINK_FUNC(bool, 0x02707A4C, PathfinderMob *)(this);
        }

        bool isWithinRestriction()
        {
            return MLINK_FUNC(bool, 0x02707A84, PathfinderMob *)(this);
        }

        bool isWithinRestriction(const BlockPos &position)
        {
            return MLINK_FUNC(bool, 0x02707C80, PathfinderMob *, const BlockPos *)(this, &position);
        }

        void onLeashDistance(float distance)
        {
            MLINK_FUNC(void, 0x02708B00, PathfinderMob *, float)(this, distance);
        }

        void restrictTo(const BlockPos &position, int radius)
        {
            MLINK_FUNC(void, 0x02707CE8, PathfinderMob *, const BlockPos *, int)(this, &position, radius);
        }

        void tickLeash()
        {
            MLINK_FUNC(void, 0x02707D88, PathfinderMob *)(this);
        }

        uint32_t field_0x708;
        uint32_t field_0x70C;
        uint32_t field_0x710;
        uint32_t field_0x714;
        uint32_t field_0x718;
        BlockPos restrictCenter;
        float restrictRadius;
        float oldWaterCost;
    };
    MC_CHECK_SIZE(PathfinderMob, 0x730);
} // namespace mc
