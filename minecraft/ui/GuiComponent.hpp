#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "rendering/Font.hpp"

namespace mc
{
    class GuiComponent
    {
    public:
        GuiComponent()
        {
            MLINK_FUNC(void, 0x031341A4, GuiComponent *)(this);
        }

        void blit(int xPos, int yPos, int u, int v, int width, int height)
        {
            MLINK_FUNC(void, 0x03134290, GuiComponent *, int, int, int, int, int, int)(this, xPos, yPos, u, v, width, height);
        }

        void drawCenteredString(Font *font, const mstd::basic_string<wchar_t> &text, int xPos, int yPos, int color)
        {
            MLINK_FUNC(void, 0x031341F0, GuiComponent *, Font *, const mstd::basic_string<wchar_t> &, int, int, int)(this, font, text, xPos, yPos,
                                                                                                                     color);
        }

        void drawString(Font *font, const mstd::basic_string<wchar_t> &text, int xPos, int yPos, int color)
        {
            MLINK_FUNC(void, 0x0313426C, GuiComponent *, Font *, const mstd::basic_string<wchar_t> &, int, int, int)(this, font, text, xPos, yPos,
                                                                                                                     color);
        }

        void fill(int xPos1, int yPos1, int xPos2, int yPos2, int color)
        {
            MLINK_FUNC(void, 0x03111FD0, GuiComponent *, int, int, int, int, int)(this, xPos1, yPos1, xPos2, yPos2, color);
        }

        float blitOffset;
    };
    MC_CHECK_SIZE(GuiComponent, 0x4);
} // namespace mc
