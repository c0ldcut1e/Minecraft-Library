#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundTeleportEntityPacket : public Packet
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

        uint32_t field_0x10;
        uint32_t field_0x14;
        int entityId;
        int x;
        int y;
        int z;
        uint8_t yRot;
        uint8_t xRot;
        bool onGround;
    };
    MC_CHECK_SIZE(ClientboundTeleportEntityPacket, 0x30);
} // namespace mc
