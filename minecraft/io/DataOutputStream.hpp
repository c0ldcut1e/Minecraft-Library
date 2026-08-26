#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "OutputStream.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/not_null_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "nbt/CompoundTag.hpp"

namespace mc
{
    class DataOutputStream
    {
    public:
        DataOutputStream(OutputStream *stream)
        {
            MLINK_FUNC(DataOutputStream *, 0x02293E44, DataOutputStream *, OutputStream *)(this, stream);
        }

        ~DataOutputStream()
        {
            MLINK_FUNC(void, 0x0228A6AC, DataOutputStream *)(this);
        }

        void close()
        {
            MLINK_FUNC(void, 0x02296A18, DataOutputStream *)(this);
        }

        void flush()
        {
            MLINK_FUNC(void, 0x02297290, DataOutputStream *)(this);
        }

        void writeItem(const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x02296F04, DataOutputStream *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        void writeNbt(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x02296C44, DataOutputStream *, CompoundTag *)(this, tag);
        }

        void writeBoolean(bool value)
        {
            MLINK_FUNC(void, 0x0228ABCC, DataOutputStream *, bool)(this, value);
        }

        void writeByte(uint8_t value)
        {
            MLINK_FUNC(void, 0x0228A85C, DataOutputStream *, uint8_t)(this, value);
        }

        void writeDouble(double value)
        {
            MLINK_FUNC(void, 0x0228A884, DataOutputStream *, double)(this, value);
        }

        void writeFloat(float value)
        {
            MLINK_FUNC(void, 0x0228A8F8, DataOutputStream *, float)(this, value);
        }

        void writeInt(int value)
        {
            MLINK_FUNC(void, 0x0228A958, DataOutputStream *, int)(this, value);
        }

        void writeLong(int64_t value)
        {
            MLINK_FUNC(void, 0x0228AA0C, DataOutputStream *, int64_t)(this, value);
        }

        void writeShort(int16_t value)
        {
            MLINK_FUNC(void, 0x0228AB48, DataOutputStream *, int16_t)(this, value);
        }

        void writeUnsignedShort(uint16_t value)
        {
            MLINK_FUNC(void, 0x02296A2C, DataOutputStream *, uint16_t)(this, value);
        }

        void writeChar(wchar_t value)
        {
            MLINK_FUNC(void, 0x0228AC28, DataOutputStream *, wchar_t)(this, value);
        }

        void writePlayerUID(PlayerUID uid)
        {
            MLINK_FUNC(void, 0x0228B744, DataOutputStream *, PlayerUID)(this, uid);
        }

        void writeBlockPos(const BlockPos &position)
        {
            MLINK_FUNC(void, 0x02296A9C, DataOutputStream *, const BlockPos *)(this, &position);
        }

        void writeVarInt(int value)
        {
            MLINK_FUNC(void, 0x02296AFC, DataOutputStream *, int)(this, value);
        }

        void writeVarLong(int64_t value)
        {
            MLINK_FUNC(void, 0x02296B88, DataOutputStream *, int64_t)(this, value);
        }

        void writeVarIntArray(ArrayWithLength<int> values)
        {
            MLINK_FUNC(void, 0x02297128, DataOutputStream *, ArrayWithLength<int>)(this, values);
        }

        uint8_t storage[0x20];
    };
    MC_CHECK_SIZE(DataOutputStream, 0x20);
} // namespace mc
