#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "internal/basic_string.hpp"

#define MC_FONT_CHAR_HEIGHT 8

namespace mc
{
    class Font
    {
    public:
        uint32_t draw(const mstd::basic_string<wchar_t> &wstr, bool shadow, bool beginEnd)
        {
            return MLINK_FUNC(uint32_t, 0x030E9534, Font *, const mstd::basic_string<wchar_t> &, bool, bool)(this, wstr, shadow, beginEnd);
        }

        uint32_t draw(const mstd::basic_string<wchar_t> &wstr, uint32_t xPos, uint32_t yPos, uint32_t color)
        {
            return MLINK_FUNC(uint32_t, 0x030E9B84, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t)(this, wstr, xPos, yPos,
                                                                                                                               color);
        }

        uint32_t draw(const mstd::basic_string<wchar_t> &wstr, uint32_t xPos, uint32_t yPos, uint32_t color, bool shadow, bool beginEnd)
        {
            return MLINK_FUNC(uint32_t, 0x030E9A10, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t, bool,
                              bool)(this, wstr, xPos, yPos, color, shadow, beginEnd);
        }

        void drawNoBeginEndBuilder(const mstd::basic_string<wchar_t> &wstr, uint32_t xPos, uint32_t yPos, uint32_t color)
        {
            MLINK_FUNC(void, 0x03127FEC, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t)(this, wstr, xPos, yPos, color);
        }

        void drawShadow(const mstd::basic_string<wchar_t> &wstr, uint32_t arg1, uint32_t arg2, uint32_t arg3)
        {
            MLINK_FUNC(void, 0x3126B88, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t)(this, wstr, arg1, arg2, arg3);
        }

        void drawWordWrap(const mstd::basic_string<wchar_t> &wstr, uint32_t xPos, uint32_t yPos, uint32_t width, uint32_t color, uint32_t maxY)
        {
            MLINK_FUNC(void, 0x0312801C, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t, uint32_t,
                       uint32_t)(this, wstr, xPos, yPos, width, color, maxY);
        }

        void drawWordWrapInternal(const mstd::basic_string<wchar_t> &wstr, uint32_t xPos, uint32_t yPos, uint32_t width, uint32_t color,
                                  uint32_t maxY)
        {
            MLINK_FUNC(void, 0x03127770, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t, uint32_t,
                       uint32_t)(this, wstr, xPos, yPos, width, color, maxY);
        }

        void drawWordWrapInternal(const mstd::basic_string<wchar_t> &wstr, uint32_t xPos, uint32_t yPos, uint32_t width, uint32_t color, bool shadow,
                                  uint32_t maxY)
        {
            MLINK_FUNC(void, 0x03127788, Font *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t, uint32_t, bool,
                       uint32_t)(this, wstr, xPos, yPos, width, color, shadow, maxY);
        }

        int width(const mstd::basic_string<wchar_t> &wstr)
        {
            return MLINK_FUNC(uint32_t, 0x30E919C, Font *, const mstd::basic_string<wchar_t> &)(this, wstr);
        }
    };
} // namespace mc
