#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    class DisconnectPacket : public Packet, public mboost::enable_shared_from_this<DisconnectPacket>
    {
    public:
        enum eDisconnectReason : int
        {
            CONNECTION_LOST           = 0,
            HOST_LEFT                 = 1,
            KICKED_FOR_FLYING         = 7,
            KICKED_FROM_THE_GAME      = 8,
            SERVER_IS_FULL            = 13,
            OLDER_VERSION             = 14,
            NEWER_VERSION             = 15,
            CONTENT_PRIVILEGE_TOO_LOW = 20,
            TOO_RESTRICTIVE           = 21,
            NOT_FRIENDS_WITH_ANYONE   = 25,
            PREVIOUSLY_KICKED         = 26,
            FRIENDS_OF_FRIENDS        = 27,
            MII_ALREADY_SELECTED      = 30,
            NO_GAME_FOUND             = 32,
        };

        eDisconnectReason reason;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(DisconnectPacket, 0x20);
} // namespace mc
