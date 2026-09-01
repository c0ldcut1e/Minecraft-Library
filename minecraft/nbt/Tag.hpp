#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    enum class ETagType : uint8_t
    {
        END_TAG         = 0x0,
        BYTE_TAG        = 0x1,
        SHORT_TAG       = 0x2,
        INT_TAG         = 0x3,
        LONG_TAG        = 0x4,
        FLOAT_TAG       = 0x5,
        DOUBLE_TAG      = 0x6,
        BYTE_ARRAY_TAG  = 0x7,
        STRING_TAG      = 0x8,
        LIST_TAG        = 0x9,
        COMPOUND_TAG    = 0xA,
        INT_ARRAY_TAG   = 0xB,
        ANY_NUMERIC_TAG = 0x63,
    };

    class VTable_Tag;

    class Tag
    {
    public:
        Tag()
        {
            MLINK_FUNC(void, 0x02994730, Tag *)(this);
        }

        ~Tag()
        {
            MLINK_FUNC(void, 0x02A0F3A4, Tag *, uint32_t)(this, 0);
        }

        static wchar_t *getTagTypeName(ETagType type)
        {
            return MLINK_FUNC(wchar_t *, 0x029952E4, ETagType)(type);
        }

        static Tag *newTag(ETagType type)
        {
            return MLINK_FUNC(Tag *, 0x02995DCC, ETagType)(type);
        }

        void print(const mstd::basic_string<wchar_t> &prefix, char *indent, MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t) output)
        {
            MLINK_FUNC(void, 0x02995BB0, Tag *, const mstd::basic_string<wchar_t> &, char *,
                       MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t))(this, prefix, indent, output);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x02996110, Tag *, Tag *)(this, other);
        }

        void stripEmptyChildren()
        {
            MLINK_FUNC(void, 0x02996194, Tag *)(this);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x02996198, Tag *)(this);
        }

        void getAsString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x029961A0, Tag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        VTable_Tag *vtable;
    };
    MC_CHECK_SIZE(Tag, 0x4);

    class VTable_Tag : public VTable
    {
    public:
        MC_VFUNC(void, Tag, write, MC_UNDEFINED_TYPE(uint32_t *, DataOutput));
        MC_VFUNC(void, Tag, load, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int);
        MC_VFUNC(void, Tag, toString, mstd::basic_string<wchar_t> *);
        MC_VFUNC(int, Tag, getId);
        MC_VFUNC(void, Tag, print, const mstd::basic_string<wchar_t> &, char *, MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t));
        MC_VFUNC(void, Tag, Dtor, bool);
        MC_VFUNC(bool, Tag, equals, Tag *);
        MC_VFUNC(Tag *, Tag, copy);
        MC_VFUNC(void, Tag, stripEmptyChildren);
        MC_VFUNC(bool, Tag, isEmpty);
        MC_VFUNC(void, Tag, getAsString, mstd::basic_string<wchar_t> *);
    };
    MC_CHECK_SIZE(VTable_Tag, 0x60);
} // namespace mc
