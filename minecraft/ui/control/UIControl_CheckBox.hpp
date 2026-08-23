#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "UIControl_Base.hpp"

namespace mc
{
    class UIControl_CheckBox : public UIControl_Base
    {
    public:
        uint32_t field_0x5C;
    };
    MC_CHECK_SIZE(UIControl_CheckBox, 0x60);
} // namespace mc
