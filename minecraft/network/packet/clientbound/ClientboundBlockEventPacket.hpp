#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundBlockEventPacket : public Packet
    {
    public:
        ClientboundBlockEventPacket(const BlockPos &_pos, Block *block, int unk1, int unk2)
        {
            MLINK_FUNC(void, 0x021DEEAC, ClientboundBlockEventPacket *, const BlockPos &, Block *, int, int)(this, _pos, block, unk1, unk2);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        BlockPos pos;
        uint32_t B0;
        uint32_t B1;
        Block *block;
    };
    MC_CHECK_SIZE(ClientboundBlockEventPacket, 0x30);
} // namespace mc
