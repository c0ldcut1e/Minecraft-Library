#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundMoveEntityPacket : public Packet, public mboost::enable_shared_from_this<ClientboundMoveEntityPacket>
    {
    public:
        class PosRot;
        class Pos;
        class Rot;

        ClientboundMoveEntityPacket()
        {
            MLINK_FUNC(void, 0x021DBE60, ClientboundMoveEntityPacket *)(this);
        }

        ClientboundMoveEntityPacket(int _entityId)
        {
            MLINK_FUNC(void, 0x021DBF24, ClientboundMoveEntityPacket *, int)(this, _entityId);
        }

        int entityId;
        int xa;
        int ya;
        int za;
        uint8_t yRot;
        uint8_t xRot;
        bool onGround;
        bool hasRotation;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ClientboundMoveEntityPacket, 0x30);

    class ClientboundMoveEntityPacket::PosRot : public ClientboundMoveEntityPacket
    {
    public:
        PosRot()
        {
            MLINK_FUNC(void, 0x021DC3CC, ClientboundMoveEntityPacket::PosRot *)(this);
        }

        PosRot(int entityId, int xa, int ya, int za, uint8_t yRot, uint8_t xRot, bool onGround)
        {
            MLINK_FUNC(void, 0x021DC440, ClientboundMoveEntityPacket::PosRot *, int, int, int, int, uint8_t, uint8_t, bool)(this, entityId, xa, ya,
                                                                                                                            za, yRot, xRot, onGround);
        }
    };

    class ClientboundMoveEntityPacket::Pos : public ClientboundMoveEntityPacket
    {
    public:
        Pos()
        {
            MLINK_FUNC(void, 0x021DC71C, ClientboundMoveEntityPacket::Pos *)(this);
        }

        Pos(int entityId, int xa, int ya, int za, bool onGround)
        {
            MLINK_FUNC(void, 0x021DC788, ClientboundMoveEntityPacket::Pos *, int, int, int, int, bool)(this, entityId, xa, ya, za, onGround);
        }
    };

    class ClientboundMoveEntityPacket::Rot : public ClientboundMoveEntityPacket
    {
    public:
        Rot()
        {
            MLINK_FUNC(void, 0x021DC9E4, ClientboundMoveEntityPacket::Rot *)(this);
        }

        Rot(int entityId, uint8_t yRot, uint8_t xRot, bool onGround)
        {
            MLINK_FUNC(void, 0x021DCA58, ClientboundMoveEntityPacket::Rot *, int, uint8_t, uint8_t, bool)(this, entityId, yRot, xRot, onGround);
        }
    };
} // namespace mc
