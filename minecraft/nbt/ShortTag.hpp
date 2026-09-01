#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class ShortTag : public Tag
    {
    public:
        ShortTag()
        {
            MLINK_FUNC(void, 0x028BBC98, ShortTag *)(this);
        }

        ShortTag(int data)
        {
            MLINK_FUNC(void, 0x028BBD04, ShortTag *, int)(this, data);
        }

        ~ShortTag()
        {
            MLINK_FUNC(void, 0x028D1008, ShortTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x028BBDDC)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x028BBD80, ShortTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x028BBD9C, ShortTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x028BBDE4, ShortTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x028BBEC0, ShortTag *, Tag *)(this, other);
        }

        ShortTag *copy()
        {
            return MLINK_FUNC(ShortTag *, 0x028BBEA8, ShortTag *)(this);
        }

        int64_t getAsLong()
        {
            return MLINK_FUNC(int64_t, 0x028BBF3C, ShortTag *)(this);
        }

        int getAsInt()
        {
            return MLINK_FUNC(int, 0x028BBF48, ShortTag *)(this);
        }

        int16_t getAsShort()
        {
            return MLINK_FUNC(int16_t, 0x028BBF50, ShortTag *)(this);
        }

        int8_t getAsByte()
        {
            return MLINK_FUNC(int8_t, 0x028BBF58, ShortTag *)(this);
        }

        double getAsDouble()
        {
            return MLINK_FUNC(double, 0x028BBF64, ShortTag *)(this);
        }

        float getAsFloat()
        {
            return MLINK_FUNC(float, 0x028BBF94, ShortTag *)(this);
        }

        int16_t data;
        uint8_t field_0x6;
        uint8_t field_0x7;
    };
    MC_CHECK_SIZE(ShortTag, 0x8);
} // namespace mc
