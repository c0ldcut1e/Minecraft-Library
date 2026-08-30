#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Mob.hpp"
#include "entity/ai/navigation/PathNavigation.hpp"
#include "utils/Vec3.hpp"
#include "world/level/Level.hpp"
#include "world/level/pathfinder/SwimNodeEvaluator.hpp"

namespace mc
{
    class WaterBoundPathNavigation : public PathNavigation
    {
    public:
        WaterBoundPathNavigation(Mob *mob, Level *level, bool createPathFinder, bool allowBreaching)
            : PathNavigation(PathNavigation::Uninitialized{}), nodeEvaluator(SwimNodeEvaluator::Uninitialized{})
        {
            MLINK_FUNC(WaterBoundPathNavigation *, 0x02A5521C, WaterBoundPathNavigation *, Mob *, Level *, bool,
                       bool)(this, mob, level, createPathFinder, allowBreaching);
        }

        struct Uninitialized
        {
        };

        explicit WaterBoundPathNavigation(Uninitialized unused)
            : PathNavigation(PathNavigation::Uninitialized{}), nodeEvaluator(SwimNodeEvaluator::Uninitialized{})
        {}

        ~WaterBoundPathNavigation()
        {
            MLINK_FUNC(void, 0x02ACF024, WaterBoundPathNavigation *, uint32_t)(this, 0);
        }

        bool canMoveDirectly(Vec3 *start, Vec3 *end, int width, int height, int depth)
        {
            return MLINK_FUNC(bool, 0x02A575EC, WaterBoundPathNavigation *, Vec3 *, Vec3 *, int, int, int)(this, start, end, width, height, depth);
        }

        bool canUpdatePath()
        {
            return MLINK_FUNC(bool, 0x02A56F58, WaterBoundPathNavigation *)(this);
        }

        Vec3 getTempMobPos()
        {
            return MLINK_FUNC(Vec3, 0x02A56F68, WaterBoundPathNavigation *)(this);
        }

        SwimNodeEvaluator *getNodeEvaluator()
        {
            return MLINK_FUNC(SwimNodeEvaluator *, 0x02305868, WaterBoundPathNavigation *)(this);
        }

        bool isStableDestination(const BlockPos &position)
        {
            return MLINK_FUNC(bool, 0x02A5775C, WaterBoundPathNavigation *, const BlockPos *)(this, &position);
        }

        void updatePath()
        {
            MLINK_FUNC(void, 0x02A56F98, WaterBoundPathNavigation *)(this);
        }

        SwimNodeEvaluator nodeEvaluator;
    };
    MC_CHECK_SIZE(WaterBoundPathNavigation, 0xD8);
} // namespace mc
