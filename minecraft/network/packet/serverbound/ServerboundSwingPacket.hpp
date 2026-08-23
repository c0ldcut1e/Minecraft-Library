#pragma once

#include "mlink/MLink.hpp"

#include "network/packet/Packet.hpp"
#include "utils/InteractionHand.hpp"

namespace mc
{
    class ServerboundSwingPacket : public Packet
    {
    public:
        ServerboundSwingPacket(InteractionHand::EInteractionHand hand)
        {
            MLINK_FUNC(void, 0x028B1C80, ServerboundSwingPacket *, InteractionHand::EInteractionHand)(this, hand);
        }
    };
} // namespace mc
