#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

namespace mc
{
    class UIString
    {
    public:
        UIString(const wchar_t *str)
        {
            MLINK_FUNC(void, 0x02F47938, UIString *, const wchar_t *)(this, str);
        }
        ~UIString()
        {
            MLINK_FUNC(void, 0x02F47FB4, UIString *, uint32_t)(this, 2);
        }
    };
} // namespace mc
