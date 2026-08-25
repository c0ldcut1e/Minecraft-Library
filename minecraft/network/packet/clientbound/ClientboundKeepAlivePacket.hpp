#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundKeepAlivePacket : public Packet, public mboost::enable_shared_from_this<ClientboundKeepAlivePacket>
    {
    public:
        ClientboundKeepAlivePacket()
        {
            MLINK_FUNC(void, 0x021DA4C0, ClientboundKeepAlivePacket *)(this);
        }

        int id;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ClientboundKeepAlivePacket, 0x20);
} // namespace mc
