#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ByteArrayTag.hpp"
#include "ListTag.hpp"
#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class CompoundTag : public Tag
    {
    public:
        CompoundTag()
        {
            MLINK_FUNC(void, 0x022182C0, CompoundTag *)(this);
        }

        bool contains(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(bool, 0x02218400, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        CompoundTag *copy()
        {
            return MLINK_FUNC(CompoundTag *, 0x0221C05C, CompoundTag *)(this);
        }

        bool equals(Tag *tag)
        {
            return MLINK_FUNC(bool, 0x0221C284, CompoundTag *, Tag *)(this, tag);
        }

        Tag *get(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(Tag *, 0x0221898C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        mstd::vector<mstd::basic_string<wchar_t>> *getAllKeys()
        {
            return MLINK_FUNC(mstd::vector<mstd::basic_string<wchar_t>> *, 0x0221AB80, CompoundTag *)(this);
        }

        uint8_t getByte(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(uint8_t, 0x0221B24C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        ByteArrayTag *getByteArray(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(class ByteArrayTag *, 0x0221B5E8, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        CompoundTag *getCompound(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(CompoundTag *, 0x02218350, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        double getDouble(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(double, 0x0221B54C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        float getFloat(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(float, 0x0221B4B0, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        int getInt(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(int, 0x0221B37C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        ListTag *getList(const mstd::basic_string<wchar_t> &str, int param_2)
        {
            return MLINK_FUNC(ListTag *, 0x0221B99C, CompoundTag *, const mstd::basic_string<wchar_t> &, int)(this, str, param_2);
        }

        int64_t getLong(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(int64_t, 0x0221B414, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        int16_t getShort(const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(int16_t, 0x0221B2E4, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        void getString(const mstd::basic_string<wchar_t> &ret, const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x02218874, CompoundTag *, const mstd::basic_string<wchar_t> &, const mstd::basic_string<wchar_t> &)(this, ret, str);
        }

        mstd::basic_string<wchar_t> getString(const mstd::basic_string<wchar_t> &str)
        {
            mstd::basic_string<wchar_t> ret;
            getString(ret, str);
            return ret;
        }

        uint32_t getTagType(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(uint32_t, 0x02217308, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        void merge(mc::CompoundTag *toMerge)
        {
            MLINK_FUNC(void, 0x0221C924, CompoundTag *, CompoundTag *)(this, toMerge);
        }

        void put(const mstd::basic_string<wchar_t> &str, Tag *tag)
        {
            MLINK_FUNC(void, 0x02218A80, CompoundTag *, const mstd::basic_string<wchar_t> &, Tag *)(this, str, tag);
        }

        void putBoolean(const mstd::basic_string<wchar_t> &str, bool value)
        {
            MLINK_FUNC(void, 0x0221B23C, CompoundTag *, const mstd::basic_string<wchar_t> &, bool)(this, str, value);
        }

        void putByte(const mstd::basic_string<wchar_t> &str, uint8_t value)
        {
            MLINK_FUNC(void, 0x0221ACC8, CompoundTag *, const mstd::basic_string<wchar_t> &, uint8_t)(this, str, value);
        }

        void putDouble(const mstd::basic_string<wchar_t> &str, double value)
        {
            MLINK_FUNC(void, 0x0221B01C, CompoundTag *, const mstd::basic_string<wchar_t> &, double)(this, str, value);
        }

        void putFloat(const mstd::basic_string<wchar_t> &str, float value)
        {
            MLINK_FUNC(void, 0x0221AF68, CompoundTag *, const mstd::basic_string<wchar_t> &, float)(this, str, value);
        }

        void putInt(const mstd::basic_string<wchar_t> &str, int value)
        {
            MLINK_FUNC(void, 0x0221AE10, CompoundTag *, const mstd::basic_string<wchar_t> &, int)(this, str, value);
        }

        void putLong(const mstd::basic_string<wchar_t> &str, long long value)
        {
            MLINK_FUNC(void, 0x0221AEB4, CompoundTag *, const mstd::basic_string<wchar_t> &, long long)(this, str, value);
        }

        void putShort(const mstd::basic_string<wchar_t> &str, int16_t value)
        {
            MLINK_FUNC(void, 0x0221AD6C, CompoundTag *, const mstd::basic_string<wchar_t> &, int16_t)(this, str, value);
        }

        void putString(const mstd::basic_string<wchar_t> &str, const mstd::basic_string<wchar_t> &value)
        {
            MLINK_FUNC(void, 0x022189DC, CompoundTag *, const mstd::basic_string<wchar_t> &, const mstd::basic_string<wchar_t> &)(this, str, value);
        }

        void remove(const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x0221BE6C, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        void toString(const mstd::basic_string<wchar_t> &out)
        {
            MLINK_FUNC(void, 0x0221C024, CompoundTag *, const mstd::basic_string<wchar_t> &)(this, out);
        }

        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t entries;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
    };
    MC_CHECK_SIZE(CompoundTag, 0x1C);
} // namespace mc
