#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class ByteTag : public Tag
    {
    public:
        ByteTag()
        {
            MLINK_FUNC(void, 0x02191C50, ByteTag *)(this);
        }

        ByteTag(uint8_t data)
        {
            MLINK_FUNC(void, 0x02191CBC, ByteTag *, uint8_t)(this, data);
        }

        ~ByteTag()
        {
            MLINK_FUNC(void, 0x021A8950, ByteTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x02191D94)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x02191D38, ByteTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x02191D54, ByteTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02191D9C, ByteTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x02191E60, ByteTag *, Tag *)(this, other);
        }

        ByteTag *copy()
        {
            return MLINK_FUNC(ByteTag *, 0x02191EDC, ByteTag *)(this);
        }

        int64_t getAsLong()
        {
            return MLINK_FUNC(int64_t, 0x02191EF4, ByteTag *)(this);
        }

        int getAsInt()
        {
            return MLINK_FUNC(int, 0x02191F00, ByteTag *)(this);
        }

        int16_t getAsShort()
        {
            return MLINK_FUNC(int16_t, 0x02191F08, ByteTag *)(this);
        }

        int8_t getAsByte()
        {
            return MLINK_FUNC(int8_t, 0x02191F10, ByteTag *)(this);
        }

        double getAsDouble()
        {
            return MLINK_FUNC(double, 0x02191F18, ByteTag *)(this);
        }

        float getAsFloat()
        {
            return MLINK_FUNC(float, 0x02191F44, ByteTag *)(this);
        }

        uint8_t data;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t field_0x7;
    };
    MC_CHECK_SIZE(ByteTag, 0x8);
} // namespace mc
