#pragma once

#include "mlink/MLink.hpp"

#include "entity/player/PlayerUID.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class TeleportCommand
    {
    public:
        static mboost::shared_ptr<Packet> preparePacket(const mc::PlayerUID &uid1, const mc::PlayerUID &uid2)
        {
            mboost::shared_ptr<Packet> packet;
            MLINK_FUNC(void, 0x03364494, mboost::shared_ptr<Packet> *, const mc::PlayerUID &, const mc::PlayerUID &)(&packet, uid1, uid2);
            return packet;
        }
    };
} // namespace mc
