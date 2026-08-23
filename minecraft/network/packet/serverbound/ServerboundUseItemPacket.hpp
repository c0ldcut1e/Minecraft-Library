#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"
#include "utils/InteractionHand.hpp"

namespace mc
{
    class ServerboundUseItemPacket : public Packet
    {
    public:
        ServerboundUseItemPacket(InteractionHand::EInteractionHand _hand)
        {
            MLINK_FUNC(void, 0x028B2B8C, ServerboundUseItemPacket *, InteractionHand::EInteractionHand)(this, _hand);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        InteractionHand::EInteractionHand hand;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ServerboundUseItemPacket, 0x20);
} // namespace mc
