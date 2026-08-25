#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::pia::common
{
    class SockAddrIn
    {
    public:
        uint16_t family;
        uint16_t portNetworkOrder;
        uint32_t addressNetworkOrder;
        uint32_t zero0;
        uint32_t zero1;
    };
    MC_CHECK_SIZE(SockAddrIn, 0x10);
} // namespace nn::pia::common
