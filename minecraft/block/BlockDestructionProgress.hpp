#pragma once

#include "mlink/MLink.hpp"

#include "BlockPos.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class BlockDestructionProgress
    {
    public:
        BlockDestructionProgress(int breakerId, const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x0214A39C, BlockDestructionProgress *, int, const BlockPos &)(this, breakerId, pos);
        }

        int getProgress()
        {
            return MLINK_FUNC(int, 0x0214A46C, BlockDestructionProgress *)(this);
        }

        void getPos(BlockPos &out)
        {
            MLINK_FUNC(void, 0x0214A43C, BlockPos *, BlockDestructionProgress *)(&out, this);
        }

        void setProgress(int newProgress)
        {
            MLINK_FUNC(void, 0x0214A458, BlockDestructionProgress *, int)(this, newProgress);
        }

        int getUpdatedRenderTick()
        {
            return MLINK_FUNC(int, 0x0214A47C, BlockDestructionProgress *)(this);
        }

        void updateTick(int tick)
        {
            MLINK_FUNC(void, 0x0214A474, BlockDestructionProgress *, int)(this, tick);
        }

        int breakerId;
        BlockPos position;
        int progress;
        int updatedRenderTick;
    };
    MC_CHECK_SIZE(BlockDestructionProgress, 0x18);
} // namespace mc
