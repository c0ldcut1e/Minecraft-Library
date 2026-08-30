#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "entity/Mob.hpp"
#include "world/level/LevelSource.hpp"
#include "world/level/pathfinder/BinaryHeap.hpp"
#include "world/level/pathfinder/NodeEvaluator.hpp"
#include "world/level/pathfinder/Path.hpp"

namespace mc
{
    class PathFinder : public BinaryHeap
    {
    public:
        PathFinder(NodeEvaluator *nodeEvaluator)
        {
            MLINK_FUNC(PathFinder *, 0x0278BD4C, PathFinder *, NodeEvaluator *)(this, nodeEvaluator);
        }

        ~PathFinder()
        {
            MLINK_FUNC(void, 0x027560B8, PathFinder *, uint32_t)(this, 0);
        }

        Path *findDirectPath(LevelSource *levelSource, Mob *mob, const BlockPos &position, float maxDistance)
        {
            return MLINK_FUNC(Path *, 0x027576D4, PathFinder *, LevelSource *, Mob *, const BlockPos *, float)(this, levelSource, mob, &position,
                                                                                                               maxDistance);
        }

        Path *findPath(LevelSource *levelSource, Mob *mob, const BlockPos &position, float maxDistance)
        {
            return MLINK_FUNC(Path *, 0x02756EA8, PathFinder *, LevelSource *, Mob *, const BlockPos *, float)(this, levelSource, mob, &position,
                                                                                                               maxDistance);
        }

        Path *findPath(LevelSource *levelSource, Mob *mob, Entity *entity, float maxDistance)
        {
            return MLINK_FUNC(Path *, 0x02757420, PathFinder *, LevelSource *, Mob *, Entity *, float)(this, levelSource, mob, entity, maxDistance);
        }

        Path *findPath(LevelSource *levelSource, Mob *mob, double x, double y, double z, float maxDistance)
        {
            return MLINK_FUNC(Path *, 0x02756C08, PathFinder *, LevelSource *, Mob *, double, double, double, float)(this, levelSource, mob, x, y, z,
                                                                                                                     maxDistance);
        }

        Path *findPath(Node *start, Node *goal, float maxDistance)
        {
            return MLINK_FUNC(Path *, 0x027566A4, PathFinder *, Node *, Node *, float)(this, start, goal, maxDistance);
        }

        Path *reconstructPath(Node *start, Node *goal)
        {
            return MLINK_FUNC(Path *, 0x02756544, PathFinder *, Node *, Node *)(this, start, goal);
        }

        mc::ArrayWithLength<Node *> *neighbors;
        NodeEvaluator *nodeEvaluator;
    };
    MC_CHECK_SIZE(PathFinder, 0x14);
} // namespace mc
