#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class MatchmakeParam
    {
    public:
        ~MatchmakeParam()
        {
            MLINK_FUNC(void, 0x0365209C, MatchmakeParam *, uint32_t)(this, 2);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
    };
    MC_CHECK_SIZE(MatchmakeParam, 0x14);
} // namespace nn::nex
