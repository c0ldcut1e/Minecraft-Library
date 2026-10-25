#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    // TODO: Clean this up
    class GameSessionData
    {
    public:
        uint16_t version;
        char hostName[21];
        char playerNames[8][21];
        uint8_t field_0xBF;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint8_t field_0xC8;
        bool sessionOpen;
        uint8_t playerCount;
        bool valid;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
    };
    MC_CHECK_SIZE(GameSessionData, 0xD4);
} // namespace mc
