#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MCRandom.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class PerlinNoise
    {
    public:
        PerlinNoise(MCRandom *random, int unk1)
        {
            MLINK_FUNC(void, 0x027790C8, PerlinNoise *, MCRandom *, int)(this, random, unk1);
        }

        uint32_t vtbl;
        uint32_t field_0x4;
        uint32_t field_0x8;
    };
    MC_CHECK_SIZE(PerlinNoise, 0xC);
} // namespace mc
