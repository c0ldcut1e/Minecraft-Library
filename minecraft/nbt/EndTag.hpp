#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class EndTag : public Tag
    {
    public:
        EndTag()
        {
            MLINK_FUNC(void, 0x023C8980, EndTag *)(this);
        }

        ~EndTag()
        {
            MLINK_FUNC(void, 0x023E77A8, EndTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x023C89F4)();
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x023C89EC, EndTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x023C89F0, EndTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x023C89FC, EndTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        EndTag *copy()
        {
            return MLINK_FUNC(EndTag *, 0x023C8A94, EndTag *)(this);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x023C8ADC, EndTag *, Tag *)(this, other);
        }
    };
    MC_CHECK_SIZE(EndTag, 0x4);
} // namespace mc
