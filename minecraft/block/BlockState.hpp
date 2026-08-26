#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class BlockState
    {
    public:
        uint32_t *vtable;
        uint16_t field_0x4;
        uint8_t field_0x6;
        uint8_t field_0x7;
        uint8_t field_0x8;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t field_0xB;
        uint8_t field_0xC;
        uint8_t field_0xD;
        uint8_t field_0xE;
        uint8_t field_0xF;
        uint8_t field_0x10;
        uint8_t field_0x11;
        uint8_t field_0x12;
        uint8_t field_0x13;
        uint16_t *field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(BlockState, 0x20);
} // namespace mc
