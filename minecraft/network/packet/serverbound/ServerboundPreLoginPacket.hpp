#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundPreLoginPacket : public Packet
    {
    public:
        ServerboundPreLoginPacket(const mstd::basic_string<wchar_t> &wstr)
        {
            MLINK_FUNC(void, 0x028AFC9C, ServerboundPreLoginPacket *, const mstd::basic_string<wchar_t> &)(this, wstr);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t gameVersion;
        mstd::basic_string<wchar_t> nnid;
    };
    MC_CHECK_SIZE(ServerboundPreLoginPacket, 0x40);
} // namespace mc
