#pragma once

#include <cstdint>

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

        bool equals(const BlockPos &pos) const
        {
            return MLINK_FUNC(bool, 0x020C3ECC, const BlockPos *, const BlockPos &)(this, pos);
        }

        bool equals(const BlockPos *pos) const
        {
            return MLINK_FUNC(bool, 0x020C3F0C, const BlockPos *, const BlockPos *)(this, pos);
        }

        int hashCode() const
        {
            return MLINK_FUNC(int, 0x020C3F5C, const BlockPos *)(this);
        }

        int randomSeed() const
        {
            return MLINK_FUNC(int, 0x020C3F7C, const BlockPos *)(this);
        }

        int64_t compressBlockPos() const
        {
            return MLINK_FUNC(int64_t, 0x020C450C, const BlockPos *)(this);
        }

        int getRandomSeed() const
        {
            return MLINK_FUNC(int, 0x020C45D0, const BlockPos *)(this);
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
