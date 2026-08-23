#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class Timer
    {
    public:
        float ticksPerSecond;
        uint32_t field_0x4;
        double field_0x8;
        int elapsedTicks;
        float partialTicks;
        float timerSpeed;
        float field_0x1C;
        double field_0x20;
        double field_0x28;
        uint32_t field_0x30;
        uint32_t field_0x34;
        double field_0x38;
    };
    MC_CHECK_SIZE(Timer, 0x40);
} // namespace mc
