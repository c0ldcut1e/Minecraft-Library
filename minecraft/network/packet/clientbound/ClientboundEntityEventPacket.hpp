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
    class ClientboundEntityEventPacket : public Packet, public mboost::enable_shared_from_this<ClientboundEntityEventPacket>
    {
    public:
        ClientboundEntityEventPacket()
        {
            MLINK_FUNC(void, 0x021D7D3C, ClientboundEntityEventPacket *)(this);
        }

        ClientboundEntityEventPacket(const mboost::shared_ptr<Entity> &entity, uint8_t eventId, int data)
        {
            MLINK_FUNC(void, 0x021D7DEC, ClientboundEntityEventPacket *, mboost::shared_ptr<Entity>, uint8_t, int)(this, entity, eventId, data);
        }

        int entityId;
        uint8_t eventId;
        uint8_t field_0x1D;
        uint8_t field_0x1E;
        uint8_t field_0x1F;
        int data;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(ClientboundEntityEventPacket, 0x28);
} // namespace mc
