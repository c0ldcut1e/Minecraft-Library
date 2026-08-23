#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class Entity;
    class Vec3;
    class Direction;

    class HitResult
    {
    public:
        enum Type
        {
            MISS   = 0,
            BLOCK  = 1,
            ENTITY = 2
        };

        HitResult(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x024F3DAC, HitResult *, const mboost::shared_ptr<Entity> &)(this, entity);
        }

        BlockPos blockPos;
        Type hitType;
        Direction *direction;
        Vec3 *pos;
        mboost::shared_ptr<mc::Entity> entity;
    };
    MC_CHECK_SIZE(HitResult, 0x20);
} // namespace mc
