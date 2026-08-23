#pragma once

#include "MinecraftLib.hpp"

namespace mc
{
    struct fuiRect
    {
        float xMin;
        float xMax;
        float yMin;
        float yMax;
    };
    MC_CHECK_SIZE(fuiRect, 0x10);
} // namespace mc
