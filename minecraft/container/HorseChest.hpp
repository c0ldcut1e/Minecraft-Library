#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "SimpleContainer.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class HorseChest : public SimpleContainer
    {
    public:
        static HorseChest *__ct(HorseChest *ptr, const mstd::basic_string<wchar_t> &title, int size)
        {
            return MLINK_FUNC(HorseChest *, 0x0250AB50, HorseChest *, int, int, const mstd::basic_string<wchar_t> &, int)(ptr, 0, 0, title, size);
        }

        static HorseChest *__ct(HorseChest *ptr, int mediaName, const mstd::basic_string<wchar_t> &title, bool customName, int size)
        {
            return MLINK_FUNC(HorseChest *, 0x0250AC8C, HorseChest *, int, int, int, const mstd::basic_string<wchar_t> &, bool,
                              int)(ptr, 0, 0, mediaName, title, customName, size);
        }
    };
    MC_CHECK_SIZE(HorseChest, 0x64);
} // namespace mc
