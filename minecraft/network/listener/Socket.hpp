#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "network/player/INetworkPlayer.hpp"

namespace mc
{
    class ServerConnection;

    class Socket
    {
    public:
        class SocketInputStreamLocal
        {
        public:
            SocketInputStreamLocal(int queueIndex)
            {
                MLINK_FUNC(void, 0x029184F8, SocketInputStreamLocal *, int)(this, queueIndex);
            }

            uint32_t read()
            {
                return MLINK_FUNC(uint32_t, 0x02918F1C, SocketInputStreamLocal *)(this);
            }

            void close()
            {
                MLINK_FUNC(void, 0x029193A8, SocketInputStreamLocal *)(this);
            }

            void flush()
            {
                MLINK_FUNC(void, 0x0297C070, SocketInputStreamLocal *)(this);
            }

            VTable *vtable;
            bool open;
            uint8_t field_0x5;
            uint8_t field_0x6;
            uint8_t field_0x7;
            int queueIndex;
        };

        class SocketOutputStreamLocal
        {
        public:
            SocketOutputStreamLocal(int queueIndex)
            {
                MLINK_FUNC(void, 0x02918494, SocketOutputStreamLocal *, int)(this, queueIndex);
            }

            void write(uint8_t value)
            {
                MLINK_FUNC(void, 0x02919420, SocketOutputStreamLocal *, uint8_t)(this, value);
            }

            void close()
            {
                MLINK_FUNC(void, 0x0291975C, SocketOutputStreamLocal *)(this);
            }

            void flush()
            {
                MLINK_FUNC(void, 0x0297C094, SocketOutputStreamLocal *)(this);
            }

            VTable *vtable;
            bool open;
            uint8_t field_0x5;
            uint8_t field_0x6;
            uint8_t field_0x7;
            int queueIndex;
        };

        class SocketInputStreamNetwork
        {
        public:
            SocketInputStreamNetwork(Socket *socket, int queueIndex)
            {
                MLINK_FUNC(void, 0x02918930, SocketInputStreamNetwork *, Socket *, int)(this, socket, queueIndex);
            }

            uint32_t read()
            {
                return MLINK_FUNC(uint32_t, 0x029197D4, SocketInputStreamNetwork *)(this);
            }

            void close()
            {
                MLINK_FUNC(void, 0x02919CB8, SocketInputStreamNetwork *)(this);
            }

            void flush()
            {
                MLINK_FUNC(void, 0x0297C0C4, SocketInputStreamNetwork *)(this);
            }

            VTable *vtable;
            bool open;
            uint8_t field_0x5;
            uint8_t field_0x6;
            uint8_t field_0x7;
            int queueIndex;
            Socket *socket;
        };

        class SocketOutputStreamNetwork
        {
        public:
            SocketOutputStreamNetwork(Socket *socket, int queueIndex)
            {
                MLINK_FUNC(void, 0x029189A4, SocketOutputStreamNetwork *, Socket *, int)(this, socket, queueIndex);
            }

            void write(uint8_t value)
            {
                MLINK_FUNC(void, 0x02919CC4, SocketOutputStreamNetwork *, uint8_t)(this, value);
            }

            void close()
            {
                MLINK_FUNC(void, 0x0291A0A4, SocketOutputStreamNetwork *)(this);
            }

            void flush()
            {
                MLINK_FUNC(void, 0x0297C0E8, SocketOutputStreamNetwork *)(this);
            }

            VTable *vtable;
            bool open;
            uint8_t field_0x5;
            uint8_t field_0x6;
            uint8_t field_0x7;
            int queueIndex;
            Socket *socket;
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

        static void Initialise(ServerConnection *serverConnection)
        {
            MLINK_FUNC(void, 0x0291855C, ServerConnection *)(serverConnection);
        }

        INetworkPlayer *getPlayer()
        {
            return MLINK_FUNC(INetworkPlayer *, 0x02916D1C, Socket *)(this);
        }

        void *getRemoteSocketAddress()
        {
            return MLINK_FUNC(void *, 0x02918BC0, Socket *)(this);
        }

        void pushDataToQueue(const uint8_t *data, uint32_t size, bool reliable)
        {
            MLINK_FUNC(void, 0x02918BC8, Socket *, const uint8_t *, uint32_t, bool)(this, data, size, reliable);
        }

        void setPlayer(INetworkPlayer *networkPlayer)
        {
            MLINK_FUNC(void, 0x02916D38, Socket *, INetworkPlayer *)(this, networkPlayer);
        }

        void setSoTimeout(int timeout)
        {
            MLINK_FUNC(void, 0x02918DF4, Socket *, int)(this, timeout);
        }

        void setTrafficClass(int trafficClass)
        {
            MLINK_FUNC(void, 0x02918DF8, Socket *, int)(this, trafficClass);
        }

        void close(bool flush)
        {
            MLINK_FUNC(void, 0x02918E5C, Socket *, bool)(this, flush);
        }

        MC_CHECK_SIZE(SocketInputStreamLocal, 0xC);
        MC_CHECK_SIZE(SocketOutputStreamLocal, 0xC);
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
