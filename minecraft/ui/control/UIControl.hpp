#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class UIControl
    {
    public:
        float getXPos()
        {
            return MLINK_FUNC(float, 0x02D9D640, UIControl *)(this);
        }

        float getYPos()
        {
            return MLINK_FUNC(float, 0x02D9D648, UIControl *)(this);
        }

        void setVisible(bool visible)
        {
            MLINK_FUNC(void, 0x02D89A7C, UIControl *, bool)(this, visible);
        }

        uint32_t field_0x0;
        uint32_t id;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
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
    };
    MC_CHECK_SIZE(UIControl, 0x50);
} // namespace mc
