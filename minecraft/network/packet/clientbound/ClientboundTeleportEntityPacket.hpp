#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundTeleportEntityPacket : public Packet, public mboost::enable_shared_from_this<ClientboundTeleportEntityPacket>
    {
    public:
        ClientboundTeleportEntityPacket()
        {
            MLINK_FUNC(void, 0x02227EAC, ClientboundTeleportEntityPacket *)(this);
        }

        ClientboundTeleportEntityPacket(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x02227F6C, ClientboundTeleportEntityPacket *, mboost::shared_ptr<Entity>)(this, entity);
        }

        int entityId;
        int x;
        int y;
        int z;
        uint8_t yRot;
        uint8_t xRot;
        bool onGround;
        uint8_t field_0x2B;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ClientboundTeleportEntityPacket, 0x30);
} // namespace mc
