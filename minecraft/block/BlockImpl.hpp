#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Block.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class BlockImpl : public Block
    {
    public:
        BlockImpl(uint32_t material)
        {
            MLINK_FUNC(void, 0x020C97B0, mc::BlockImpl *, uint32_t)(this, material);
        }

        BlockImpl(uint32_t material, uint32_t materialColor)
        {
            MLINK_FUNC(void, 0x020C9930, mc::BlockImpl *, uint32_t, uint32_t)(this, material, materialColor);
        }

        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
    };
    MC_CHECK_SIZE(BlockImpl, 0xA0);
} // namespace mc
