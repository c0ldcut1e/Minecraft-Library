#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"
#include "ui/control/UIControl.hpp"
#include "ui/control/UIControl_Base.hpp"
#include "ui/fui/fuiFile.hpp"
#include "ui/fui/fuiRect.hpp"
#include "ui/layer/UILayer.hpp"
#include "utils/Common.hpp"

namespace mc
{
    class VTable_UIScene;

    class UIScene
    {
    public:
        UIScene()
        {
            MLINK_FUNC(void, 0x02E39FD8, UIScene *)(this);
        }

        UIScene(int sceneId, UILayer *layer)
        {
            MLINK_FUNC(void, 0x02E39FD8, UIScene *, int, UILayer *)(this, sceneId, layer);
        }
        ~UIScene()
        {
            MLINK_FUNC(void, 0x02E30050, UIScene *)(this);
        }

        void customDrawSlotControlFui(fuiRect *rect, int playerIndex, const mboost::not_null_ptr<ItemInstance> &item, float alpha, bool foil,
                                      bool decorations, bool useCommandBuffer)
        {
            MLINK_FUNC(void, 0x02E54F18, UIScene *, fuiRect *, int, mboost::not_null_ptr<ItemInstance>, float, bool, bool,
                       bool)(this, rect, playerIndex, item, alpha, foil, decorations, useCommandBuffer);
        }

        void doHorizontalResizeCheck()
        {
            MLINK_FUNC(void, 0x02E637C0, UIScene *)(this);
        }

        UIControl *GetMainPanel()
        {
            return MLINK_FUNC(UIControl *, *(uint32_t *) ((uint32_t) vtable + 0xC4), UIScene *)(this);
        }

        void initialiseMovie()
        {
            MLINK_FUNC(void, 0x02E3A79C, UIScene *)(this);
        }

        void navigateBack()
        {
            MLINK_FUNC(void, 0x02E365B4, UIScene *)(this);
        }

        void removeControl(UIControl_Base *control, bool animate)
        {
            MLINK_FUNC(void, 0x02E636A8, UIScene *, UIControl_Base *, bool)(this, control, animate);
        }

        void sendInputToMovie(int param_1, bool param_2, bool param_3, bool param_4)
        {
            MLINK_FUNC(void, 0x02E3CBD0, UIScene *, int, bool, bool, bool)(this, param_1, param_2, param_3, param_4);
        }

        void SetBackScene(UIScene *backScene)
        {
            MLINK_FUNC(void, 0x02E84614, UIScene *, UIScene *)(this, backScene);
        }

        void SetFocusToElement(int element)
        {
            MLINK_FUNC(void, 0x02E897FC, UIScene *, int)(this, element);
        }

        void setOpacity(float opacity)
        {
            MLINK_FUNC(void, 0x02E89B38, UIScene *, float)(this, opacity);
        }

        uint32_t field_0x0;
        uint32_t UISControl;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        fuiFile *fui;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        float opacity;
        uint32_t field_0x68;
        UIScene *backScene;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        int movieWidth;
        int movieHeight;
        uint32_t field_0x84;
        uint32_t field_0x88;
        mstd::vector<uint32_t> uiControlVector;
        UILayer *uiLayer;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        VTable_UIScene *vtable;
    };
    MC_CHECK_SIZE(UIScene, 0xC8);

    struct VTable_UIScene : public VTable
    {
    public:
        MC_VFUNC(void, struct UIScene, reloadMovie);
        MC_VFUNC(void, struct UIScene, needsReloaded);
        MC_VFUNC(void, struct UIScene, hasMovie);
        MC_VFUNC(void, struct UIScene, updateSafeZone);
        MC_VFUNC(void, struct UIScene, updateViewportTouchOffset);
        MC_VFUNC(void, struct UIScene, getSafeZoneHalfHeight);
        MC_VFUNC(void, struct UIScene, getSafeZoneHalfWidth);
        MC_VFUNC(void, struct UIScene, getMoviePath, mstd::basic_string<wchar_t> &);
        MC_VFUNC(bool, struct UIScene, mapElementsAndNames);
        MC_VFUNC(void, struct UIScene, __dt);
        MC_VFUNC(int, struct UIScene, getSceneType);
        MC_VFUNC(uint32_t, struct UIScene, getSubSceneType);
        MC_VFUNC(void, struct UIScene, tick);
        MC_VFUNC(void, struct UIScene, SetFocusToElement);
        MC_VFUNC(void, struct UIScene, handleTimerComplete);
        MC_VFUNC(void, struct UIScene, stealsFocus);
        MC_VFUNC(void, struct UIScene, hasFocus);
        MC_VFUNC(void, struct UIScene, updateTooltips);
        MC_VFUNC(void, struct UIScene, updateComponents);
        MC_VFUNC(void, struct UIScene, handleGainFocus);
        MC_VFUNC(void, struct UIScene, handleLoseFocus);
        MC_VFUNC(void, struct UIScene, hidesLowerScenes);
        MC_VFUNC(void, struct UIScene, blocksInput);
        MC_VFUNC(void, struct UIScene, GetMainPanel);
        MC_VFUNC(void, struct UIScene, render);
        MC_VFUNC(void, struct UIScene, customDraw);
        MC_VFUNC(void, struct UIScene, allowRepeat);
        MC_VFUNC(void, struct UIScene, handleInput, int, int, bool, bool, bool, bool);
        MC_VFUNC(void, struct UIScene, handleDestroy);
        MC_VFUNC(void, struct UIScene, handlePreUnloadForReload);
        MC_VFUNC(void, struct UIScene, handlePreReload);
        MC_VFUNC(void, struct UIScene, handleReload);
        MC_VFUNC(void, struct UIScene, handlePress);
        MC_VFUNC(void, struct UIScene, handleFocusChange);
        MC_VFUNC(void, struct UIScene, handleInitFocus);
        MC_VFUNC(void, struct UIScene, handleCheckboxToggled);
        MC_VFUNC(void, struct UIScene, handleCheckboxElementToggled);
        MC_VFUNC(void, struct UIScene, handleSliderMove);
        MC_VFUNC(void, struct UIScene, handleSliderElementMove);
        MC_VFUNC(void, struct UIScene, handleAnimationEnd);
        MC_VFUNC(void, struct UIScene, handleSelectionChanged);
        MC_VFUNC(void, struct UIScene, handleRequestMoreData);
        MC_VFUNC(void, struct UIScene, handleTouchBoxRebuild);
        MC_VFUNC(void, struct UIScene, HandleDLCMountingComplete);
        MC_VFUNC(void, struct UIScene, HandleDLCInstalled);
        MC_VFUNC(void, struct UIScene, HandleDLCLicenseChange);
        MC_VFUNC(void, struct UIScene, HandleTMSBanFileRetrieved);
        MC_VFUNC(void, struct UIScene, HandleMessage);
        MC_VFUNC(void, struct UIScene, HandleSaveDeviceRemoved);
        MC_VFUNC(void, struct UIScene, handleUnlockFullVersion);
        MC_VFUNC(void, struct UIScene, handleTouchInput);
        MC_VFUNC(void, struct UIScene, isReadyToDelete);
    };
    MC_CHECK_SIZE(VTable_UIScene, 0x1A8);
} // namespace mc
