#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundClientCommandPacket : public Packet, public mboost::enable_shared_from_this<ServerboundClientCommandPacket>
    {
    public:
        enum Action
        {
            PERFORM_RESPAWN = 0
        };

        ServerboundClientCommandPacket(Action _action)
        {
            MLINK_FUNC(void, 0x028A9D64, ServerboundClientCommandPacket *, Action)(this, _action);
        }

        Action action;
    };
    MC_CHECK_SIZE(ServerboundClientCommandPacket, 0x1C);
} // namespace mc
