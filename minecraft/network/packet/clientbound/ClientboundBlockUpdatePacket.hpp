#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ClientboundBlockUpdatePacket : public Packet, public mboost::enable_shared_from_this<ClientboundBlockUpdatePacket>
    {
    public:
        ClientboundBlockUpdatePacket(Level *level, const BlockPos &_pos)
        {
            MLINK_FUNC(void, 0x021DF3C8, ClientboundBlockUpdatePacket *, Level *, const BlockPos &)(this, level, _pos);
        }

        BlockPos pos;
        Block *block;
        int blockData;
        uint32_t levelIndex;
    };
    MC_CHECK_SIZE(ClientboundBlockUpdatePacket, 0x30);
} // namespace mc
