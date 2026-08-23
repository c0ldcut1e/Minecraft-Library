#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"

namespace mc
{
    class EntityTickCache
    {
    public:
        BlockPos blockPosition;
        BlockPos blockPosition2;
        BlockPos blockPosition3;
        BlockPos blockPosition4;
        BlockPos blockPosition5;
        bool isMoving;
        uint8_t field_0x3D;
        uint8_t field_0x3E;
        uint8_t field_0x3F;
    };
    MC_CHECK_SIZE(EntityTickCache, 0x40);
} // namespace mc
