#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "GuiMessage.hpp"
#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class Gui
    {
    public:
        void addMessage(const mstd::basic_string<wchar_t> &wstr, int field_0x0, bool field_0x1, bool field_0x2, bool field_0x3, bool field_0x4)
        {
            MLINK_FUNC(void, 0x0313873C, Gui *, const mstd::basic_string<wchar_t> &, uint32_t, bool, bool, bool,
                       bool)(this, wstr, field_0x0, field_0x1, field_0x2, field_0x3, field_0x4);
        }

        void renderSlot(int slot, int xPos, int yPos, float partialTicks)
        {
            MLINK_FUNC(void, 0x03137380, Gui *, int, int, int, float)(this, slot, xPos, yPos, partialTicks);
        }

        void setSingleMessage(const mstd::basic_string<wchar_t> &wstr, int param_2, int param_3)
        {
            MLINK_FUNC(void, 0x031390F8, Gui *, const mstd::basic_string<wchar_t> &, int, int)(this, wstr, param_2, param_3);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        mstd::vector<GuiMessage> messages[4];
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
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
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        uint32_t field_0x14C;
        uint32_t field_0x150;
        uint32_t field_0x154;
        uint32_t field_0x158;
        uint32_t field_0x15C;
        uint32_t field_0x160;
        uint32_t field_0x164;
        uint32_t field_0x168;
        uint32_t field_0x16C;
        uint32_t field_0x170;
        uint32_t field_0x174;
        uint32_t field_0x178;
        uint32_t field_0x17C;
        uint32_t field_0x180;
        uint32_t field_0x184;
        uint32_t field_0x188;
        uint32_t field_0x18C;
        uint32_t field_0x190;
        uint32_t field_0x194;
        uint32_t field_0x198;
        uint32_t field_0x19C;
        uint32_t field_0x1A0;
        uint32_t field_0x1A4;
        uint32_t field_0x1A8;
        uint32_t field_0x1AC;
        uint32_t field_0x1B0;
        uint32_t field_0x1B4;
        uint32_t field_0x1B8;
        uint32_t field_0x1BC;
        uint32_t field_0x1C0;
        uint32_t field_0x1C4;
        uint32_t field_0x1C8;
        uint32_t field_0x1CC;
        uint32_t field_0x1D0;
        uint32_t field_0x1D4;
    };
    MC_CHECK_SIZE(Gui, 0x1D8);
}; // namespace mc
