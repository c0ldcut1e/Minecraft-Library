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
#include "world/level/pathfinder/FlyNodeEvaluator.hpp"
#include "world/level/pathfinder/Path.hpp"
#include "world/level/pathfinder/WalkNodeEvaluator.hpp"

namespace mc
{
    class FlyingPathNavigation : public PathNavigation
    {
    public:
        FlyingPathNavigation(Mob *mob, Level *level)
            : PathNavigation(PathNavigation::Uninitialized{}), nodeEvaluator(WalkNodeEvaluator::Uninitialized{})
        {
            MLINK_FUNC(FlyingPathNavigation *, 0x0243D598, FlyingPathNavigation *, Mob *, Level *)(this, mob, level);
        }

        ~FlyingPathNavigation()
        {
            MLINK_FUNC(void, 0x0246DE98, FlyingPathNavigation *, uint32_t)(this, 0);
        }

        bool canFloat()
        {
            return MLINK_FUNC(bool, 0x0243D654, FlyingPathNavigation *)(this);
        }

        bool canMoveDirectly(Vec3 *start, Vec3 *end, int width, int height, int depth)
        {
            return MLINK_FUNC(bool, 0x0243DE20, FlyingPathNavigation *, Vec3 *, Vec3 *, int, int, int)(this, start, end, width, height, depth);
        }

        bool canUpdatePath()
        {
            return MLINK_FUNC(bool, 0x0243D668, FlyingPathNavigation *)(this);
        }

        Path *createPath(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(Path *, 0x0243D714, FlyingPathNavigation *, mboost::shared_ptr<Entity>)(this, entity);
        }

        Vec3 getTempMobPos()
        {
            return MLINK_FUNC(Vec3, 0x0243D6F4, FlyingPathNavigation *)(this);
        }

        FlyNodeEvaluator *getNodeEvaluator()
        {
            return MLINK_FUNC(FlyNodeEvaluator *, 0x0246DE90, FlyingPathNavigation *)(this);
        }

        bool isStableDestination(const BlockPos &position)
        {
            return MLINK_FUNC(bool, 0x0243E360, FlyingPathNavigation *, const BlockPos *)(this, &position);
        }

        void setCanFloat(bool value)
        {
            MLINK_FUNC(void, 0x0243E34C, FlyingPathNavigation *, bool)(this, value);
        }

        void setCanOpenDoors(bool value)
        {
            MLINK_FUNC(void, 0x0243E324, FlyingPathNavigation *, bool)(this, value);
        }

        void setCanPassDoors(bool value)
        {
            MLINK_FUNC(void, 0x0243E338, FlyingPathNavigation *, bool)(this, value);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0243D770, FlyingPathNavigation *)(this);
        }

        FlyNodeEvaluator nodeEvaluator;
    };
    MC_CHECK_SIZE(FlyingPathNavigation, 0xE0);
} // namespace mc
