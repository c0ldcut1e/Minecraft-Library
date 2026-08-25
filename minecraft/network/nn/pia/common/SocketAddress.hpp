#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/common/InetAddress.hpp"
#include "network/nn/pia/common/SockAddrIn.hpp"

namespace nn::pia::common
{
    class SocketAddress
    {
    public:
        void GetInetAddress(InetAddress *address) const
        {
            MLINK_FUNC(void, 0x0383B6B4, const SocketAddress *, InetAddress *)(this, address);
        }

        void GetSockAddrIn(SockAddrIn *socketAddress) const
        {
            MLINK_FUNC(void, 0x0383B700, const SocketAddress *, SockAddrIn *)(this, socketAddress);
        }

        [[nodiscard]] SockAddrIn *GetSockAddrInPointer()
        {
            return MLINK_FUNC(SockAddrIn *, 0x0383B880, SocketAddress *)(this);
        }

        void Init()
        {
            MLINK_FUNC(void, 0x0383B650, SocketAddress *)(this);
        }

        void SetInetAddress(const InetAddress &address)
        {
            MLINK_FUNC(void, 0x0383B698, SocketAddress *, const InetAddress *)(this, &address);
        }

        void SetSockAddrIn(const SockAddrIn &socketAddress)
        {
            MLINK_FUNC(void, 0x0383B6D8, SocketAddress *, const SockAddrIn *)(this, &socketAddress);
        }

        SockAddrIn *address;
        SockAddrIn storage;
    };
    MC_CHECK_SIZE(SocketAddress, 0x14);
} // namespace nn::pia::common
