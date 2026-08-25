#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundPreLoginPacket : public Packet, public mboost::enable_shared_from_this<ServerboundPreLoginPacket>
    {
    public:
        ServerboundPreLoginPacket(const mstd::basic_string<wchar_t> &wstr)
        {
            MLINK_FUNC(void, 0x028AFC9C, ServerboundPreLoginPacket *, const mstd::basic_string<wchar_t> &)(this, wstr);
        }

        uint16_t gameVersion;
        uint8_t field_0x1A;
        uint8_t field_0x1B;
        mstd::basic_string<wchar_t> nnid;
    };
    MC_CHECK_SIZE(ServerboundPreLoginPacket, 0x3C);
} // namespace mc
