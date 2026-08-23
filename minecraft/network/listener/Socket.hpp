#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/player/INetworkPlayer.hpp"

namespace mc
{
    class Socket
    {
    public:
        class SocketInputStreamNetwork
        {
        public:
            uint32_t field_0x0;
            uint32_t field_0x4;
            uint32_t field_0x8;
            uint32_t field_0xC;
        };

        class SocketOutputStreamNetwork
        {
        public:
            uint32_t field_0x0;
            uint32_t field_0x4;
            uint32_t field_0x8;
            uint32_t field_0xC;
        };

        Socket(bool response)
        {
            MLINK_FUNC(void, 0x029187FC, Socket *, bool)(this, response);
        }

        Socket(INetworkPlayer *player, bool response, bool hostLocal)
        {
            MLINK_FUNC(void, 0x02918A18, Socket *, INetworkPlayer *, bool, bool)(this, player, response, hostLocal);
        }

        static void addIncomingSocket(Socket *socket)
        {
            MLINK_FUNC(void, 0x02918D70, Socket *)(socket);
        }

        void setPlayer(INetworkPlayer *networkPlayer)
        {
            MLINK_FUNC(void, 0x02916D38, Socket *, INetworkPlayer *)(this, networkPlayer);
        }

        MC_CHECK_SIZE(SocketInputStreamNetwork, 0x10);
        MC_CHECK_SIZE(SocketOutputStreamNetwork, 0x10);
        uint8_t field_0x0;
        bool hostLocal;
        uint8_t field_0x2;
        uint8_t field_0x3;
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
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        SocketInputStreamNetwork *inStreamNetwork;
        uint32_t field_0x8C;
        SocketOutputStreamNetwork *outStreamNetwork;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
    };
    MC_CHECK_SIZE(Socket, 0xA4);
} // namespace mc
