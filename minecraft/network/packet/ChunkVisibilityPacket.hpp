#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    class ChunkVisibilityPacket : public Packet, public mboost::enable_shared_from_this<ChunkVisibilityPacket>
    {
    public:
        ChunkVisibilityPacket(int posX, int posZ, bool _visible, bool unk1)
        {
            MLINK_FUNC(void, 0x021D3C1C, ChunkVisibilityPacket *, int, int, bool, bool)(this, posX, posZ, _visible, unk1);
        }

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
