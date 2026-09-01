#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class LongTag : public Tag
    {
    public:
        LongTag()
        {
            MLINK_FUNC(void, 0x025ED2F0, LongTag *)(this);
        }

        LongTag(int64_t data)
        {
            MLINK_FUNC(void, 0x025ED368, LongTag *, int64_t)(this, data);
        }

        ~LongTag()
        {
            MLINK_FUNC(void, 0x0260550C, LongTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x025ED460)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x025ED3FC, LongTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x025ED41C, LongTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x025ED468, LongTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x025ED54C, LongTag *, Tag *)(this, other);
        }

        LongTag *copy()
        {
            return MLINK_FUNC(LongTag *, 0x025ED530, LongTag *)(this);
        }

        int64_t getAsLong()
        {
            return MLINK_FUNC(int64_t, 0x025ED5E4, LongTag *)(this);
        }

        int getAsInt()
        {
            return MLINK_FUNC(int, 0x025ED5F0, LongTag *)(this);
        }

        int16_t getAsShort()
        {
            return MLINK_FUNC(int16_t, 0x025ED5FC, LongTag *)(this);
        }

        int8_t getAsByte()
        {
            return MLINK_FUNC(int8_t, 0x025ED608, LongTag *)(this);
        }

        double getAsDouble()
        {
            return MLINK_FUNC(double, 0x025ED614, LongTag *)(this);
        }

        float getAsFloat()
        {
            return MLINK_FUNC(float, 0x025ED62C, LongTag *)(this);
        }

        uint32_t field_0x4;
        int64_t data;
    };
    MC_CHECK_SIZE(LongTag, 0x10);
} // namespace mc
