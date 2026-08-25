#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class LevelData
    {
    public:
        uint64_t seed;
        uint32_t levelType;
        uint32_t levelTypeOptions;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1c;
        uint64_t time;
        uint64_t dayTime;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint64_t sizeOnDisk;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4c;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5c;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6c;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint8_t isGenerateMapFeatures;
        uint8_t isHardcore;
        uint8_t llowCommands;
        uint8_t isInitialized;
        uint8_t modernEnd;
        uint8_t field_0x85;
        uint8_t field_0x86;
        uint8_t field_0x87;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t cloudHeight;
        uint32_t newSeaLevel;
        uint32_t size;
        uint32_t hellScale;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t gameType;
        uint32_t biomeCentreXChunk;
        uint32_t biomeCentreZChunk;
        uint32_t gameRules;
        uint32_t vtbl;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
    };
    MC_CHECK_SIZE(LevelData, 0xF0);
} // namespace mc
