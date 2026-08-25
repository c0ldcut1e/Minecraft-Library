#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Socket.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class PlayerList;

    class MinecraftServer;

    class ServerConnectionListener;
    class ServerGamePacketListenerImpl;

    class ServerConnection
    {
    public:
        ServerConnection(MinecraftServer *server)
        {
            MLINK_FUNC(void, 0x03304A38, ServerConnection *, MinecraftServer *)(this, server);
        }

        void addServerGamePacketListenerImpl(const mboost::shared_ptr<ServerGamePacketListenerImpl> &listener)
        {
            MLINK_FUNC(void, 0x03294AD0, ServerConnection *, mboost::shared_ptr<ServerGamePacketListenerImpl>)(this, listener);
        }

        mstd::vector<mboost::shared_ptr<mc::ServerGamePacketListenerImpl>> *getPlayers()
        {
            return MLINK_FUNC(mstd::vector<mboost::shared_ptr<mc::ServerGamePacketListenerImpl>> *, 0x033070F0, ServerConnection *)(this);
        }

        void handleConnection(const mboost::shared_ptr<ServerConnectionListener> &listener)
        {
            MLINK_FUNC(void, 0x03305D7C, ServerConnection *, mboost::shared_ptr<ServerConnectionListener>)(this, listener);
        }

        void NewIncomingSocket(Socket *socket)
        {
            MLINK_FUNC(void, 0x03305DF0, ServerConnection *, Socket *)(this, socket);
        }

        void stop()
        {
            MLINK_FUNC(void, 0x0330610C, ServerConnection *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x033067D0, ServerConnection *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
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
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
    };
    MC_CHECK_SIZE(ServerConnection, 0x68);
} // namespace mc
