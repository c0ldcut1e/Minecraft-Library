#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "world/level/pathfinder/NodeEvaluator.hpp"

namespace mc
{
    class SwimNodeEvaluator : public NodeEvaluator
    {
    public:
        SwimNodeEvaluator(bool allowBreaching)
        {
            MLINK_FUNC(SwimNodeEvaluator *, 0x029DE510, SwimNodeEvaluator *, bool)(this, allowBreaching);
        }

        struct Uninitialized
        {
        };

        explicit SwimNodeEvaluator(Uninitialized unused) : NodeEvaluator(NodeEvaluator::Uninitialized{})
        {}

        Node *getDirectGoal(const BlockPos &position)
        {
            return MLINK_FUNC(Node *, 0x029DE794, SwimNodeEvaluator *, const BlockPos *)(this, &position);
        }

        Node *getGoal(double x, double y, double z)
        {
            return MLINK_FUNC(Node *, 0x029DE688, SwimNodeEvaluator *, double, double, double)(this, x, y, z);
        }

        int getNeighbors(mc::ArrayWithLength<Node *> *neighbors, Node *node, Node *goal, float maxDistance)
        {
            return MLINK_FUNC(int, 0x029DEA70, SwimNodeEvaluator *, mc::ArrayWithLength<Node *> *, Node *, Node *, float)(this, neighbors, node, goal,
                                                                                                                          maxDistance);
        }

        Node *getStart()
        {
            return MLINK_FUNC(Node *, 0x029DE58C, SwimNodeEvaluator *)(this);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x029DEB80, SwimNodeEvaluator *, LevelSource *, int, int, int)(this, levelSource, x, y, z);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z, Mob *mob, int width, int height, int depth, bool canOpenDoors,
                                         bool canPassDoors)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x029DEB74, SwimNodeEvaluator *, LevelSource *, int, int, int, Mob *, int, int, int, bool,
                              bool)(this, levelSource, x, y, z, mob, width, height, depth, canOpenDoors, canPassDoors);
        }

        BlockPathTypes *getPathTypeAtPos(int x, int y, int z, bool canBreach)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x029DE220, SwimNodeEvaluator *, int, int, int, bool)(this, x, y, z, canBreach);
        }

        bool isFree(int x, int y, int z)
        {
            return MLINK_FUNC(bool, 0x029DE7B0, SwimNodeEvaluator *, int, int, int)(this, x, y, z);
        }

        Node *getWaterNode(int x, int y, int z)
        {
            return MLINK_FUNC(Node *, 0x029DE898, SwimNodeEvaluator *, int, int, int)(this, x, y, z);
        }

        void blockChanged(const BlockPos &position)
        {
            MLINK_FUNC(void, 0x02A11504, SwimNodeEvaluator *, const BlockPos *)(this, &position);
        }

        bool allowBreaching;
        uint8_t field_0x65;
        uint8_t field_0x66;
        uint8_t field_0x67;
    };
    MC_CHECK_SIZE(SwimNodeEvaluator, 0x68);
} // namespace mc
