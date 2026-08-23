#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "PRUDPStream.hpp"

namespace nn::nex
{
    class StreamManager
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        PRUDPStream *udpStream;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(StreamManager, 0x30);
} // namespace nn::nex
