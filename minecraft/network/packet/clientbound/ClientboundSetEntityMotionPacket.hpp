#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundSetEntityMotionPacket : public Packet
    {
    public:
        ClientboundSetEntityMotionPacket(int entityId, double xMotion, double yMotion, double zMotion)
        {
            MLINK_FUNC(void, 0x0221E214, ClientboundSetEntityMotionPacket *, int, double, double, double)(this, entityId, xMotion, yMotion, zMotion);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ClientboundSetEntityMotionPacket, 0x30);
} // namespace mc
