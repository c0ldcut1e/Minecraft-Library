#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "network/packet/Packet.hpp"
#include "world/Level.hpp"

namespace mc
{
    class ClientboundBlockUpdatePacket : public Packet
    {
    public:
        ClientboundBlockUpdatePacket(Level *level, const BlockPos &_pos)
        {
            MLINK_FUNC(void, 0x021DF3C8, ClientboundBlockUpdatePacket *, Level *, const BlockPos &)(this, level, _pos);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        BlockPos pos;
        Block *block;
        int blockData;
        uint32_t levelIndex;
    };
    MC_CHECK_SIZE(ClientboundBlockUpdatePacket, 0x30);
} // namespace mc
