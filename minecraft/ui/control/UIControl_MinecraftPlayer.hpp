#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "ui/control/UIControl.hpp"
#include "ui/fui/fuiRect.hpp"

namespace mc
{
    class UIControl_MinecraftPlayer : public UIControl
    {
    public:
        UIControl_MinecraftPlayer()
        {
            MLINK_FUNC(void, 0x02E58150, UIControl_MinecraftPlayer *)(this);
        }

        void render(fuiRect *rect)
        {
            MLINK_FUNC(void, 0x02E8C988, UIControl_MinecraftPlayer *, fuiRect *)(this, rect);
        }

        float screenWidth;
        float screenHeight;
        float scaledScreenWidth;
        float scaledScreenHeight;
    };
    MC_CHECK_SIZE(UIControl_MinecraftPlayer, 0x60);
} // namespace mc
