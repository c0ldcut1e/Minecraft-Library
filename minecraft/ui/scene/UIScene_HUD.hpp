#pragma once

#include "mlink/MLink.hpp"

#include "UIScene.hpp"
#include "internal/basic_string.hpp"
#include "ui/fui/FJ_Hud.hpp"

namespace mc
{
    class UIScene_HUD : public UIScene
    {
    public:
        FJ_Hud *getFJ_Hud()
        {
            return MLINK_FUNC(FJ_Hud *, 0x02E3A804, UIScene_HUD *)(this);
        }

        int GetHotBarHeight()
        {
            return MLINK_FUNC(int, 0x02E9CA48, UIScene_HUD *)(this);
        }

        int GetHotBarWidth()
        {
            return MLINK_FUNC(int, 0x02E9C9D0, UIScene_HUD *)(this);
        }

        int GetHotBarX()
        {
            return MLINK_FUNC(int, 0x02E9C8E0, UIScene_HUD *)(this);
        }

        int GetHotBarY()
        {
            return MLINK_FUNC(int, 0x02E9C958, UIScene_HUD *)(this);
        }

        void SetSelectedLabel(const mstd::basic_string<wchar_t> &label)
        {
            MLINK_FUNC(void, 0x02E3A850, UIScene_HUD *, const mstd::basic_string<wchar_t> &)(this, label);
        }
    };
} // namespace mc
