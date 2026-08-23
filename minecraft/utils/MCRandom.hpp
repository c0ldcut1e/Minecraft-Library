#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class MCRandom
    {
    public:
        MCRandom()
        {
            MLINK_FUNC(void, 0x027DCA84, MCRandom *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x18;
        uint32_t field_0x14;
    };
    MC_CHECK_SIZE(MCRandom, 0x1C);
} // namespace mc
