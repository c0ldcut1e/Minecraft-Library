#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    enum class ETagType
    {
        BYTE_TAG       = 0x1,
        SHORT_TAG      = 0x2,
        INT_TAG        = 0x3,
        LONG_TAG       = 0x4,
        FLOAT_TAG      = 0x5,
        DOUBLE_TAG     = 0x6,
        BYTE_ARRAY_TAG = 0x7,
        STRING_TAG     = 0x8,
        LIST_TAG       = 0x9,
        COMPOUND_TAG   = 0xA,
    };
    class VTable_Tag;

    class Tag
    {
    public:
        Tag()
        {
            MLINK_FUNC(void, 0x02994730, Tag *)(this);
        }

        VTable_Tag *vtable;
    };
    MC_CHECK_SIZE(Tag, 0x4);

    class VTable_Tag : public VTable
    {
    public:
        MC_VFUNC(void, class Tag, write);
        MC_VFUNC(void, class Tag, load);
        MC_VFUNC(void, class Tag, toString);
        MC_VFUNC(int, class Tag, getId);
    };
    MC_CHECK_SIZE(VTable_Tag, 0x28);
} // namespace mc
