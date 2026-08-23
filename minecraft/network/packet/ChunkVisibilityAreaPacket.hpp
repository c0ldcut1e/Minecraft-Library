#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"

namespace mc
{
    class ChunkVisibilityAreaPacket : public Packet
    {
    public:
        ChunkVisibilityAreaPacket(int xMin, int xMax, int yMin, int yMax, bool _visible, bool unk2, bool _useRadius)
        {
            MLINK_FUNC(void, 0x021EA67C, ChunkVisibilityAreaPacket *, int, int, int, int, bool, bool, bool)(this, xMin, xMax, yMin, yMax, _visible,
                                                                                                            unk2, _useRadius);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        int minX;
        int maxX;
        int minZ;
        int maxZ;
        bool visible;
        bool field_0x29;
        bool inverted;
        uint8_t field_0x2B;
    };
    MC_CHECK_SIZE(ChunkVisibilityAreaPacket, 0x30);
} // namespace mc
