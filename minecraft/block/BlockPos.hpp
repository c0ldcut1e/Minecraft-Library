#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class BlockPos
    {
    public:
        BlockPos() = default;

        BlockPos(int xPos, int yPos, int zPos)
        {
            MLINK_FUNC(BlockPos *, 0x020C3AD4, BlockPos *, int, int, int)(this, xPos, yPos, zPos);
        }

        auto operator+(const BlockPos &pos) const -> BlockPos
        {
            return {x + pos.x, y + pos.y, z + pos.z};
        }

        auto operator-(const BlockPos &pos) const -> BlockPos
        {
            return {x - pos.x, y - pos.y, z - pos.z};
        }

        auto operator==(const BlockPos &pos) -> bool
        {
            return MLINK_FUNC(bool, 0x020C4BF4, BlockPos *, const BlockPos &)(this, pos);
        }

        auto operator!=(const BlockPos &pos) -> bool
        {
            return MLINK_FUNC(bool, 0x020C4C04, BlockPos *, const BlockPos &)(this, pos);
        }

        int x;
        int y;
        int z;
    };
    MC_CHECK_SIZE(BlockPos, 0xC);
} // namespace mc
