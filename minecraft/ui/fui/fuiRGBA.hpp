#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class fuiRGBA
    {
    public:
        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a;
    };
    MC_CHECK_SIZE(fuiRGBA, 0x4);
} // namespace mc
