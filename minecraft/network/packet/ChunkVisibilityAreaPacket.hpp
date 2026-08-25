#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    class ChunkVisibilityAreaPacket : public Packet, public mboost::enable_shared_from_this<ChunkVisibilityAreaPacket>
    {
    public:
        ChunkVisibilityAreaPacket(int xMin, int xMax, int yMin, int yMax, bool _visible, bool unk2, bool _useRadius)
        {
            MLINK_FUNC(void, 0x021EA67C, ChunkVisibilityAreaPacket *, int, int, int, int, bool, bool, bool)(this, xMin, xMax, yMin, yMax, _visible,
                                                                                                            unk2, _useRadius);
        }

        int minX;
        int maxX;
        int minZ;
        int maxZ;
        bool visible;
        bool field_0x29;
        bool inverted;
        uint8_t field_0x2B;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ChunkVisibilityAreaPacket, 0x30);
} // namespace mc
