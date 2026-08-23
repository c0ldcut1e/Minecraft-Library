#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "internal/basic_string.hpp"

namespace mc
{
    class GameSettings
    {
    public:
        static uint32_t GetPlayerCapeId(int playerIndex)
        {
            return MLINK_FUNC(uint32_t, 0x02F6FFC4, int)(playerIndex);
        }

        static mstd::basic_string<wchar_t> GetPlayerCapeName(int playerIndex)
        {
            mstd::basic_string<wchar_t> result;
            MLINK_FUNC(void, 0x02F6FD3C, mstd::basic_string<wchar_t> *, int)(&result, playerIndex);
            return result;
        }

        static uint32_t GetPlayerSkinId(int playerIndex)
        {
            return MLINK_FUNC(uint32_t, 0x02F70178, int)(playerIndex);
        }

        static mstd::basic_string<wchar_t> GetPlayerSkinName(int playerIndex)
        {
            mstd::basic_string<wchar_t> result;
            MLINK_FUNC(void, 0x02F70154, mstd::basic_string<wchar_t> *, int)(&result, playerIndex);
            return result;
        }
    };
} // namespace mc
