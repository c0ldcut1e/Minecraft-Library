#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class ConnectionOrientedStream
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
    };
    MC_CHECK_SIZE(ConnectionOrientedStream, 0x14);
} // namespace nn::nex
