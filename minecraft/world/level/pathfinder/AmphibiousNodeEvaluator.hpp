#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "world/level/pathfinder/WalkNodeEvaluator.hpp"

namespace mc
{
    class AmphibiousNodeEvaluator : public WalkNodeEvaluator
    {
    public:
        AmphibiousNodeEvaluator(Entity *entity) : WalkNodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {
            MLINK_FUNC(AmphibiousNodeEvaluator *, 0x0207896C, AmphibiousNodeEvaluator *, Entity *)(this, entity);
        }

        explicit AmphibiousNodeEvaluator(WalkNodeEvaluator::Uninitialized unused) : WalkNodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {}

        void done()
        {
            MLINK_FUNC(void, 0x02078AD8, AmphibiousNodeEvaluator *)(this);
        }

        Node *getGoal(double x, double y, double z)
        {
            return MLINK_FUNC(Node *, 0x02078C68, AmphibiousNodeEvaluator *, double, double, double)(this, x, y, z);
        }

        Node *getAcceptedNode(int x, int y, int z, int maxUpStep, double floorLevel)
        {
            return MLINK_FUNC(Node *, 0x02078EA0, AmphibiousNodeEvaluator *, int, int, int, int, double)(this, x, y, z, maxUpStep, floorLevel);
        }

        int getNeighbors(mc::ArrayWithLength<Node *> *neighbors, Node *node, Node *goal, float maxDistance)
        {
            return MLINK_FUNC(int, 0x02079564, AmphibiousNodeEvaluator *, mc::ArrayWithLength<Node *> *, Node *, Node *, float)(this, neighbors, node,
                                                                                                                                goal, maxDistance);
        }

        Node *getStart()
        {
            return MLINK_FUNC(Node *, 0x02078B54, AmphibiousNodeEvaluator *)(this);
        }

        BlockPathTypes *getBlockPathType(LevelSource *levelSource, int x, int y, int z)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02079EE0, AmphibiousNodeEvaluator *, LevelSource *, int, int, int)(this, levelSource, x, y, z);
        }

        BlockPathTypes *getBlockPathTypes(LevelSource *levelSource, int x, int y, int z, int width, int height, int depth, bool canOpenDoors,
                                          bool canPassDoors, int &pathTypes, const BlockPathTypes *pathType)
        {
            return MLINK_FUNC(BlockPathTypes *, 0x02079B88, AmphibiousNodeEvaluator *, LevelSource *, int, int, int, int, int, int, bool, bool, int *,
                              const BlockPathTypes *)(this, levelSource, x, y, z, width, height, depth, canOpenDoors, canPassDoors, &pathTypes,
                                                      pathType);
        }

        double inWaterDependentPosHeight(const BlockPos &position)
        {
            return MLINK_FUNC(double, 0x02078D58, AmphibiousNodeEvaluator *, const BlockPos *)(this, &position);
        }

        void prepare(LevelSource *levelSource, Mob *mob)
        {
            MLINK_FUNC(void, 0x020789E8, AmphibiousNodeEvaluator *, LevelSource *, Mob *)(this, levelSource, mob);
        }

        float oldWaterCost;
        float oldWalkableCost;
    };
    MC_CHECK_SIZE(AmphibiousNodeEvaluator, 0x78);
} // namespace mc
