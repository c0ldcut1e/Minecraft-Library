#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "entity/Mob.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/Vec3.hpp"
#include "world/level/Level.hpp"
#include "world/level/pathfinder/Path.hpp"
#include "world/level/pathfinder/PathFinder.hpp"

namespace mc
{
    class PathNavigation
    {
    public:
        PathNavigation(Mob *mob, Level *level)
        {
            MLINK_FUNC(PathNavigation *, 0x02755F74, PathNavigation *, Mob *, Level *)(this, mob, level);
        }

        struct Uninitialized
        {
        };

        explicit PathNavigation(Uninitialized)
        {}

        ~PathNavigation()
        {
            MLINK_FUNC(void, 0x02756150, PathNavigation *, uint32_t)(this, 0);
        }

        Path *createDirectPath(const BlockPos &position)
        {
            return MLINK_FUNC(Path *, 0x027577D4, PathNavigation *, const BlockPos *)(this, &position);
        }

        Path *createPath(const BlockPos &position)
        {
            return MLINK_FUNC(Path *, 0x027571D0, PathNavigation *, const BlockPos *)(this, &position);
        }

        Path *createPath(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(Path *, 0x02757444, PathNavigation *, mboost::shared_ptr<Entity>)(this, entity);
        }

        Path *createPath(double x, double y, double z)
        {
            return MLINK_FUNC(Path *, 0x02756340, PathNavigation *, double, double, double)(this, x, y, z);
        }

        void debugPathfinding()
        {
            MLINK_FUNC(void, 0x02758320, PathNavigation *)(this);
        }

        void doStuckDetection(Vec3 *position)
        {
            MLINK_FUNC(void, 0x02758A30, PathNavigation *, Vec3 *)(this, position);
        }

        Path *getPath()
        {
            return MLINK_FUNC(Path *, 0x02758024, PathNavigation *)(this);
        }

        PathFinder *getPathFinder()
        {
            return MLINK_FUNC(PathFinder *, 0x0275621C, PathNavigation *)(this);
        }

        double getMaxDist()
        {
            return MLINK_FUNC(double, 0x0275622C, PathNavigation *)(this);
        }

        bool hasDelayedRecomputation()
        {
            return MLINK_FUNC(bool, 0x02756260, PathNavigation *)(this);
        }

        bool isDone()
        {
            return MLINK_FUNC(bool, 0x027079F8, PathNavigation *)(this);
        }

        bool isInLiquid()
        {
            return MLINK_FUNC(bool, 0x02759448, PathNavigation *)(this);
        }

        bool isRiverFollowing()
        {
            return MLINK_FUNC(bool, 0x027596F4, PathNavigation *)(this);
        }

        bool moveTo(Path *path, double speedModifier)
        {
            return MLINK_FUNC(bool, 0x02757E54, PathNavigation *, Path *, double)(this, path, speedModifier);
        }

        bool moveTo(mboost::shared_ptr<Entity> entity, double speedModifier)
        {
            return MLINK_FUNC(bool, 0x02757B20, PathNavigation *, mboost::shared_ptr<Entity>, double)(this, entity, speedModifier);
        }

        void moveTo(double x, double y, double z, double speedModifier)
        {
            MLINK_FUNC(void, 0x02757A24, PathNavigation *, double, double, double, double)(this, x, y, z, speedModifier);
        }

        void recomputePath()
        {
            MLINK_FUNC(void, 0x02756268, PathNavigation *)(this);
        }

        void setIsRiverFollowing(bool value)
        {
            MLINK_FUNC(void, 0x027596FC, PathNavigation *, bool)(this, value);
        }

        void setLevel(Level *level)
        {
            MLINK_FUNC(void, 0x027596EC, PathNavigation *, Level *)(this, level);
        }

        void setSpeedModifier(double value)
        {
            MLINK_FUNC(void, 0x02756224, PathNavigation *, double)(this, value);
        }

        void stop()
        {
            MLINK_FUNC(void, 0x02752FE0, PathNavigation *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02758324, PathNavigation *)(this);
        }

        void trimPath()
        {
            MLINK_FUNC(void, 0x027594E0, PathNavigation *)(this);
        }

        void updatePath()
        {
            MLINK_FUNC(void, 0x02758CCC, PathNavigation *)(this);
        }

        Path *path;
        Mob *mob;
        Level *level;
        uint32_t field_0xC;
        double speedModifier;
        MC_UNDEFINED_TYPE(uint32_t *, MoveControl) moveControl;
        uint32_t tickCount;
        uint32_t lastStuckCheck;
        Vec3 *lastStuckCheckPosition;
        Vec3 *timeoutCachedNode;
        uint32_t timeoutTimerLow;
        uint32_t timeoutTimerHigh;
        uint32_t timeoutLimitLow;
        uint32_t timeoutLimitHigh;
        uint32_t field_0x3C;
        double timeoutLimit;
        bool isRiverFollowingValue;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        float maxDistanceToWaypoint;
        bool delayedRecomputation;
        uint8_t field_0x51;
        uint8_t field_0x52;
        uint8_t field_0x53;
        uint32_t field_0x54;
        uint32_t lastRecomputeTimeHigh;
        uint32_t lastRecomputeTimeLow;
        BlockPos *targetPosition;
        PathFinder *pathFinder;
        void *vtable;
        uint32_t field_0x6C;
    };
    MC_CHECK_SIZE(PathNavigation, 0x70);
} // namespace mc
