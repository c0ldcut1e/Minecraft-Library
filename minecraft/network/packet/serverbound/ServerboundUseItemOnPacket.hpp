#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"
#include "utils/Direction.hpp"
#include "utils/InteractionHand.hpp"

namespace mc
{
    class ServerboundUseItemOnPacket : public Packet, public mboost::enable_shared_from_this<ServerboundUseItemOnPacket>
    {
    public:
        ServerboundUseItemOnPacket(const BlockPos &pos, const Direction *dir, InteractionHand::EInteractionHand hand, float unk1, float unk2,
                                   float unk3)
        {
            MLINK_FUNC(void, 0x28B25B8, ServerboundUseItemOnPacket *, const BlockPos &, const Direction *, InteractionHand::EInteractionHand, float,
                       float, float)(this, pos, dir, hand, unk1, unk2, unk3);
        }
        ~ServerboundUseItemOnPacket()
        {
            MLINK_FUNC(void, 0x028D0B18, ServerboundUseItemOnPacket *)(this);
        }

        BlockPos position;
        Direction *direction;
        InteractionHand::EInteractionHand e_hand;
        float clickX;
        float clickY;
        float clickZ;
    };
    MC_CHECK_SIZE(ServerboundUseItemOnPacket, 0x38);
} // namespace mc
