#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class LargeFeature
    {
    public:
        LargeFeature()
        {
            MLINK_FUNC(void, 0x0253DC08, LargeFeature *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t vtbl;
    };
    MC_CHECK_SIZE(LargeFeature, 0x28);
} // namespace mc
