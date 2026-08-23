#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundEntityEventPacket : public Packet
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

        uint32_t field_0x10;
        uint32_t field_0x14;
        int entityId;
        uint8_t eventId;
        uint8_t field_0x1D;
        uint8_t field_0x1E;
        uint8_t field_0x1F;
        int data;
    };
    MC_CHECK_SIZE(ClientboundEntityEventPacket, 0x28);
} // namespace mc
