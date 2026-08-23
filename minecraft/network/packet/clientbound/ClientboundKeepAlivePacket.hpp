#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundKeepAlivePacket : public Packet
    {
    public:
        ClientboundKeepAlivePacket()
        {
            MLINK_FUNC(void, 0x021DA4C0, ClientboundKeepAlivePacket *)(this);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        int id;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ClientboundKeepAlivePacket, 0x20);
} // namespace mc
