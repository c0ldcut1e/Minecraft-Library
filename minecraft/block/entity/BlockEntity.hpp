#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"

namespace mc
{
    class BlockEntity
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        BlockPos position;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(BlockEntity, 0x28);
} // namespace mc
