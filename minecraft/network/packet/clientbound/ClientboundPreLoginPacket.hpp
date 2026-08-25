#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/basic_string.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundPreLoginPacket : public Packet
    {
    public:
        ClientboundPreLoginPacket(const mstd::basic_string<wchar_t> &loginKey, PlayerUID *playerXuids, uint32_t playerCount, uint8_t friendsOnlyBits,
                                  uint32_t ugcPlayersVersion, char *uniqueSaveName, uint32_t serverSettings, uint32_t customGameModeHostOptions,
                                  uint8_t hostIndex, uint32_t texturePackId, bool isMatchmakingEnabled, uint32_t miniGameId)
        {
            MLINK_FUNC(void, 0x021DCD50, ClientboundPreLoginPacket *, mstd::basic_string<wchar_t>, PlayerUID *, uint32_t, uint8_t, uint32_t, char *,
                       uint32_t, uint32_t, uint8_t, uint32_t, bool, uint32_t)
            (this, loginKey, playerXuids, playerCount, friendsOnlyBits, ugcPlayersVersion, uniqueSaveName, serverSettings, customGameModeHostOptions,
             hostIndex, texturePackId, isMatchmakingEnabled, miniGameId);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        PlayerUID *playerXuids;
        uint32_t playerCount;
        uint8_t friendsOnlyBits;
        uint32_t ugcPlayersVersion;
        char uniqueSaveName[14];
        uint32_t serverSettings;
        uint8_t hostIndex;
        uint32_t texturePackId;
        uint16_t netcodeVersion;
        bool isMatchmakingEnabled;
        uint32_t miniGameId;
        mstd::basic_string<wchar_t> loginKey;
        uint32_t field_0x6C;
    };
    MC_CHECK_SIZE(ClientboundPreLoginPacket, 0x70);
} // namespace mc
