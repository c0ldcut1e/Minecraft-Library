#pragma once

#include "mlink/MLink.hpp"

#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundAcceptTeleportationPacket : public Packet
    {
    public:
        ServerboundAcceptTeleportationPacket(int param_1)
        {
            MLINK_FUNC(void, 0x028A789C, ServerboundAcceptTeleportationPacket *, int)(this, param_1);
        }
    };
} // namespace mc
