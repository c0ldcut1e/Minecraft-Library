#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "entity/Mob.hpp"
#include "entity/ai/navigation/PathNavigation.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/Vec3.hpp"
#include "world/level/Level.hpp"
#include "world/level/pathfinder/Path.hpp"
#include "world/level/pathfinder/WalkNodeEvaluator.hpp"

namespace mc
{
    class GroundPathNavigation : public PathNavigation
    {
    public:
        GroundPathNavigation(Mob *mob, Level *level, bool createPathFinder)
            : PathNavigation(PathNavigation::Uninitialized{}), nodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {
            MLINK_FUNC(GroundPathNavigation *, 0x02439D24, GroundPathNavigation *, Mob *, Level *, bool)(this, mob, level, createPathFinder);
        }

        struct Uninitialized
        {
        };

        explicit GroundPathNavigation(Uninitialized unused)
            : PathNavigation(PathNavigation::Uninitialized{}), nodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {}

        ~GroundPathNavigation()
        {
            MLINK_FUNC(void, 0x0246DE0C, GroundPathNavigation *, uint32_t)(this, 0);
        }

        bool canFloat()
        {
            return MLINK_FUNC(bool, 0x02439DFC, GroundPathNavigation *)(this);
        }

        bool canOpenDoors()
        {
            return MLINK_FUNC(bool, 0x0243B840, GroundPathNavigation *)(this);
        }

        bool canSinkInWaterWalk()
        {
            return MLINK_FUNC(bool, 0x02439E10, GroundPathNavigation *)(this);
        }

        bool canUpdatePath()
        {
            return MLINK_FUNC(bool, 0x02439E24, GroundPathNavigation *)(this);
        }

        bool canMoveDirectly(Vec3 *start, Vec3 *end, int width, int height, int depth)
        {
            return MLINK_FUNC(bool, 0x0243B3E0, GroundPathNavigation *, Vec3 *, Vec3 *, int, int, int)(this, start, end, width, height, depth);
        }

        Path *createPath(const BlockPos &position)
        {
            return MLINK_FUNC(Path *, 0x0243A150, GroundPathNavigation *, const BlockPos *)(this, &position);
        }

        Path *createPath(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(Path *, 0x0243A5CC, GroundPathNavigation *, mboost::shared_ptr<Entity>)(this, entity);
        }

        Vec3 getTempMobPos()
        {
            return MLINK_FUNC(Vec3, 0x0243A0DC, GroundPathNavigation *)(this);
        }

        WalkNodeEvaluator *getNodeEvaluator()
        {
            return MLINK_FUNC(WalkNodeEvaluator *, 0x0246DE04, GroundPathNavigation *)(this);
        }

        bool shouldAvoidSun()
        {
            return MLINK_FUNC(bool, 0x0243B870, GroundPathNavigation *)(this);
        }

        void setAvoidSun(bool value)
        {
            MLINK_FUNC(void, 0x0243B868, GroundPathNavigation *, bool)(this, value);
        }

        void setCanFloat(bool value)
        {
            MLINK_FUNC(void, 0x0243B854, GroundPathNavigation *, bool)(this, value);
        }

        void setCanOpenDoors(bool value)
        {
            MLINK_FUNC(void, 0x0243B818, GroundPathNavigation *, bool)(this, value);
        }

        void setCanPassDoors(bool value)
        {
            MLINK_FUNC(void, 0x0243B82C, GroundPathNavigation *, bool)(this, value);
        }

        void setSinkInWaterWalk(bool value)
        {
            MLINK_FUNC(void, 0x0243B878, GroundPathNavigation *, bool)(this, value);
        }

        void trimPath()
        {
            MLINK_FUNC(void, 0x0243A628, GroundPathNavigation *)(this);
        }

        WalkNodeEvaluator nodeEvaluator;
        bool avoidSun;
        uint8_t field_0xE1;
        uint8_t field_0xE2;
        uint8_t field_0xE3;
        uint32_t field_0xE4;
    };
    MC_CHECK_SIZE(GroundPathNavigation, 0xE8);
} // namespace mc
