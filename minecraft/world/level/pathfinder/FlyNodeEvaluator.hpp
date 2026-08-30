#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "world/level/pathfinder/WalkNodeEvaluator.hpp"

namespace mc
{
    class FlyNodeEvaluator : public WalkNodeEvaluator
    {
    public:
        FlyNodeEvaluator(Entity *entity) : WalkNodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {
            MLINK_FUNC(FlyNodeEvaluator *, 0x0243BC90, FlyNodeEvaluator *, Entity *)(this, entity);
        }

        explicit FlyNodeEvaluator(WalkNodeEvaluator::Uninitialized unused) : WalkNodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {}

        void done()
        {
            MLINK_FUNC(void, 0x0243BD70, FlyNodeEvaluator *)(this);
        }

        Node *getGoal(double x, double y, double z)
        {
            return MLINK_FUNC(Node *, 0x0243C478, FlyNodeEvaluator *, double, double, double)(this, x, y, z);
        }

        int getNeighbors(mc::ArrayWithLength<Node *> *neighbors, Node *node, Node *goal, float maxDistance)
        {
            return MLINK_FUNC(int, 0x0243C558, FlyNodeEvaluator *, mc::ArrayWithLength<Node *> *, Node *, Node *, float)(this, neighbors, node, goal,
                                                                                                                         maxDistance);
        }

        Node *getNode(int x, int y, int z)
        {
            return MLINK_FUNC(Node *, 0x0243CEB8, FlyNodeEvaluator *, int, int, int)(this, x, y, z);
        }

        Node *getStart()
        {
            return MLINK_FUNC(Node *, 0x0243BE8C, FlyNodeEvaluator *)(this);
        }

        BlockPathTypes *getBlockPathType(Mob *mob, const BlockPos &position)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x0243BE6C, FlyNodeEvaluator *, Mob *, const BlockPos *)(this, mob, &position);
        }

        BlockPathTypes *getBlockPathType(Mob *mob, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x0243BDCC, FlyNodeEvaluator *, Mob *, int, int, int)(this, mob, x, y, z);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x0243D3E8, FlyNodeEvaluator *, LevelSource *, int, int, int)(this, levelSource, x, y, z);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z, Mob *mob, int width, int height, int depth, bool canOpenDoors,
                                         bool canPassDoors)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x0243CFC0, FlyNodeEvaluator *, LevelSource *, int, int, int, Mob *, int, int, int, bool,
                              bool)(this, levelSource, x, y, z, mob, width, height, depth, canOpenDoors, canPassDoors);
        }

        void prepare(LevelSource *levelSource, Mob *mob)
        {
            MLINK_FUNC(void, 0x0243BD0C, FlyNodeEvaluator *, LevelSource *, Mob *)(this, levelSource, mob);
        }
    };
    MC_CHECK_SIZE(FlyNodeEvaluator, 0x70);
} // namespace mc
