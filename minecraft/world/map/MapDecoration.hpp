#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class MapDecoration
    {
    public:
        int type;
        uint8_t field_0x4;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t x;
        uint8_t field_0x8;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t y;
        uint8_t rot;
        uint8_t field_0xD;
        uint8_t field_0xE;
        uint8_t field_0xF;
        uint32_t field_0x10;
        uint32_t field_0x14;
    };
    MC_CHECK_SIZE(MapDecoration, 0x18);
} // namespace mc
