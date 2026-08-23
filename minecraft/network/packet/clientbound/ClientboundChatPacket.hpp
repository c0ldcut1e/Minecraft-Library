#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundChatPacket : public Packet
    {
    public:
        ClientboundChatPacket(const mstd::basic_string<wchar_t> &_str)
        {
            uint32_t temp[20];
            MLINK_FUNC(void, 0x021B7408, ClientboundChatPacket *, const mstd::basic_string<wchar_t> &, uint32_t[], int)(this, _str, temp, 0x46);
        }

        mstd::vector<mstd::basic_string<wchar_t>> str;
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
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
    };
    MC_CHECK_SIZE(ClientboundChatPacket, 0x68);
} // namespace mc
