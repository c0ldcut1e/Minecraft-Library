#pragma once

#include "MinecraftLib.hpp"

namespace mc
{
    struct UIVec2D
    {
        float x;
        float y;
    };
    MC_CHECK_SIZE(UIVec2D, 0x8);
} // namespace mc
