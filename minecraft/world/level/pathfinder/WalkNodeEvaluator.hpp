#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "entity/Entity.hpp"
#include "utils/Direction.hpp"
#include "world/level/pathfinder/NodeEvaluator.hpp"

namespace mc
{
    class WalkNodeEvaluator : public NodeEvaluator
    {
    public:
        WalkNodeEvaluator(Entity *entity)
        {
            MLINK_FUNC(WalkNodeEvaluator *, 0x02A5AB14, WalkNodeEvaluator *, Entity *)(this, entity);
        }

        struct Uninitialized
        {
        };

        explicit WalkNodeEvaluator(Uninitialized unused) : NodeEvaluator(NodeEvaluator::Uninitialized{})
        {}

        void done()
        {
            MLINK_FUNC(void, 0x02A5ACFC, WalkNodeEvaluator *)(this);
        }

        Node *getGoal(double x, double y, double z)
        {
            return MLINK_FUNC(Node *, 0x02A5C2B4, WalkNodeEvaluator *, double, double, double)(this, x, y, z);
        }

        Node *getLandNode(int x, int y, int z, int maxUpStep, double floorLevel, const Direction *direction)
        {
            return MLINK_FUNC(Node *, 0x02A5C394, WalkNodeEvaluator *, int, int, int, int, double, const Direction *)(this, x, y, z, maxUpStep,
                                                                                                                      floorLevel, direction);
        }

        int getNeighbors(mc::ArrayWithLength<Node *> *neighbors, Node *node, Node *goal, float maxDistance)
        {
            return MLINK_FUNC(int, 0x02A5CB14, WalkNodeEvaluator *, mc::ArrayWithLength<Node *> *, Node *, Node *, float)(this, neighbors, node, goal,
                                                                                                                          maxDistance);
        }

        Node *getStart()
        {
            return MLINK_FUNC(Node *, 0x02A5BA54, WalkNodeEvaluator *)(this);
        }

        BlockPathTypes *getBlockPathType(Mob *mob, const BlockPos &position)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5ADF8, WalkNodeEvaluator *, Mob *, const BlockPos *)(this, mob, &position);
        }

        BlockPathTypes *getBlockPathType(Mob *mob, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5AD58, WalkNodeEvaluator *, Mob *, int, int, int)(this, mob, x, y, z);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5E194, WalkNodeEvaluator *, LevelSource *, int, int, int)(this, levelSource, x, y, z);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z, Mob *mob, int width, int height, int depth, bool canOpenDoors,
                                         bool canPassDoors)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5D1AC, WalkNodeEvaluator *, LevelSource *, int, int, int, Mob *, int, int, int, bool,
                              bool)(this, levelSource, x, y, z, mob, width, height, depth, canOpenDoors, canPassDoors);
        }

        BlockPathTypes *getBlockPathTypeRaw(LevelSource *levelSource, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5DBD0, WalkNodeEvaluator *, LevelSource *, int, int, int)(this, levelSource, x, y, z);
        }

        BlockPathTypes *getBlockPathTypes(LevelSource *levelSource, int x, int y, int z, int width, int height, int depth, bool canOpenDoors,
                                          bool canPassDoors, int &pathTypes, const BlockPathTypes *pathType)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5D5C0, WalkNodeEvaluator *, LevelSource *, int, int, int, int, int, int, bool, bool, int *,
                              const BlockPathTypes *)(this, levelSource, x, y, z, width, height, depth, canOpenDoors, canPassDoors, &pathTypes,
                                                      pathType);
        }

        BlockPathTypes *checkNeighbourBlocks(LevelSource *levelSource, int x, int y, int z, const BlockPathTypes *pathType)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02A5E008, WalkNodeEvaluator *, LevelSource *, int, int, int,
                              const BlockPathTypes *)(this, levelSource, x, y, z, pathType);
        }

        void prepare(LevelSource *levelSource, Mob *mob)
        {
            MLINK_FUNC(void, 0x02A5ABA8, WalkNodeEvaluator *, LevelSource *, Mob *)(this, levelSource, mob);
        }

        float oldWaterCost;
        bool isOnGround;
        bool isAboveGround;
        uint8_t field_0x6A;
        uint8_t field_0x6B;
        Entity *entity;
    };
    MC_CHECK_SIZE(WalkNodeEvaluator, 0x70);
} // namespace mc
