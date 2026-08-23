#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class SmoothFloat
    {
    public:
        SmoothFloat()
        {
            MLINK_FUNC(void, 0x02915FBC, SmoothFloat *)(this);
        }

        float getNewDeltaValue(float newDelta, float speed)
        {
            return MLINK_FUNC(float, 0x02916010, SmoothFloat *, float, float)(this, newDelta, speed);
        }

        float field_0x0;
        float field_0x4;
        float field_0x8;
    };
    MC_CHECK_SIZE(SmoothFloat, 0xC);
} // namespace mc
