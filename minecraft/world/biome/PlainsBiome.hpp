#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Biome.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class PlainsBiome : public Biome
    {
    public:
        PlainsBiome(int id, bool unk1, BiomeProperties *properties)
        {
            MLINK_FUNC(void, 0x0277D0BC, PlainsBiome *, int, bool, BiomeProperties *)(this, id, unk1, properties);
        }

        uint32_t field_0x12C;
    };
    MC_CHECK_SIZE(PlainsBiome, 0x130);
} // namespace mc
