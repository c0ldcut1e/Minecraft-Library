#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"

namespace mc
{
    class ChunkVisibilityPacket : public Packet
    {
    public:
        ChunkVisibilityPacket(int posX, int posZ, bool _visible, bool unk1)
        {
            MLINK_FUNC(void, 0x021D3C1C, ChunkVisibilityPacket *, int, int, bool, bool)(this, posX, posZ, _visible, unk1);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        int x;
        int z;
        bool visible;
        bool field_0x21;
        uint8_t field_0x22;
        uint8_t field_0x23;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(ChunkVisibilityPacket, 0x28);
} // namespace mc
