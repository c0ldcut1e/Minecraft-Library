#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/Minecraft.hpp"

namespace mc
{
    class ClientScoreboard
    {
    public:
        ClientScoreboard()
        {
            MLINK_FUNC(void, 0x03079900, ClientScoreboard *)(this);
        }

        ~ClientScoreboard()
        {
            MLINK_FUNC(void, 0x0308E224, ClientScoreboard *, uint32_t)(this, 0);
        }

        void resetPlayerScores()
        {
            MLINK_FUNC(void, 0x03079990, ClientScoreboard *)(this);
        }

        int getActivePlayerCount(Minecraft::EMiniGameId miniGameId)
        {
            return MLINK_FUNC(int, 0x03079B24, ClientScoreboard *, Minecraft::EMiniGameId)(this, miniGameId);
        }

        bool hasStats()
        {
            return MLINK_FUNC(bool, 0x0307CF1C, ClientScoreboard *)(this);
        }

        bool hasWinner(int round)
        {
            return MLINK_FUNC(bool, 0x0307CFAC, ClientScoreboard *, int)(this, round);
        }

        int getRoundLength(uint32_t round)
        {
            return MLINK_FUNC(int, 0x0307C0E0, ClientScoreboard *, uint32_t)(this, round);
        }

        bool glideHasOverallWinner()
        {
            return MLINK_FUNC(bool, 0x0307D51C, ClientScoreboard *)(this);
        }

        bool getGlideOverallWinner(bool includeTies)
        {
            return MLINK_FUNC(bool, 0x0307D6D0, ClientScoreboard *, bool)(this, includeTies);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        bool field_0x18;
        uint8_t field_0x19;
        uint8_t field_0x1A;
        uint8_t field_0x1B;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        int field_0x30;
        uint32_t *field_0x34;
        bool field_0x38;
        uint8_t field_0x39;
        uint8_t field_0x3A;
        uint8_t field_0x3B;
        int field_0x3C;
        int field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        int field_0x4C;
    };
    MC_CHECK_SIZE(ClientScoreboard, 0x50);
} // namespace mc
