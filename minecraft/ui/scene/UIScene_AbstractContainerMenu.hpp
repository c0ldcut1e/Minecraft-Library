#pragma once

#include <cstdint>

#include "IUIScene_AbstractContainerMenu.hpp"
#include "UIScene.hpp"
#include "ui/control/UIControl.hpp"
#include "ui/control/UIControl_Base.hpp"
#include "ui/control/UIControl_Cursor.hpp"
#include "ui/control/UIControl_Label.hpp"
#include "ui/control/UIControl_SlotList.hpp"

namespace mc
{
    class UIScene_AbstractContainerMenu : public UIScene
    {
    public:
        uint32_t field_0xC8;
        uint8_t field_0xCC;
        uint8_t field_0xCD;
        uint8_t field_0xCE;
        uint8_t field_0xCF;
        uint32_t renderWidth;
        uint32_t renderHeight;
        UIControl mainPanel;
        UIControl_SlotList hotbarSlotList;
        UIControl_SlotList inventorySlotList;
        UIControl_Cursor cursor;
        UIControl_Label inventoryLabel;
        UIControl_Label field_0x2A4;
        UIControl cursorControl;
        IUIScene_AbstractContainerMenu *containerMenuInterface;
    };
    MC_CHECK_SIZE(UIScene_AbstractContainerMenu, 0x358);
} // namespace mc
