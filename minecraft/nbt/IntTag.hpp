#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class IntTag : public Tag
    {
    public:
        IntTag()
        {
            MLINK_FUNC(void, 0x0251775C, IntTag *)(this);
        }

        IntTag(int data)
        {
            MLINK_FUNC(void, 0x02496B5C, IntTag *, int)(this, data);
        }

        ~IntTag()
        {
            MLINK_FUNC(void, 0x0252FF30, IntTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x02517824)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x025177C8, IntTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x025177E4, IntTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x0251782C, IntTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x02517908, IntTag *, Tag *)(this, other);
        }

        IntTag *copy()
        {
            return MLINK_FUNC(IntTag *, 0x025178F0, IntTag *)(this);
        }

        int64_t getAsLong()
        {
            return MLINK_FUNC(int64_t, 0x02517984, IntTag *)(this);
        }

        int getAsInt()
        {
            return MLINK_FUNC(int, 0x02517990, IntTag *)(this);
        }

        int16_t getAsShort()
        {
            return MLINK_FUNC(int16_t, 0x02517998, IntTag *)(this);
        }

        int8_t getAsByte()
        {
            return MLINK_FUNC(int8_t, 0x025179A4, IntTag *)(this);
        }

        double getAsDouble()
        {
            return MLINK_FUNC(double, 0x025179B0, IntTag *)(this);
        }

        float getAsFloat()
        {
            return MLINK_FUNC(float, 0x025179E0, IntTag *)(this);
        }

        int data;
    };
    MC_CHECK_SIZE(IntTag, 0x8);
} // namespace mc
