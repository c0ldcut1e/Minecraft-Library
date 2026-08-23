#pragma once

#include <cstdint>

#include "GameModeOptions.hpp"
#include "MinecraftLib.hpp"
#include "entity/player/Abilities.hpp"

namespace mc
{
    class MiniGamePlayerSettings
    {
    public:
        GameModeOptions gameModeOptions;
        Abilities abilities;
        uint32_t field_0x14;
        uint32_t field_0x18;
        bool field_0x1C;
        uint8_t field_0x1D;
        uint8_t field_0x1E;
        uint8_t field_0x1F;
        uint32_t field_0x20;
        uint32_t field_0x24;
        bool field_0x28;
        bool field_0x29;
        bool field_0x2A;
        bool field_0x2B;
        bool field_0x2C;
        bool field_0x2D;
        bool field_0x2E;
        uint8_t field_0x2F;
        bool field_0x30;
        uint8_t field_0x31;
        uint8_t field_0x32;
        uint8_t field_0x33;
        uint32_t field_0x34;
        bool field_0x38;
        uint8_t field_0x39;
        uint8_t field_0x3A;
        uint8_t field_0x3B;
        bool field_0x3C;
        uint8_t field_0x3D;
        uint8_t field_0x3E;
        uint8_t field_0x3F;
        float field_0x40;
        bool field_0x44;
        uint8_t field_0x45;
        uint8_t field_0x46;
        uint8_t field_0x47;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        bool field_0x50;
        bool field_0x51;
        uint8_t field_0x52;
        uint8_t field_0x53;
        uint32_t field_0x54;
        bool field_0x58;
        uint8_t field_0x59;
        uint8_t field_0x5A;
        uint8_t field_0x5B;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        bool field_0x64;
        bool field_0x65;
        bool field_0x66;
        uint8_t field_0x67;
    };
    MC_CHECK_SIZE(MiniGamePlayerSettings, 0x68);
} // namespace mc
