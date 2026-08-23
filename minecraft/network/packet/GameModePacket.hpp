#pragma once

#include "mlink/MLink.hpp"

#include "Packet.hpp"

namespace mc
{
    class GameModePacket : public Packet
    {
    public:
        int GetMessage()
        {
            return MLINK_FUNC(int, 0x02422BA0, GameModePacket *)(this);
        }
    };
} // namespace mc
