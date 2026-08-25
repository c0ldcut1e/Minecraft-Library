#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    struct BlockRegionUpdateChange
    {
        uint16_t packedPosition;
        uint16_t field_0x2;
        uint32_t blockAndData;
    };
    MC_CHECK_SIZE(BlockRegionUpdateChange, 0x8);

    struct BlockRegionUpdateChangeList
    {
        uint32_t field_0x0;
        BlockRegionUpdateChange *start;
        BlockRegionUpdateChange *finish;
        BlockRegionUpdateChange *endOfStorage;
    };
    MC_CHECK_SIZE(BlockRegionUpdateChangeList, 0x10);

    class BlockRegionUpdatePacket : public Packet, public mboost::enable_shared_from_this<BlockRegionUpdatePacket>
    {
    public:
        int x;
        int y;
        int z;
        int xSize;
        int ySize;
        int zSize;
        uint8_t *data;
        uint32_t dataSize;
        uint32_t levelIndex;
        bool fullChunk;
        bool reloadChunk;
        uint8_t field_0x3E;
        uint8_t field_0x3F;
        BlockRegionUpdateChangeList *changes;
        uint32_t compressedDataSize;
    };
    MC_CHECK_SIZE(BlockRegionUpdatePacket, 0x48);
} // namespace mc
