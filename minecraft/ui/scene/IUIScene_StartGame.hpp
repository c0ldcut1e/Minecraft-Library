#pragma once

#include <cstdint>

#include "LaunchMoreOptionsMenuInitData.hpp"
#include "MinecraftLib.hpp"
#include "UIScene.hpp"
#include "ui/control/UIControl.hpp"
#include "ui/control/UIControl_BitmapIcon.hpp"
#include "ui/control/UIControl_CheckBox.hpp"
#include "ui/control/UIControl_HTMLLabel.hpp"
#include "ui/control/UIControl_Label.hpp"
#include "ui/control/UIControl_Slider.hpp"
#include "ui/control/UIControl_TexturePackList.hpp"

namespace mc
{
    class IUIScene_StartGame : public UIScene
    {
    public:
        UIControl_TexturePackList texturePackList;
        UIControl controlTexturePackPanel;
        UIControl_Label labelTexturePackName;
        UIControl_HTMLLabel labelTexturePackDescription;
        UIControl_BitmapIcon bitmapTexturePackIcon;
        UIControl_BitmapIcon bitmapComparison;
        UIControl_Slider field_0x32C;
        UIControl_Slider field_0x3B0;
        UIControl_CheckBox onlineGameCheckBox;
        LaunchMoreOptionsMenuInitData moreOptionsParams;
        uint8_t field_0x5D4;
        uint8_t field_0x5D5;
        uint8_t field_0x5D6;
        uint8_t field_0x5D7;
        MC_UNDEFINED_TYPE(void *, DLCPack *) field_0x5D8;
        uint32_t field_0x5DC;
        uint8_t field_0x5E0;
        uint8_t field_0x5E1;
        uint8_t field_0x5E2;
        uint8_t field_0x5E3;
        uint32_t field_0x5E4;
        uint32_t field_0x5E8;
        uint32_t field_0x5EC;
        uint8_t field_0x5F0;
        uint8_t field_0x5F1;
        uint8_t field_0x5F2;
        uint8_t field_0x5F3;
        uint16_t field_0x5F4;
        uint16_t field_0x5F6;
        uint32_t field_0x5F8;
        uint32_t field_0x5FC;
        uint32_t field_0x600;
        uint32_t field_0x604;
        uint32_t field_0x608;
        uint32_t field_0x60C;
        uint32_t field_0x610;
        uint32_t field_0x614;
        uint8_t field_0x618;
        uint8_t field_0x619;
        uint8_t field_0x61A;
        uint8_t field_0x61B;
        uint32_t field_0x61C;
        uint32_t field_0x620;
        uint8_t field_0x624;
        uint8_t field_0x625;
        uint8_t field_0x626;
        uint8_t field_0x627;
        uint8_t field_0x628;
        uint8_t field_0x629;
        uint8_t field_0x62A;
        uint8_t field_0x62B;
        uint8_t field_0x62C;
        uint8_t field_0x62D;
        uint8_t field_0x62E;
        uint8_t field_0x62F;
        uint32_t field_0x630;
        uint32_t field_0x634;
        uint32_t field_0x638;
        uint32_t field_0x63C;
        MC_UNDEFINED_TYPE(void *, IUIPartial_OnlineRestricted *) field_0x640;
        uint32_t field_0x644;
        uint32_t field_0x648;
        uint32_t field_0x64C;
    };
    MC_CHECK_SIZE(IUIScene_StartGame, 0x650);
} // namespace mc
