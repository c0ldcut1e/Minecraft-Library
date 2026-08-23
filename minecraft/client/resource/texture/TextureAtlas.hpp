#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class TextureAtlas
    {
    public:
        uint32_t addIcon(bool isTerrain, uint32_t yPos, uint32_t xPos, const mstd::basic_string<wchar_t> &iconName)
        {
            return MLINK_FUNC(uint32_t, 0x03366AD4, TextureAtlas *, bool, uint32_t, uint32_t,
                              const mstd::basic_string<wchar_t> &)(this, isTerrain, yPos, xPos, iconName);
        }

        int dataValues[28];
    };
    MC_CHECK_SIZE(TextureAtlas, 0x70);
} // namespace mc
