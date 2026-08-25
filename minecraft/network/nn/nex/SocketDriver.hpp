#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace nn::nex
{
    class SocketDriver
    {
    public:
        enum _Result : uint32_t
        {
            Result_Success    = 0,
            Result_Failed     = 1,
            Result_WouldBlock = 2,
            Result_Connecting = 3,
            Result_Closed     = 4,
        };

        enum _SocketFlag : uint32_t
        {
            SocketFlag_None        = 0,
            SocketFlag_NonBlocking = 1,
        };

        enum _TrafficType : uint32_t
        {
            TrafficType_Datagram = 0,
            TrafficType_Stream   = 1,
        };

        class InetAddress
        {
        public:
            uint32_t addressNetworkOrder;
            uint16_t portNetworkOrder;
            uint16_t field_0x6;
        };
        MC_CHECK_SIZE(InetAddress, 0x8);

        class Socket
        {
        public:
            ~Socket()
            {
                MLINK_FUNC(void, 0x0378ECE8, Socket *)(this);
            }

            _Result SetMulticastAddress(uint32_t address)
            {
                return MLINK_FUNC(_Result, 0x0378ECD8, Socket *, uint32_t)(this, address);
            }

            _Result SetTTL(uint8_t ttl)
            {
                return MLINK_FUNC(_Result, 0x0378ECE0, Socket *, uint8_t)(this, ttl);
            }

            mc::VTable *vtable;
        };
        MC_CHECK_SIZE(Socket, 0x4);

        class PollInfo
        {
        public:
            PollInfo()
            {
                MLINK_FUNC(void, 0x0378ECFC, PollInfo *)(this);
            }

            Socket *socket;
            uint32_t events;
            uint32_t returnedEvents;
        };
        MC_CHECK_SIZE(PollInfo, 0xC);
    };
} // namespace nn::nex
