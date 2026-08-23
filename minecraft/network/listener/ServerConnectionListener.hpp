#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Socket.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/DisconnectPacket.hpp"
#include "network/packet/Packet.hpp"
#include "network/server/MinecraftServer.hpp"
#include "network/server/PlayerList.hpp"

namespace mc
{
    class ServerConnectionListener
    {
    public:
        ServerConnectionListener(MinecraftServer *server, Socket *socket, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x03304FFC, ServerConnectionListener *, MinecraftServer *, Socket *, const mstd::basic_string<wchar_t> &)(this, server,
                                                                                                                                       socket, name);
        }

        void disconnect(DisconnectPacket::eDisconnectReason reason)
        {
            MLINK_FUNC(void, 0x03299AE4, ServerConnectionListener *, DisconnectPacket::eDisconnectReason)(this, reason);
        }

        void send(const mboost::shared_ptr<Packet> &packet)
        {
            MLINK_FUNC(void, 0x03308B3C, ServerConnectionListener *, mboost::shared_ptr<Packet>)(this, packet);
        }

        void sendPreLoginResponse()
        {
            MLINK_FUNC(void, 0x0330727C, ServerConnectionListener *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x03306558, ServerConnectionListener *)(this);
        }

        uint32_t field_0x0;
        Connection *connection;
        bool done;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t field_0xB;
        uint32_t field_0xC;
        uint32_t field_0x10;
        mstd::basic_string<wchar_t> field_0x14;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
    };
    MC_CHECK_SIZE(ServerConnectionListener, 0x5C);
} // namespace mc
