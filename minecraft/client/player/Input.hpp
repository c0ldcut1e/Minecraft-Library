#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class Input
    {
    public:
        float strafe;
        float forward;
        bool field_0x8;
        bool jumping;
        bool shiftKeyDown;
        bool left;
        bool right;
        bool up;
        bool down;
        bool field_0xF;
        bool field_0x10;
        bool field_0x11;
        uint8_t field_0x12;
        uint8_t field_0x13;
    };
    MC_CHECK_SIZE(Input, 0x14);
} // namespace mc
