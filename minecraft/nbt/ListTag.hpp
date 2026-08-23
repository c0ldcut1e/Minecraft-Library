#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class ListTag : public Tag
    {
    public:
        ListTag(int param_1)
        {
            MLINK_FUNC(void, 0x02573958, ListTag *, int)(this, param_1);
        }

        void add(Tag *tag)
        {
            MLINK_FUNC(void, 0x02573F8C, ListTag *, Tag *)(this, tag);
        }

        Tag *get(int param_1)
        {
            return MLINK_FUNC(Tag *, 0x02590080, ListTag *, int)(this, param_1);
        }

        void getString(int index, const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x02590594, ListTag *, int, const mstd::basic_string<wchar_t> &)(this, index, str);
        }

        int size()
        {
            return MLINK_FUNC(int, 0x02574F24, ListTag *)(this);
        }

        void toString(const mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x0258EEE4, ListTag *, const mstd::basic_string<wchar_t> &)(this, result);
        }

        mstd::vector<Tag *> tags;
        uint32_t maxSize;
    };
    MC_CHECK_SIZE(ListTag, 0x18);
} // namespace mc
