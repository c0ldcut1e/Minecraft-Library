#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/basic_string.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundLoginPacket : public Packet
    {
    public:
        ClientboundLoginPacket(const mstd::basic_string<wchar_t> &userName, int clientVersion, PlayerUID offlineXuid, PlayerUID onlineXuid,
                               bool friendsOnlyUGC, uint32_t ugcPlayersVersion, uint32_t skinId, uint32_t capeId, bool isGuest, bool newSeaLevel)
        {
            MLINK_FUNC(void, 0x021DB1C0, ClientboundLoginPacket *, const mstd::basic_string<wchar_t> &, int, PlayerUID, PlayerUID, bool, uint32_t,
                       uint32_t, uint32_t, bool, bool)(this, userName, clientVersion, offlineXuid, onlineXuid, friendsOnlyUGC, ugcPlayersVersion,
                                                       skinId, capeId, isGuest, newSeaLevel);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        int clientVersion;
        mstd::basic_string<wchar_t> userName;
        uint32_t field_0x3C;
        int64_t seed;
        uint8_t dimension;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        PlayerUID offlineXuid;
        PlayerUID onlineXuid;
        uint8_t difficulty;
        bool friendsOnlyUGC;
        uint8_t field_0x76;
        uint8_t field_0x77;
        uint32_t ugcPlayersVersion;
        uint32_t multiplayerInstanceId;
        uint8_t playerIndex;
        uint8_t field_0x81;
        uint8_t field_0x82;
        uint8_t field_0x83;
        uint32_t playerSkinId;
        uint32_t playerCapeId;
        bool isGuest;
        bool newSeaLevel;
        uint8_t field_0x8E;
        uint8_t field_0x8F;
        void *levelType;
        uint32_t uiGamePrivileges;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint8_t field_0xA4;
        uint8_t field_0xA5;
        uint8_t field_0xA6;
        uint8_t field_0xA7;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint8_t field_0xB0;
        uint8_t field_0xB1;
        uint8_t field_0xB2;
        uint8_t field_0xB3;
        uint32_t field_0xB4;
        uint32_t gameType;
        uint8_t mapHeight;
        uint8_t maxPlayers;
        uint8_t field_0xBE;
        uint8_t field_0xBF;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
    };
    MC_CHECK_SIZE(ClientboundLoginPacket, 0xC8);
} // namespace mc
