#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "IUIScene_AbstractContainerMenu.hpp"
#include "MinecraftLib.hpp"
#include "UIScene_AbstractContainerMenu.hpp"
#include "internal/basic_string.hpp"
#include "ui/UIStructs.hpp"
#include "ui/control/UIControl_Label.hpp"
#include "ui/control/UIControl_MinecraftPlayer.hpp"
#include "ui/control/UIControl_SlotList.hpp"
#include "ui/fui/fuiRect.hpp"
#include "ui/layer/UILayer.hpp"

namespace mc
{
    class UIScene_InventoryMenu : public UIScene_AbstractContainerMenu
    {
    public:
        UIScene_InventoryMenu(int sceneId, void *unknown, UILayer *layer)
        {
            MLINK_FUNC(void, 0x02E58CC4, UIScene_InventoryMenu *, void *, int, void *, UILayer *)(this, nullptr, sceneId, unknown, layer);
        }

        ~UIScene_InventoryMenu()
        {
            MLINK_FUNC(void, 0x02E3337C, UIScene_InventoryMenu *, uint32_t)(this, 0);
        }

        void SetClassicCrafting(bool classicCrafting)
        {
            MLINK_FUNC(void, 0x02E58264, UIScene_InventoryMenu *, bool)(this, classicCrafting);
        }

        int getSceneType()
        {
            return MLINK_FUNC(int, 0x02F0E868, UIScene_InventoryMenu *)(this);
        }

        UIControl_SlotList *getSection(IUIScene_AbstractContainerMenu::ESceneSection section)
        {
            return MLINK_FUNC(UIControl_SlotList *, 0x02E91FA8, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection)(this,
                                                                                                                                        section);
        }

        int getSectionColumns(IUIScene_AbstractContainerMenu::ESceneSection section)
        {
            return MLINK_FUNC(int, 0x02E323E4, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection)(this, section);
        }

        int getSectionRows(IUIScene_AbstractContainerMenu::ESceneSection section)
        {
            return MLINK_FUNC(int, 0x02E32448, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection)(this, section);
        }

        int getSectionStartOffset(IUIScene_AbstractContainerMenu::ESceneSection section)
        {
            return MLINK_FUNC(int, 0x02E33100, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection)(this, section);
        }

        void getMoviePath(mstd::basic_string<wchar_t> &path)
        {
            MLINK_FUNC(void, 0x02E91CE8, UIScene_InventoryMenu *, mstd::basic_string<wchar_t> &)(this, path);
        }

        uint8_t getSubSceneType()
        {
            return MLINK_FUNC(uint8_t, 0x02E9183C, UIScene_InventoryMenu *)(this);
        }

        void GetItemScreenData(IUIScene_AbstractContainerMenu::ESceneSection section, int slot, UIVec2D *position, UIVec2D *size)
        {
            MLINK_FUNC(void, 0x02E32D40, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection, int, UIVec2D *,
                       UIVec2D *)(this, section, slot, position, size);
        }

        void GetPositionOfSection(IUIScene_AbstractContainerMenu::ESceneSection section, UIVec2D *position)
        {
            MLINK_FUNC(void, 0x02E32B60, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection, UIVec2D *)(this, section, position);
        }

        void GetSectionAndSlotInDirection(IUIScene_AbstractContainerMenu::ESceneSection section, IUIScene_AbstractContainerMenu::ETapState tapState,
                                          int *newSection, int *newSlot)
        {
            MLINK_FUNC(void, 0x02E324F0, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection,
                       IUIScene_AbstractContainerMenu::ETapState, int *, int *)(this, section, tapState, newSection, newSlot);
        }

        void customDraw(const char *name, fuiRect *rect)
        {
            MLINK_FUNC(void, 0x02E92030, UIScene_InventoryMenu *, const char *, fuiRect *)(this, name, rect);
        }

        void handleReload()
        {
            MLINK_FUNC(void, 0x02E91E18, UIScene_InventoryMenu *)(this);
        }

        void handleSectionClick(IUIScene_AbstractContainerMenu::ESceneSection section)
        {
            MLINK_FUNC(void, 0x02E330EC, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection)(this, section);
        }

        void handleTimerComplete(int timerId)
        {
            MLINK_FUNC(void, 0x02E92438, UIScene_InventoryMenu *, int)(this, timerId);
        }

        bool mapElementsAndNames()
        {
            return MLINK_FUNC(bool, 0x02E91844, UIScene_InventoryMenu *)(this);
        }

        void setSectionSelectedSlot(IUIScene_AbstractContainerMenu::ESceneSection section, int slot, int selection, bool playSound)
        {
            MLINK_FUNC(void, 0x02E331D8, UIScene_InventoryMenu *, IUIScene_AbstractContainerMenu::ESceneSection, int, int,
                       bool)(this, section, slot, selection, playSound);
        }

        void updateEffectsDisplay()
        {
            MLINK_FUNC(void, 0x02E5835C, UIScene_InventoryMenu *)(this);
        }

        int *effectDurations;
        UIControl_SlotList armorSlotList;
        UIControl_SlotList craftingSlotList;
        UIControl_SlotList craftingResultSlotList;
        UIControl_SlotList shieldSlotList;
        UIControl_MinecraftPlayer playerPreview;
        UIControl_Label craftingLabel;
        bool classicCrafting;
        uint8_t field_0x59D;
        uint8_t field_0x59E;
        uint8_t field_0x59F;
        IUIScene_AbstractContainerMenu embeddedContainerMenuInterface;
    };
    MC_CHECK_SIZE(UIScene_InventoryMenu, 0x648);
} // namespace mc
