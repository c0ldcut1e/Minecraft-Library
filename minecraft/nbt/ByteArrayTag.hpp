#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class ByteArrayTag : public Tag
    {
    public:
        ByteArrayTag()
        {
            MLINK_FUNC(void, 0x021912E8, ByteArrayTag *)(this);
        }

        ByteArrayTag(ArrayWithLength<uint8_t> data, bool copy)
        {
            MLINK_FUNC(void, 0x02191364, ByteArrayTag *, ArrayWithLength<uint8_t>, bool)(this, data, copy);
        }

        ~ByteArrayTag()
        {
            MLINK_FUNC(void, 0x02191408, ByteArrayTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x0219163C)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x02191488, ByteArrayTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x02191500, ByteArrayTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02191644, ByteArrayTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x02191708, ByteArrayTag *, Tag *)(this, other);
        }

        ByteArrayTag *copy()
        {
            return MLINK_FUNC(ByteArrayTag *, 0x021917D0, ByteArrayTag *)(this);
        }

        ArrayWithLength<uint8_t> getAsByteArray()
        {
            return MLINK_FUNC(ArrayWithLength<uint8_t>, 0x021918EC, ByteArrayTag *)(this);
        }

        ArrayWithLength<uint8_t> data;
    };
    MC_CHECK_SIZE(ByteArrayTag, 0xC);
} // namespace mc
