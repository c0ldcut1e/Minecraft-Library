#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class Biome
    {
    public:
        class BiomeProperties
        {
        public:
            BiomeProperties(const mstd::basic_string<wchar_t> &name)
            {
                MLINK_FUNC(void, 0x020ED218, Biome::BiomeProperties *, const mstd::basic_string<wchar_t> &)(this, name);
            }

            void depth(float depth)
            {
                MLINK_FUNC(void, 0x020ED9C0, Biome::BiomeProperties *, float)(this, depth);
            }

            void dry()
            {
                MLINK_FUNC(void, 0x020ED9C8, Biome::BiomeProperties *)(this);
            }

            void mutated(int mutated)
            {
                MLINK_FUNC(void, 0x020ED9E8, Biome::BiomeProperties *, int)(this, mutated);
            }

            void scale(float scale)
            {
                MLINK_FUNC(void, 0x020ED9B8, Biome::BiomeProperties *, float)(this, scale);
            }

            void setTemperatureAndDownfall(float temperature, float downfall)
            {
                MLINK_FUNC(void, 0x020ED330, Biome::BiomeProperties *, float, float)(this, temperature, downfall);
            }

            void snow()
            {
                MLINK_FUNC(void, 0x020ED9DC, Biome::BiomeProperties *)(this);
            }

            void waterColor(int color)
            {
                MLINK_FUNC(void, 0x020ED9D4, Biome::BiomeProperties *, int)(this, color);
            }

            uint32_t field_0x0;
            uint32_t field_0x4;
            uint32_t field_0x8;
            uint32_t field_0xC;
            uint32_t field_0x10;
            uint32_t field_0x14;
            uint32_t field_0x18;
            uint32_t field_0x1C;
            float _depth;
            float _scale;
            float temperature;
            float downfall;
            int _waterColor;
            bool _snow;
            bool _dry;
            uint8_t field_0x36;
            uint8_t field_0x37;
            int _mutated;
        };

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
    };
    MC_CHECK_SIZE(Biome, 0x12C);
} // namespace mc
