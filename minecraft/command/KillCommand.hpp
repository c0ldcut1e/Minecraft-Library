#pragma once

#include "mlink/MLink.hpp"

#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class KillCommand
    {
    public:
        static mboost::shared_ptr<Packet> preparePacket()
        {
            const mboost::shared_ptr<Packet> packet;
            MLINK_FUNC(void, 0x02520B58, mboost::shared_ptr<Packet>)(packet);
            return packet;
        }
    };
} // namespace mc
