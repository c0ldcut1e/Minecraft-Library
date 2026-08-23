#pragma once

#include <cstdint>

#include "ConnectionOrientedStream.hpp"
#include "MinecraftLib.hpp"

namespace nn::nex
{
    class EndPoint
    {
    public:
        uint32_t field_0x0;
        ConnectionOrientedStream *stream;
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
        uint32_t connectionId;
        uint32_t principalId;
        uint32_t openCount;
        uint32_t broadcastState;
        uint32_t field_0x58;
        uint32_t field_0x5C;
    };
    MC_CHECK_SIZE(EndPoint, 0x60);
} // namespace nn::nex
