#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/common/InetAddress.hpp"
#include "network/nn/pia/common/SockAddrIn.hpp"

namespace nn::pia::common
{
    class Socket
    {
    public:
        Socket()
        {
            MLINK_FUNC(void, 0x03839B68, Socket *)(this);
        }

        ~Socket()
        {
            MLINK_FUNC(void, 0x03839BC8, Socket *)(this);
        }

        Result Bind(const InetAddress &address, bool reuseAddress)
        {
            Result result;
            MLINK_FUNC(void, 0x0383A1C4, Socket *, Result *, const InetAddress *, bool)(this, &result, &address, reuseAddress);
            return result;
        }

        Result Bind(uint16_t portNetworkOrder, bool reuseAddress)
        {
            Result result;
            MLINK_FUNC(void, 0x0383A39C, Socket *, Result *, uint16_t, bool)(this, &result, portNetworkOrder, reuseAddress);
            return result;
        }

        Result Close()
        {
            Result result;
            MLINK_FUNC(void, 0x03839F78, Socket *, Result *)(this, &result);
            return result;
        }

        static Result InetAtoH(const char *addressString, InetAddress *address)
        {
            Result result;
            MLINK_FUNC(void, 0x0383B1B0, Result *, const char *, InetAddress *)(&result, addressString, address);
            return result;
        }

        Result Open()
        {
            Result result;
            MLINK_FUNC(void, 0x03839F6C, Socket *, Result *)(this, &result);
            return result;
        }

        Result Open(int type, int protocol)
        {
            Result result;
            MLINK_FUNC(void, 0x03839E5C, Socket *, Result *, int, int)(this, &result, type, protocol);
            return result;
        }

        Result RecvFrom(uint8_t *buffer, int size, InetAddress *address, uint8_t *flags, int *receivedSize)
        {
            Result result;
            MLINK_FUNC(void, 0x0383A5CC, Socket *, Result *, uint8_t *, int, InetAddress *, uint8_t *, int *)(this, &result, buffer, size, address,
                                                                                                              flags, receivedSize);
            return result;
        }

        Result SendTo(const void *buffer, int size, const InetAddress &address, int *sentSize)
        {
            Result result;
            MLINK_FUNC(void, 0x0383AA68, Socket *, Result *, const void *, int, const InetAddress *, int *)(this, &result, buffer, size, &address,
                                                                                                            sentSize);
            return result;
        }

        Result SendToMulti(const void *buffer, int size, const SockAddrIn *addresses, int addressCount, int *sentSize)
        {
            Result result;
            MLINK_FUNC(void, 0x0383AD30, Socket *, Result *, const void *, int, const SockAddrIn *, int, int *)(this, &result, buffer, size,
                                                                                                                addresses, addressCount, sentSize);
            return result;
        }

        Result SetReuseAddress(bool enabled)
        {
            Result result;
            MLINK_FUNC(void, 0x0383A0F4, Socket *, Result *, bool)(this, &result, enabled);
            return result;
        }

        Result SetTtl(uint8_t ttl)
        {
            Result result;
            MLINK_FUNC(void, 0x0383B008, Socket *, Result *, uint8_t)(this, &result, ttl);
            return result;
        }

        int descriptor;
        uint32_t openCount;
        InetAddress localAddress;
    };
    MC_CHECK_SIZE(Socket, 0x10);
} // namespace nn::pia::common
