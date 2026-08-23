#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class SKIN_BOX
    {
    public:
        uint32_t field_0x0;
        float field_0x4;
        float field_0x8;
        float field_0xC;
        float field_0x10;
        float field_0x14;
        float field_0x18;
        float field_0x1C;
        float field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(SKIN_BOX, 0x30);
} // namespace mc
