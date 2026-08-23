#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class fuiBitmap
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t width;
        uint32_t height;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        int textureHandle;
    };
    MC_CHECK_SIZE(fuiBitmap, 0x20);
} // namespace mc
