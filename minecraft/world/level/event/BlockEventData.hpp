#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"

namespace mc
{
    class BlockEventData
    {
    public:
        BlockEventData(const BlockPos &pos, Block *block, int paramA, int paramB)
        {
            MLINK_FUNC(void, 0x0214A484, BlockEventData *, const BlockPos &, Block *, int, int)(this, pos, block, paramA, paramB);
        }

        const BlockPos &getPos()
        {
            return MLINK_FUNC(const BlockPos &, 0x0214A518, BlockEventData *)(this);
        }

        int getParamA()
        {
            return MLINK_FUNC(int, 0x0214A534, BlockEventData *)(this);
        }

        int getParamB()
        {
            return MLINK_FUNC(int, 0x0214A53C, BlockEventData *)(this);
        }

        Block *getBlock()
        {
            return MLINK_FUNC(Block *, 0x0214A544, BlockEventData *)(this);
        }

        bool equals(BlockEventData &other)
        {
            return MLINK_FUNC(bool, 0x0214A54C, BlockEventData *, BlockEventData &)(this, other);
        }

        BlockPos pos;
        Block *block;
        int paramA;
        int paramB;
    };
    MC_CHECK_SIZE(BlockEventData, 0x18);
} // namespace mc
