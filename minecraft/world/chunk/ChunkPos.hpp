#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class ChunkPos
    {
    public:
        ChunkPos(int x, int z)
        {
            MLINK_FUNC(void, 0x021B8030, ChunkPos *, int, int)(this, x, z);
        }

        ChunkPos(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x021B8090, ChunkPos *, const BlockPos &)(this, pos);
        }

        static int64_t asLong(int x, int z)
        {
            return MLINK_FUNC(int64_t, 0x021B80F4, int, int)(x, z);
        }

        static bool eq_test(const ChunkPos &x, const ChunkPos &y)
        {
            return MLINK_FUNC(bool, 0x021B88D0, const ChunkPos &, const ChunkPos &)(x, y);
        }

        int hashCode()
        {
            return MLINK_FUNC(int, 0x021B8130, ChunkPos *)(this);
        }

        double distanceToSqr(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(double, 0x021B818C, ChunkPos *, mboost::shared_ptr<Entity>)(this, entity);
        }

        double distanceToSqr(double x, double z)
        {
            return MLINK_FUNC(double, 0x021B82C4, ChunkPos *, double, double)(this, x, z);
        }

        int getMiddleBlockX()
        {
            return MLINK_FUNC(int, 0x021B8328, ChunkPos *)(this);
        }

        int getMiddleBlockZ()
        {
            return MLINK_FUNC(int, 0x021B8338, ChunkPos *)(this);
        }

        int getMinBlockX()
        {
            return MLINK_FUNC(int, 0x021B8348, ChunkPos *)(this);
        }

        int getMinBlockZ()
        {
            return MLINK_FUNC(int, 0x021B8354, ChunkPos *)(this);
        }

        int getMaxBlockX()
        {
            return MLINK_FUNC(int, 0x021B8360, ChunkPos *)(this);
        }

        int getMaxBlockZ()
        {
            return MLINK_FUNC(int, 0x021B8370, ChunkPos *)(this);
        }

        BlockPos *getMiddleBlockPosition(BlockPos *out, int y)
        {
            MLINK_FUNC(void, 0x021B8380, BlockPos *, ChunkPos *, int)(out, this, y);
            return out;
        }

        BlockPos *getWorldPosition(BlockPos *out)
        {
            MLINK_FUNC(void, 0x021B8868, BlockPos *, ChunkPos *)(out, this);
            return out;
        }

        int x;
        int z;
    };
    MC_CHECK_SIZE(ChunkPos, 0x8);
} // namespace mc
