#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class MaterialColor
    {
    public:
        MaterialColor(int id, uint32_t color)
        {
            MLINK_FUNC(void, 0x0253A984, MaterialColor *, int, uint32_t)(this, id, color);
        }

        static void staticCtor()
        {
            MLINK_FUNC(void, 0x0253A9F4)();
        }

        static void staticCtorAfterDyeColor()
        {
            MLINK_FUNC(void, 0x0253B17C)();
        }

        uint32_t calculateRGBColor(int colorIntensity)
        {
            return MLINK_FUNC(uint32_t, 0x0253B484, MaterialColor *, int)(this, colorIntensity);
        }

        uint32_t color;
        int id;
    };
    MC_CHECK_SIZE(MaterialColor, 0x8);
} // namespace mc
