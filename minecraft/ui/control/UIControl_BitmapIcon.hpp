#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "UIControl_Base.hpp"

namespace mc
{
    class UIControl_BitmapIcon : public UIControl_Base
    {
    public:
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
    };
    MC_CHECK_SIZE(UIControl_BitmapIcon, 0x74);
} // namespace mc
