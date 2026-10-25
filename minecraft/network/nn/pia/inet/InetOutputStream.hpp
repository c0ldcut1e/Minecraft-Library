#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/common/InetAddress.hpp"
#include "network/nn/pia/common/Packet.hpp"
#include "network/nn/pia/common/SockAddrIn.hpp"

namespace nn::pia::inet
{
    class InetOutputStream
    {
    public:
        Result SendTo(const void *data, uint32_t size, const common::InetAddress &address, uint8_t flags)
        {
            Result result;
            MLINK_FUNC(void, 0x0358AEC8, InetOutputStream *, Result *, const void *, uint32_t, const common::InetAddress *,
                       uint8_t)(this, &result, data, size, &address, flags);
            return result;
        }

        Result SendToMulti(const void *data, uint32_t size, const common::SockAddrIn *addresses, int count)
        {
            Result result;
            MLINK_FUNC(void, 0x0358B250, InetOutputStream *, Result *, const void *, uint32_t, const common::SockAddrIn *,
                       int)(this, &result, data, size, addresses, count);
            return result;
        }

        Result Write(const common::Packet &packet)
        {
            Result result;
            MLINK_FUNC(void, 0x0358B3BC, InetOutputStream *, Result *, const common::Packet *)(this, &result, &packet);
            return result;
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        common::SockAddrIn multicastAddresses[32];
    };
} // namespace nn::pia::inet
