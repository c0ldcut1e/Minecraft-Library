#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ListTag.hpp"
#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/unordered_map.hpp"
#include "internal/vector.hpp"

namespace mc
{
    using TagMap = mboost::unordered::unordered_map<mstd::basic_string<wchar_t>, Tag *>;

    class CompoundTag : public Tag
    {
    public:
        CompoundTag()
        {
            MLINK_FUNC(void, 0x022182C0, CompoundTag *)(this);
        }

        ~CompoundTag()
        {
            MLINK_FUNC(void, 0x0221A6BC, CompoundTag *, uint32_t)(this, 0);
        }

        static void writeNamedTag(const mstd::basic_string<wchar_t> &name, Tag *tag, MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x0221A748, const mstd::basic_string<wchar_t> &, Tag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(name, tag, output);
        }

        static Tag *readNamedTagData(ETagType type, const mstd::basic_string<wchar_t> &name, MC_UNDEFINED_TYPE(uint32_t *, DataInput) input,
                                     int depth)
        {
            return MLINK_FUNC(Tag *, 0x0221A934, ETagType, const mstd::basic_string<wchar_t> &, MC_UNDEFINED_TYPE(uint32_t *, DataInput),
                              int)(type, name, input, depth);
        }

        static ETagType readNamedTagType(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input)
        {
            return MLINK_FUNC(ETagType, 0x0221AA2C, MC_UNDEFINED_TYPE(uint32_t *, DataInput))(input);
        }

        static void readNamedTagName(mstd::basic_string<wchar_t> &result, MC_UNDEFINED_TYPE(uint32_t *, DataInput) input)
        {
            MLINK_FUNC(void, 0x0221AA3C, mstd::basic_string<wchar_t> *, MC_UNDEFINED_TYPE(uint32_t *, DataInput))(&result, input);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x0221ACB8)();
        }

        int getTagType(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(int, 0x02217308, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        bool contains(const mstd::basic_string<wchar_t> &key, int type)
        {
            return MLINK_FUNC(bool, 0x02217368, CompoundTag *, const mstd::basic_string<wchar_t> &, int)(this, key, type);
        }

        CompoundTag *getCompound(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(CompoundTag *, 0x02218350, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        bool contains(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(bool, 0x02218400, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        void getString(mstd::basic_string<wchar_t> &result, const mstd::basic_string<wchar_t> &key)
        {
            MLINK_FUNC(void, 0x02218874, CompoundTag *, mstd::basic_string<wchar_t> *, const mstd::basic_string<wchar_t> *)(this, &result, &key);
        }

        mstd::basic_string<wchar_t> getString(const mstd::basic_string<wchar_t> &key)
        {
            mstd::basic_string<wchar_t> result;
            getString(result, key);
            return result;
        }

        Tag *get(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(Tag *, 0x0221898C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        void putString(const mstd::basic_string<wchar_t> &key, const mstd::basic_string<wchar_t> &value)
        {
            MLINK_FUNC(void, 0x022189DC, CompoundTag *, const mstd::basic_string<wchar_t> &, const mstd::basic_string<wchar_t> &)(this, key, value);
        }

        void put(const mstd::basic_string<wchar_t> &key, Tag *tag)
        {
            MLINK_FUNC(void, 0x02218A80, CompoundTag *, const mstd::basic_string<wchar_t> &, Tag *)(this, key, tag);
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x0221A808, CompoundTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x0221AA58, CompoundTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        mstd::vector<mstd::basic_string<wchar_t>> *getAllKeys()
        {
            return MLINK_FUNC(mstd::vector<mstd::basic_string<wchar_t>> *, 0x0221AB80, CompoundTag *)(this);
        }

        TagMap *getAllTagsMap()
        {
            return MLINK_FUNC(TagMap *, 0x0221ACB0, CompoundTag *)(this);
        }

        int size()
        {
            return MLINK_FUNC(int, 0x0221ACC0, CompoundTag *)(this);
        }

        void putByte(const mstd::basic_string<wchar_t> &key, uint8_t value)
        {
            MLINK_FUNC(void, 0x0221ACC8, CompoundTag *, const mstd::basic_string<wchar_t> &, uint8_t)(this, key, value);
        }

        void putShort(const mstd::basic_string<wchar_t> &key, int16_t value)
        {
            MLINK_FUNC(void, 0x0221AD6C, CompoundTag *, const mstd::basic_string<wchar_t> &, int16_t)(this, key, value);
        }

        void putInt(const mstd::basic_string<wchar_t> &key, int value)
        {
            MLINK_FUNC(void, 0x0221AE10, CompoundTag *, const mstd::basic_string<wchar_t> &, int)(this, key, value);
        }

        void putLong(const mstd::basic_string<wchar_t> &key, int64_t value)
        {
            MLINK_FUNC(void, 0x0221AEB4, CompoundTag *, const mstd::basic_string<wchar_t> &, int64_t)(this, key, value);
        }

        void putFloat(const mstd::basic_string<wchar_t> &key, float value)
        {
            MLINK_FUNC(void, 0x0221AF68, CompoundTag *, const mstd::basic_string<wchar_t> &, float)(this, key, value);
        }

        void putDouble(const mstd::basic_string<wchar_t> &key, double value)
        {
            MLINK_FUNC(void, 0x0221B01C, CompoundTag *, const mstd::basic_string<wchar_t> &, double)(this, key, value);
        }

        void putByteArray(const mstd::basic_string<wchar_t> &key, ArrayWithLength<uint8_t> value)
        {
            MLINK_FUNC(void, 0x0221B0D0, CompoundTag *, const mstd::basic_string<wchar_t> &, ArrayWithLength<uint8_t>)(this, key, value);
        }

        void putIntArray(const mstd::basic_string<wchar_t> &key, ArrayWithLength<int> value)
        {
            MLINK_FUNC(void, 0x0221B188, CompoundTag *, const mstd::basic_string<wchar_t> &, ArrayWithLength<int>)(this, key, value);
        }

        void putBoolean(const mstd::basic_string<wchar_t> &key, bool value)
        {
            MLINK_FUNC(void, 0x0221B23C, CompoundTag *, const mstd::basic_string<wchar_t> &, bool)(this, key, value);
        }

        uint8_t getByte(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(uint8_t, 0x0221B24C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        int16_t getShort(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(int16_t, 0x0221B2E4, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        int getInt(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(int, 0x0221B37C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        int64_t getLong(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(int64_t, 0x0221B414, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        float getFloat(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(float, 0x0221B4B0, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        double getDouble(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(double, 0x0221B54C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        ArrayWithLength<uint8_t> getByteArray(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(ArrayWithLength<uint8_t>, 0x0221B5E8, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        ArrayWithLength<int> getIntArray(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(ArrayWithLength<int>, 0x0221B684, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        void fjSafeGetCompoundTag(const mstd::basic_string<wchar_t> &key)
        {
            MLINK_FUNC(void, 0x0221B91C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        ListTag *getList(const mstd::basic_string<wchar_t> &key, int type)
        {
            return MLINK_FUNC(ListTag *, 0x0221B99C, CompoundTag *, const mstd::basic_string<wchar_t> &, int)(this, key, type);
        }

        void fjSafeGetListTag(const mstd::basic_string<wchar_t> &key, int type)
        {
            MLINK_FUNC(void, 0x0221BB04, CompoundTag *, const mstd::basic_string<wchar_t> &, int)(this, key, type);
        }

        bool getBoolean(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(bool, 0x0221BBD8, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        void remove(const mstd::basic_string<wchar_t> &key)
        {
            MLINK_FUNC(void, 0x0221BE6C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        void stripEmptyChildren()
        {
            MLINK_FUNC(void, 0x0221BECC, CompoundTag *)(this);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x0221C024, CompoundTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        void print(const mstd::basic_string<wchar_t> &prefix, char *indent, MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t) output)
        {
            MLINK_FUNC(void, 0x0221C048, CompoundTag *, const mstd::basic_string<wchar_t> &, char *,
                       MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t))(this, prefix, indent, output);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x0221C04C, CompoundTag *)(this);
        }

        CompoundTag *copy()
        {
            return MLINK_FUNC(CompoundTag *, 0x0221C05C, CompoundTag *)(this);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x0221C284, CompoundTag *, Tag *)(this, other);
        }

        bool equalsWithException(Tag *other, mstd::vector<mstd::basic_string<wchar_t>> *exceptions)
        {
            return MLINK_FUNC(bool, 0x0221C428, CompoundTag *, Tag *, mstd::vector<mstd::basic_string<wchar_t>> *)(this, other, exceptions);
        }

        int GetNumValidTagsAfterException(mstd::vector<mstd::basic_string<wchar_t>> *exceptions)
        {
            return MLINK_FUNC(int, 0x0221C718, CompoundTag *, mstd::vector<mstd::basic_string<wchar_t>> *)(this, exceptions);
        }

        void merge(CompoundTag *other)
        {
            MLINK_FUNC(void, 0x0221C924, CompoundTag *, CompoundTag *)(this, other);
        }

        TagMap tags;
    };
    MC_CHECK_SIZE(CompoundTag, 0x1C);
} // namespace mc
