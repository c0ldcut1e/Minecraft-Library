#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"
#include "utils/Direction.hpp"

namespace mc
{
    class ServerboundPlayerActionPacket : public Packet, public mboost::enable_shared_from_this<ServerboundPlayerActionPacket>
    {
    public:
        enum Action : int
        {
            START_BREAKING,
            STOP_BREAKING,
            FINISH_BREAKING,
            DROP_ALL,
            DROP_SINGLE,
            RELEASE,
            SWAP_HANDS
        };

        ServerboundPlayerActionPacket(Action action, const BlockPos &pos, const Direction *dir, int arg5)
        {
            MLINK_FUNC(void, 0x028AEC5C, ServerboundPlayerActionPacket *, Action, const BlockPos &, const Direction *, int)(this, action, pos, dir,
                                                                                                                            arg5);
        }
        ~ServerboundPlayerActionPacket()
        {
            MLINK_FUNC(void, 0x028D0530, ServerboundPlayerActionPacket *)(this);
        }

        BlockPos position;
        Direction *direction;
        Action action;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ServerboundPlayerActionPacket, 0x30);
} // namespace mc
