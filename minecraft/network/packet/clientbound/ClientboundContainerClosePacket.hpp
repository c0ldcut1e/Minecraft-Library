#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundContainerClosePacket : public Packet
    {
    public:
        ClientboundContainerClosePacket(int unk1)
        {
            MLINK_FUNC(void, 0x021D449C, ClientboundContainerClosePacket *, int)(this, unk1);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
    };
    MC_CHECK_SIZE(ClientboundContainerClosePacket, 0x28);
} // namespace mc
