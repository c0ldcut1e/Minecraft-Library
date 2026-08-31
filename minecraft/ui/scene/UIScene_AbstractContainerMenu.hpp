#pragma once

#include <cstdint>

#include "IUIScene_AbstractContainerMenu.hpp"
#include "UIScene.hpp"
#include "ui/control/UIControl.hpp"
#include "ui/control/UIControl_Base.hpp"
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
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        UIControl field_0xD8;
        UIControl_SlotList field_0x128;
        UIControl_SlotList field_0x188;
        UIControl_Base field_0x1E8;
        UIControl_Label field_0x244;
        UIControl_Label field_0x2A4;
        UIControl field_0x304;
        IUIScene_AbstractContainerMenu *containerMenuInterface;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
        uint32_t field_0x370;
        uint32_t field_0x374;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
        uint32_t field_0x388;
        uint32_t field_0x38C;
        uint32_t field_0x390;
        uint32_t field_0x394;
        uint32_t field_0x398;
        uint32_t field_0x39C;
        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
        uint32_t field_0x3B8;
        uint32_t field_0x3BC;
        uint32_t field_0x3C0;
        uint32_t field_0x3C4;
        uint32_t field_0x3C8;
        uint32_t field_0x3CC;
        uint32_t field_0x3D0;
        uint32_t field_0x3D4;
        uint32_t field_0x3D8;
        uint32_t field_0x3DC;
        uint32_t field_0x3E0;
        uint32_t field_0x3E4;
        uint32_t field_0x3E8;
        uint32_t field_0x3EC;
        uint32_t field_0x3F0;
        uint32_t field_0x3F4;
        uint32_t field_0x3F8;
        void *field_0x3FC;
    };
    MC_CHECK_SIZE(UIScene_AbstractContainerMenu, 0x400);
} // namespace mc
