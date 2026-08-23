#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundContainerClosePacket : public Packet
    {
    public:
        ServerboundContainerClosePacket(int containerId)
        {
            MLINK_FUNC(void, 0x028AB718, ServerboundContainerClosePacket *, int)(this, containerId);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        int containerId;
    };
    MC_CHECK_SIZE(ServerboundContainerClosePacket, 0x20);
} // namespace mc
