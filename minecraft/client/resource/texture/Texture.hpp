#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class Texture
    {
    public:
        uint32_t id;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t width;
        uint32_t height;
    };
    MC_CHECK_SIZE(Texture, 0x14);
} // namespace mc
