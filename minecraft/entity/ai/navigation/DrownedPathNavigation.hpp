#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Mob.hpp"
#include "entity/ai/navigation/GroundPathNavigation.hpp"
#include "utils/Vec3.hpp"
#include "world/level/Level.hpp"
#include "world/level/pathfinder/AmphibiousNodeEvaluator.hpp"
#include "world/level/pathfinder/Path.hpp"
#include "world/level/pathfinder/PathFinder.hpp"
#include "world/level/pathfinder/WalkNodeEvaluator.hpp"

namespace mc
{
    class DrownedPathNavigation : public GroundPathNavigation
    {
    public:
        DrownedPathNavigation(Mob *mob, Level *level)
            : GroundPathNavigation(GroundPathNavigation::Uninitialized{}), nodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {
            MLINK_FUNC(DrownedPathNavigation *, 0x022E054C, DrownedPathNavigation *, Mob *, Level *)(this, mob, level);
        }

        ~DrownedPathNavigation()
        {
            MLINK_FUNC(void, 0x022EF188, DrownedPathNavigation *, uint32_t)(this, 0);
        }

        bool canMoveDirectly(Vec3 *start, Vec3 *end, int width, int height, int depth)
        {
            return MLINK_FUNC(bool, 0x022F0374, DrownedPathNavigation *, Vec3 *, Vec3 *, int, int, int)(this, start, end, width, height, depth);
        }

        bool canUpdatePath()
        {
            return MLINK_FUNC(bool, 0x022EF5E0, DrownedPathNavigation *)(this);
        }

        Path *createPath(const BlockPos &position)
        {
            return MLINK_FUNC(Path *, 0x022EF270, DrownedPathNavigation *, const BlockPos *)(this, &position);
        }

        Vec3 getTempMobPos()
        {
            return MLINK_FUNC(Vec3, 0x022EF638, DrownedPathNavigation *)(this);
        }

        bool isStableDestination(const BlockPos &position)
        {
            return MLINK_FUNC(bool, 0x022F048C, DrownedPathNavigation *, const BlockPos *)(this, &position);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x022EF6D4, DrownedPathNavigation *)(this);
        }

        void updatePath()
        {
            MLINK_FUNC(void, 0x022EFDE0, DrownedPathNavigation *)(this);
        }

        AmphibiousNodeEvaluator nodeEvaluator;
        PathFinder *groundPathFinder;
        PathFinder *drownedPathFinder;
    };
    MC_CHECK_SIZE(DrownedPathNavigation, 0x168);
} // namespace mc
