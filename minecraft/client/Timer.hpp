#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class Timer
    {
    public:
        Timer(float ticksPerSecond)
        {
            MLINK_FUNC(void, 0x033A1538, Timer *, float)(this, ticksPerSecond);
        }

        void advanceTime()
        {
            MLINK_FUNC(void, 0x033A1618, Timer *)(this);
        }

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
