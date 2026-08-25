#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundContainerClosePacket : public Packet, public mboost::enable_shared_from_this<ClientboundContainerClosePacket>
    {
    public:
        ClientboundContainerClosePacket(int unk1)
        {
            MLINK_FUNC(void, 0x021D449C, ClientboundContainerClosePacket *, int)(this, unk1);
        }

        uint32_t field_0x18;
    };
    MC_CHECK_SIZE(ClientboundContainerClosePacket, 0x1C);
} // namespace mc
