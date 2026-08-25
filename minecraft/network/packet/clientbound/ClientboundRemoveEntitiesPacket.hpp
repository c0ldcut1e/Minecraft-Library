#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundRemoveEntitiesPacket : public Packet, public mboost::enable_shared_from_this<ClientboundRemoveEntitiesPacket>
    {
    public:
        ClientboundRemoveEntitiesPacket()
        {
            MLINK_FUNC(void, 0x021DDA50, ClientboundRemoveEntitiesPacket *)(this);
        }

        ClientboundRemoveEntitiesPacket(int entityId)
        {
            MLINK_FUNC(void, 0x021DDAFC, ClientboundRemoveEntitiesPacket *, int)(this, entityId);
        }

        uint32_t field_0x18;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ClientboundRemoveEntitiesPacket, 0x20);
} // namespace mc
