#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "UIControl_Base.hpp"

namespace mc
{
    class UIControl_Slider : public UIControl_Base
    {
    public:
        int GetRealWidth()
        {
            return MLINK_FUNC(int, 0x02E8B550, UIControl_Slider *)(this);
        }

        void SetSliderTouchPos(float position)
        {
            MLINK_FUNC(void, 0x02E8B0D4, UIControl_Slider *, float)(this, position);
        }

        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
    };
    MC_CHECK_SIZE(UIControl_Slider, 0x84);
} // namespace mc
