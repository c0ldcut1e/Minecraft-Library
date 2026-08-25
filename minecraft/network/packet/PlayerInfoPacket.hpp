#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class ServerPlayer;

    class PlayerInfoPacket : public Packet, public mboost::enable_shared_from_this<PlayerInfoPacket>
    {
    public:
        PlayerInfoPacket(uint8_t smallId, short colourIndex, uint32_t privileges, uint8_t unk)
        {
            MLINK_FUNC(void, 0x02785F70, PlayerInfoPacket *, uint8_t, short, uint32_t, uint8_t)(this, smallId, colourIndex, privileges, unk);
        }

        PlayerInfoPacket(const mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x02786034, PlayerInfoPacket *, const mboost::shared_ptr<ServerPlayer> &)(this, player);
        }

        uint8_t field_0x18;
        uint8_t networkSmallId;
        short colourIndex;
        uint32_t privileges;
        uint32_t field_0x20;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(PlayerInfoPacket, 0x28);
} // namespace mc
