#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "block/BlockState.hpp"
#include "entity/EntityTickCache.hpp"
#include "entity/Mob.hpp"
#include "internal/unordered_map.hpp"
#include "world/level/LevelSource.hpp"
#include "world/level/pathfinder/Node.hpp"

namespace mc
{
    class NodeEvaluator
    {
    public:
        NodeEvaluator()
        {
            MLINK_FUNC(NodeEvaluator *, 0x02669434, NodeEvaluator *)(this);
        }

        struct Uninitialized
        {
        };

        explicit NodeEvaluator(Uninitialized unused)
        {}

        ~NodeEvaluator()
        {
            MLINK_FUNC(void, 0x0266979C, NodeEvaluator *, uint32_t)(this, 0);
        }

        void done()
        {
            MLINK_FUNC(void, 0x02669ADC, NodeEvaluator *)(this);
        }

        Node *getDirectGoal(const BlockPos &position)
        {
            return MLINK_FUNC(Node *, 0x0266AD98, NodeEvaluator *, const BlockPos *)(this, &position);
        }

        Node *getNode(int x, int y, int z)
        {
            return MLINK_FUNC(Node *, 0x0266ACB4, NodeEvaluator *, int, int, int)(this, x, y, z);
        }

        bool isCanFloat()
        {
            return MLINK_FUNC(bool, 0x0266ADC8, NodeEvaluator *)(this);
        }

        bool isCanOpenDoors()
        {
            return MLINK_FUNC(bool, 0x0266ADC0, NodeEvaluator *)(this);
        }

        bool isCanPassDoors()
        {
            return MLINK_FUNC(bool, 0x0266ADB8, NodeEvaluator *)(this);
        }

        bool isCanSinkInWaterWalk()
        {
            return MLINK_FUNC(bool, 0x0266ADD8, NodeEvaluator *)(this);
        }

        void prepare(LevelSource *levelSource, Mob *mob)
        {
            MLINK_FUNC(void, 0x026698DC, NodeEvaluator *, LevelSource *, Mob *)(this, levelSource, mob);
        }

        void setCanFloat(bool value)
        {
            MLINK_FUNC(void, 0x0266ADB0, NodeEvaluator *, bool)(this, value);
        }

        void setCanOpenDoors(bool value)
        {
            MLINK_FUNC(void, 0x0266ADA8, NodeEvaluator *, bool)(this, value);
        }

        void setCanPassDoors(bool value)
        {
            MLINK_FUNC(void, 0x0266ADA0, NodeEvaluator *, bool)(this, value);
        }

        void setSinkInWaterWalk(bool value)
        {
            MLINK_FUNC(void, 0x0266ADD0, NodeEvaluator *, bool)(this, value);
        }

        BlockState *getBlockState(LevelSource *levelSource, const BlockPos &position)
        {
            return MLINK_FUNC(BlockState *, 0x0266ADE0, NodeEvaluator *, LevelSource *, const BlockPos *)(this, levelSource, &position);
        }

        BlockState *getBlockState(EntityTickCache &cache, LevelSource *levelSource, const BlockPos &position)
        {
            return MLINK_FUNC(BlockState *, 0x0266ADF8, NodeEvaluator *, EntityTickCache *, LevelSource *, const BlockPos *)(this, &cache,
                                                                                                                             levelSource, &position);
        }

        LevelSource *levelSource;
        Mob *mob;
        mboost::unordered::unordered_map<int, Node *> nodes;
        mboost::unordered::unordered_map<int, BlockState *> blockStates;
        mboost::unordered::unordered_map<int, int> pathTypes;
        int entityWidth;
        int entityHeight;
        int entityDepth;
        bool canPassDoors;
        bool canOpenDoors;
        bool canFloat;
        bool canSinkInWaterWalk;
        void *vtable;
    };
    MC_CHECK_SIZE(NodeEvaluator, 0x64);
} // namespace mc
