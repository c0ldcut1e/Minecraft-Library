#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class Color
    {
    public:
        Color(uint8_t r, uint8_t g, uint8_t b) : r{r}, g{g}, b{b}, a{0xFF}
        {}

        Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a) : r{r}, g{g}, b{b}, a{a}
        {}

        Color(uint32_t rgba)
        {
            this->r = (rgba >> 24) & 0xFF;
            this->g = (rgba >> 16) & 0xFF;
            this->b = (rgba >> 8) & 0xFF;
            this->a = (rgba >> 0) & 0xFF;
        }

        Color()
        {
            r = 0;
            g = 0;
            b = 0;
            a = 0xFF;
        }

        // In RGBA Format
        uint32_t asHex() const
        {
            uint32_t ret          = 0;
            ((uint8_t *) &ret)[0] = r;
            ((uint8_t *) &ret)[1] = g;
            ((uint8_t *) &ret)[2] = b;
            ((uint8_t *) &ret)[3] = a;
            return ret;
        }

        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a;
    };
    MC_CHECK_SIZE(Color, 0x4);
} // namespace mc
