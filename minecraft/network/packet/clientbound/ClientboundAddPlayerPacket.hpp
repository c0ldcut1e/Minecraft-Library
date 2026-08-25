#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/Player.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundAddPlayerPacket : public Packet, public mboost::enable_shared_from_this<ClientboundAddPlayerPacket>
    {
    public:
        ClientboundAddPlayerPacket(const mboost::shared_ptr<Player> &player, PlayerUID _uid1, PlayerUID _uid2, int xPos, int yPos, int zPos,
                                   int16_t _yaw, int16_t _pitch, int param_9)
        {
            MLINK_FUNC(void, 0x021D14D0, ClientboundAddPlayerPacket *, mboost::shared_ptr<Player>, PlayerUID, PlayerUID, int, int, int, int, int,
                       uint32_t)(this, player, _uid1, _uid2, xPos, yPos, zPos, _yaw, _pitch, param_9);
        }

        uint32_t entityId;
        PlayerUID uid1;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        int x;
        int y;
        int z;
        int16_t yaw;
        int16_t pitch;
        PlayerUID uid2;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
    };
    MC_CHECK_SIZE(ClientboundAddPlayerPacket, 0x98);
} // namespace mc
