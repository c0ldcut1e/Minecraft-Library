#pragma once

#include <algorithm>
#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "container/AbstractContainerMenu.hpp"
#include "container/Slot.hpp"
#include "internal/VTable.hpp"
#include "ui/UIStructs.hpp"
#include "utils/ClickType.hpp"

namespace mc
{
    class IUIScene_AbstractContainerMenu
    {
    public:
        enum ESceneSection : int
        {
        };

        enum ETapState : int
        {
        };

        [[nodiscard]] bool canTakeAll() const
        {
            return MLINK_FUNC(bool, 0x02DEC004, const IUIScene_AbstractContainerMenu *)(this);
        }

        int getCurrentIndex(ESceneSection section)
        {
            return MLINK_FUNC(int, 0x02DF34B8, IUIScene_AbstractContainerMenu *, ESceneSection)(this, section);
        }

        bool handleKeyDown(int pad, int action, bool repeat)
        {
            return MLINK_FUNC(bool, 0x02DF3CE4, IUIScene_AbstractContainerMenu *, int, int, bool)(this, pad, action, repeat);
        }

        void handleTakeAll(int action)
        {
            MLINK_FUNC(void, 0x02DF494C, IUIScene_AbstractContainerMenu *, int)(this, action);
        }

        void SetPointerPosition(float xPos, float yPos)
        {
            pointerPos.x = std::clamp(xPos, pointerMinX, pointerMaxX);
            pointerPos.y = std::clamp(yPos, pointerMinY, pointerMaxY);
        }

        void slotClicked(int slot, int button, ClickType::eClickType clickType)
        {
            MLINK_FUNC(void, 0x02DF3534, IUIScene_AbstractContainerMenu *, int, int, ClickType::eClickType)(this, slot, button, clickType);
        }

        AbstractContainerMenu *menu;
        bool autoDeleteMenu;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t field_0x7;
        int previousTutorialState;
        UIVec2D pointerPos;
        float pointerImageOffsetX;
        float pointerImageOffsetY;
        float pointerMinX;
        float pointerMaxX;
        float pointerMinY;
        float pointerMaxY;
        float panelMinX;
        float panelMaxX;
        float panelMinY;
        float panelMaxY;
        int consecutiveInputTicks;
        int currentTapState;
        int currentSection;
        int currentSlotX;
        int currentSlotY;
        int firstSection;
        int maxSection;
        int toolTipSettings[16];
        bool pointerOutsideMenu;
        uint8_t field_0x99;
        uint8_t field_0x9A;
        uint8_t field_0x9B;
        Slot *lastPointerLabelSlot;
        bool splitscreen;
        bool navigateBack;
        uint8_t field_0xA2;
        uint8_t field_0xA3;
        VTable *vtable;
    };
    MC_CHECK_SIZE(IUIScene_AbstractContainerMenu, 0xA8);
} // namespace mc
