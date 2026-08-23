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
        char playerName0[21];
        char playerName1[21];
        char playerName2[21];
        char playerName3[21];
        char playerName4[21];
        char playerName5[21];
        char playerName6[21];
        char playerName7[21];
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
