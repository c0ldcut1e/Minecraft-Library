#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundKeepAlivePacket : public Packet, public mboost::enable_shared_from_this<ServerboundKeepAlivePacket>
    {
    public:
        ServerboundKeepAlivePacket()
        {
            MLINK_FUNC(void, 0x028ACACC, ServerboundKeepAlivePacket *)(this);
        }

        int id;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ServerboundKeepAlivePacket, 0x20);
} // namespace mc
