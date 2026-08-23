#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"

namespace mc
{
    class NQRNetworkManager_WiiU;

    class NQRNetworkPlayer
    {
    public:
        enum eNQRNetworkPlayerType
        {
            NNP_TYPE_HOST = 0,
            NNP_TYPE_LOCAL,
            NNP_TYPE_REMOTE,
        };

        class Custom
        {
        public:
            static uint64_t GetStationId(NQRNetworkPlayer *player)
            {
                return (static_cast<uint64_t>(player->stationIdHigh) << 32) | static_cast<uint64_t>(player->principalId);
            }
        };

        NQRNetworkPlayer(NQRNetworkManager_WiiU *manager, eNQRNetworkPlayerType type, bool isHost, uint64_t stationId, int localPlayerIdx,
                         PlayerUID *uid, const char *name, const wchar_t *wname)
        {
            MLINK_FUNC(void, 0x0346721C, NQRNetworkPlayer *, NQRNetworkManager_WiiU *, eNQRNetworkPlayerType, bool, uint64_t, int, PlayerUID *,
                       const char *, const wchar_t *)(this, manager, type, isHost, stationId, localPlayerIdx, uid, name, wname);
        }

        void ConnectionComplete()
        {
            MLINK_FUNC(void, 0x03467650, NQRNetworkPlayer *)(this);
        }

        uint32_t GetCustomDataValue()
        {
            return MLINK_FUNC(uint32_t, 0x034670F4, NQRNetworkPlayer *)(this);
        }

        const wchar_t *getMiiName()
        {
            return MLINK_FUNC(wchar_t *, 0x0346701C, NQRNetworkPlayer *)(this);
        }

        int GetSessionIndex()
        {
            return MLINK_FUNC(int, 0x034679EC, NQRNetworkPlayer *)(this);
        }

        bool IsConnectionComplete()
        {
            return MLINK_FUNC(bool, 0x03467644, NQRNetworkPlayer *)(this);
        }

        bool IsHost()
        {
            return MLINK_FUNC(bool, 0x034670A8, NQRNetworkPlayer *)(this);
        }

        void SetCustomDataValue(uint32_t value)
        {
            MLINK_FUNC(void, 0x034670FC, NQRNetworkPlayer *, uint32_t)(this, value);
        }

        void SmallIdAllocated(uint8_t smallId)
        {
            MLINK_FUNC(void, 0x03467660, NQRNetworkPlayer *, uint8_t)(this, smallId);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t localPlayerIndex;
        uint32_t stationIdHigh;
        uint32_t principalId;
        uint8_t smallId;
        uint8_t field_0x19;
        uint8_t field_0x1A;
        uint8_t field_0x1B;
        PlayerUID uid;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint8_t field_0x48;
        uint8_t field_0x49;
        char networkName[0x15];
        wchar_t networkNameW[0x15];
        uint32_t customDataValue;
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
    };
    MC_CHECK_SIZE(NQRNetworkPlayer, 0x110);
} // namespace mc
