#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class FloatTag : public Tag
    {
    public:
        FloatTag()
        {
            MLINK_FUNC(void, 0x0243E640, FloatTag *)(this);
        }

        FloatTag(float data)
        {
            MLINK_FUNC(void, 0x0243E6B8, FloatTag *, float)(this, data);
        }

        ~FloatTag()
        {
            MLINK_FUNC(void, 0x0246DFF4, FloatTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x0243E7A0)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x0243E744, FloatTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x0243E760, FloatTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x0243E7A8, FloatTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x0243E884, FloatTag *, Tag *)(this, other);
        }

        FloatTag *copy()
        {
            return MLINK_FUNC(FloatTag *, 0x0243E86C, FloatTag *)(this);
        }

        int64_t getAsLong()
        {
            return MLINK_FUNC(int64_t, 0x0243E900, FloatTag *)(this);
        }

        int getAsInt()
        {
            return MLINK_FUNC(int, 0x0243E924, FloatTag *)(this);
        }

        int16_t getAsShort()
        {
            return MLINK_FUNC(int16_t, 0x0243E974, FloatTag *)(this);
        }

        int8_t getAsByte()
        {
            return MLINK_FUNC(int8_t, 0x0243E9C8, FloatTag *)(this);
        }

        double getAsDouble()
        {
            return MLINK_FUNC(double, 0x0243EA1C, FloatTag *)(this);
        }

        float getAsFloat()
        {
            return MLINK_FUNC(float, 0x0243EA24, FloatTag *)(this);
        }

        float data;
    };
    MC_CHECK_SIZE(FloatTag, 0x8);
} // namespace mc
