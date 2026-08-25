#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundContainerClosePacket : public Packet, public mboost::enable_shared_from_this<ServerboundContainerClosePacket>
    {
    public:
        ServerboundContainerClosePacket(int containerId)
        {
            MLINK_FUNC(void, 0x028AB718, ServerboundContainerClosePacket *, int)(this, containerId);
        }

        int containerId;
    };
    MC_CHECK_SIZE(ServerboundContainerClosePacket, 0x1C);
} // namespace mc
