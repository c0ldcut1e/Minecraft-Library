#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class BlockPathTypes
    {
    public:
        BlockPathTypes(int ordinal, float malus)
        {
            MLINK_FUNC(BlockPathTypes *, 0x0217B01C, BlockPathTypes *, int, float)(this, ordinal, malus);
        }

        int ordinal()
        {
            return MLINK_FUNC(int, 0x0217B08C, BlockPathTypes *)(this);
        }

        float getMalus()
        {
            return MLINK_FUNC(float, 0x0217B094, BlockPathTypes *)(this);
        }

        int value;
        float malus;
    };
    MC_CHECK_SIZE(BlockPathTypes, 0x8);
} // namespace mc
