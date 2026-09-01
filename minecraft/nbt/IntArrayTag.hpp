#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class IntArrayTag : public Tag
    {
    public:
        IntArrayTag()
        {
            MLINK_FUNC(void, 0x02516D90, IntArrayTag *)(this);
        }

        IntArrayTag(ArrayWithLength<int> data)
        {
            MLINK_FUNC(void, 0x02516E08, IntArrayTag *, ArrayWithLength<int>)(this, data);
        }

        ~IntArrayTag()
        {
            MLINK_FUNC(void, 0x02516E9C, IntArrayTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x02517200)();
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x02516F10, IntArrayTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x02516FB0, IntArrayTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02517208, IntArrayTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x025172CC, IntArrayTag *, Tag *)(this, other);
        }

        IntArrayTag *copy()
        {
            return MLINK_FUNC(IntArrayTag *, 0x02517398, IntArrayTag *)(this);
        }

        ArrayWithLength<int> getAsIntArray()
        {
            return MLINK_FUNC(ArrayWithLength<int>, 0x025174B8, IntArrayTag *)(this);
        }

        ArrayWithLength<int> data;
    };
    MC_CHECK_SIZE(IntArrayTag, 0xC);
} // namespace mc
