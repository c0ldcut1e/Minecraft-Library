#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class StringTag : public Tag
    {
    public:
        StringTag(const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x02954A0C, StringTag *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        void getAsString(const mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02954CF4, StringTag *, const mstd::basic_string<wchar_t> &)(this, result);
        }

        mstd::basic_string<wchar_t> data;
    };
    MC_CHECK_SIZE(StringTag, 0x24);
} // namespace mc
