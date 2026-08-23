#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "layer/UILayer.hpp"
#include "scene/UIScene_HUD.hpp"

namespace mc
{
    class UIGroup
    {
    public:
        UILayer *layers[8];
        MC_UNDEFINED_TYPE(void *, UIComponent_Tooltips *) tooltips;
        MC_UNDEFINED_TYPE(void *, UIComponent_TutorialPopup *) * tutorialPopup;
        MC_UNDEFINED_TYPE(void *, UIComponent_PressStartToPlay *) * pressStartToPlay;
        UIScene_HUD *hud;
        uint32_t field_0x30;
        uint32_t viewportType;
        uint32_t groupId;
        int playerIndex;
        bool menuDisplayed;
        bool pauseMenuDisplayed;
        bool containerMenuDisplayed;
        bool ignoreAutosaveMenuDisplayed;
        bool ignorePlayerJoinMenuDisplayed;
        uint8_t field_0x45;
        uint8_t field_0x46;
        uint8_t field_0x47;
        uint32_t focusUpdateDelay;
        uint32_t displayList;
    };
    MC_CHECK_SIZE(UIGroup, 0x50);
} // namespace mc
