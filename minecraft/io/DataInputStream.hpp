#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "InputStream.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "nbt/CompoundTag.hpp"

namespace mc
{
    class DataInputStream
    {
    public:
        DataInputStream(InputStream *stream)
        {
            MLINK_FUNC(DataInputStream *, 0x0221089C, DataInputStream *, InputStream *)(this, stream);
        }

        ~DataInputStream()
        {
            MLINK_FUNC(void, 0x0220B778, DataInputStream *)(this);
        }

        uint32_t readChar()
        {
            return MLINK_FUNC(uint32_t, 0x0220BEBC, DataInputStream *)(this);
        }

        bool readBoolean()
        {
            return MLINK_FUNC(bool, 0x0220B874, DataInputStream *)(this);
        }

        int readByte()
        {
            return MLINK_FUNC(int, 0x0220B8C0, DataInputStream *)(this);
        }

        double readDouble()
        {
            return MLINK_FUNC(double, 0x0220BBAC, DataInputStream *)(this);
        }

        float readFloat()
        {
            return MLINK_FUNC(float, 0x0220BBF8, DataInputStream *)(this);
        }

        int readInt()
        {
            return MLINK_FUNC(int, 0x0220BC40, DataInputStream *)(this);
        }

        int64_t readLong()
        {
            return MLINK_FUNC(int64_t, 0x0220BD04, DataInputStream *)(this);
        }

        void readItem(mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0221126C, DataInputStream *, mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        CompoundTag *readNbt()
        {
            return MLINK_FUNC(CompoundTag *, 0x02210EC4, DataInputStream *)(this);
        }

        void readBlockPos(BlockPos &position)
        {
            MLINK_FUNC(void, 0x02210CC8, DataInputStream *, BlockPos *)(this, &position);
        }

        int readVarInt()
        {
            return MLINK_FUNC(int, 0x02210D5C, DataInputStream *)(this);
        }

        int64_t readVarLong()
        {
            return MLINK_FUNC(int64_t, 0x02210E0C, DataInputStream *)(this);
        }

        void readPlayerUID(PlayerUID &uid)
        {
            MLINK_FUNC(void, 0x0220C518, DataInputStream *, PlayerUID *)(this, &uid);
        }

        int readShort()
        {
            return MLINK_FUNC(int, 0x0220BE44, DataInputStream *)(this);
        }

        uint32_t readUnsignedByte()
        {
            return MLINK_FUNC(uint32_t, 0x0220B908, DataInputStream *)(this);
        }

        uint32_t readUnsignedShort()
        {
            return MLINK_FUNC(uint32_t, 0x02210918, DataInputStream *)(this);
        }

        void readUTF(mstd::basic_string<wchar_t> &text)
        {
            MLINK_FUNC(void, 0x0220C1FC, DataInputStream *, mstd::basic_string<wchar_t> &)(this, text);
        }

        void skipBytes(int64_t byteCount)
        {
            MLINK_FUNC(void, 0x0220C6B0, DataInputStream *, int64_t)(this, byteCount);
        }

        uint8_t storage[0x20];
    };
    MC_CHECK_SIZE(DataInputStream, 0x20);
} // namespace mc
