#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class DoubleTag : public Tag
    {
    public:
        DoubleTag()
        {
            MLINK_FUNC(void, 0x022E59E8, DoubleTag *)(this);
        }

        DoubleTag(double data)
        {
            MLINK_FUNC(void, 0x022E5A54, DoubleTag *, double)(this, data);
        }

        ~DoubleTag()
        {
            MLINK_FUNC(void, 0x02306B9C, DoubleTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x022E5B3C)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x022E5AE0, DoubleTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x022E5AFC, DoubleTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x022E5B44, DoubleTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x022E5C20, DoubleTag *, Tag *)(this, other);
        }

        DoubleTag *copy()
        {
            return MLINK_FUNC(DoubleTag *, 0x022E5C08, DoubleTag *)(this);
        }

        int64_t getAsLong()
        {
            return MLINK_FUNC(int64_t, 0x022E5C9C, DoubleTag *)(this);
        }

        int getAsInt()
        {
            return MLINK_FUNC(int, 0x022E5CDC, DoubleTag *)(this);
        }

        int16_t getAsShort()
        {
            return MLINK_FUNC(int16_t, 0x022E5D28, DoubleTag *)(this);
        }

        int8_t getAsByte()
        {
            return MLINK_FUNC(int8_t, 0x022E5D78, DoubleTag *)(this);
        }

        double getAsDouble()
        {
            return MLINK_FUNC(double, 0x022E5DC8, DoubleTag *)(this);
        }

        float getAsFloat()
        {
            return MLINK_FUNC(float, 0x022E5DD0, DoubleTag *)(this);
        }

        uint32_t field_0x4;
        double data;
    };
    MC_CHECK_SIZE(DoubleTag, 0x10);
} // namespace mc
