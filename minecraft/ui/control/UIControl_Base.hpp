#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "UIControl.hpp"

namespace mc
{
    class UIControl_Base : public UIControl
    {
    public:
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
    };
    MC_CHECK_SIZE(UIControl_Base, 0x5C);
} // namespace mc
