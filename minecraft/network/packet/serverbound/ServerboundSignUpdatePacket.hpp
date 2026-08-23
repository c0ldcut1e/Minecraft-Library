#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/basic_string.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundSignUpdatePacket : public Packet
    {
    public:
        uint32_t field_0x10;
        uint32_t field_0x14;
        BlockPos pos;
        mstd::basic_string<wchar_t> *lines;
        uint32_t field_0x28;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ServerboundSignUpdatePacket, 0x30);
} // namespace mc
