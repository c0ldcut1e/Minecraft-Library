#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class StringTag : public Tag
    {
    public:
        StringTag()
        {
            MLINK_FUNC(void, 0x02954944, StringTag *)(this);
        }

        StringTag(const mstd::basic_string<wchar_t> &data)
        {
            MLINK_FUNC(void, 0x02954A0C, StringTag *, const mstd::basic_string<wchar_t> &)(this, data);
        }

        ~StringTag()
        {
            MLINK_FUNC(void, 0x0297DBE0, StringTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x02954B50)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x02954AB4, StringTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x02954AD0, StringTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02954B58, StringTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        StringTag *copy()
        {
            return MLINK_FUNC(StringTag *, 0x02954BD0, StringTag *)(this);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x02954BE8, StringTag *)(this);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x02954BF8, StringTag *, Tag *)(this, other);
        }

        void getAsString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02954CF4, StringTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        mstd::basic_string<wchar_t> data;
    };
    MC_CHECK_SIZE(StringTag, 0x24);
} // namespace mc
