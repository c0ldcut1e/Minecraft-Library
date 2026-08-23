#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class GameModeOptions
    {
    public:
        uint32_t options;
    };
    MC_CHECK_SIZE(GameModeOptions, 0x4);
} // namespace mc
