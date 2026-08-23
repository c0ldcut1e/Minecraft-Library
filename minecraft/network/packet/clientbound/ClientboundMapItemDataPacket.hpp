#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/vector.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundMapItemDataPacket : public Packet
    {
    public:
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t mapId;
        uint32_t field_0x1C;
        mstd::vector<void *> mapDecorations;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        ArrayWithLength<uint8_t> mapData;
    };
    MC_CHECK_SIZE(ClientboundMapItemDataPacket, 0x48);
} // namespace mc
