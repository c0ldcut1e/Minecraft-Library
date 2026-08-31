#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "ui/fui/fuiRenderNode.hpp"
#include "ui/scene/UIScene.hpp"

namespace mc
{
    class UIControl_SlotList
    {
    public:
        UIControl_SlotList()
        {
            MLINK_FUNC(void, 0x02E57E3C, UIControl_SlotList *)(this);
        }

        void addSlot(uint32_t slot)
        {
            MLINK_FUNC(void, 0x02E2F28C, UIControl_SlotList *, uint32_t)(this, slot);
        }

        void addSlots(uint32_t firstSlot, int slotCount)
        {
            MLINK_FUNC(void, 0x02E2F2BC, UIControl_SlotList *, uint32_t, int)(this, firstSlot, slotCount);
        }

        void ReInit()
        {
            MLINK_FUNC(void, 0x02E8B7E8, UIControl_SlotList *)(this);
        }

        void setFocus(bool focused)
        {
            MLINK_FUNC(void, 0x02E8B828, UIControl_SlotList *, bool)(this, focused);
        }

        void setHighlightSlot(int slot)
        {
            MLINK_FUNC(void, 0x02E31CAC, UIControl_SlotList *, int)(this, slot);
        }

        void setSlotHighlighted(int slot, bool highlighted)
        {
            MLINK_FUNC(void, 0x02E31C84, UIControl_SlotList *, int, bool)(this, slot, highlighted);
        }

        void setupControl(UIScene *scene, fuiRenderNode *node, const mstd::basic_string<char> &name)
        {
            MLINK_FUNC(void, 0x02E8B7A0, UIControl_SlotList *, UIScene *, fuiRenderNode *, const mstd::basic_string<char> &)(this, scene, node, name);
        }

        void showSlotRedBox(int slot, bool visible)
        {
            MLINK_FUNC(void, 0x02E4EC94, UIControl_SlotList *, int, bool)(this, slot, visible);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t *field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        float field_0x44;
        char field_0x48;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        void *field_0x4C;
        uint8_t field_0x50;
        uint8_t field_0x51;
        uint8_t field_0x52;
        uint8_t field_0x53;
        int field_0x54;
        uint32_t field_0x58;
        int field_0x5C;
    };
    MC_CHECK_SIZE(UIControl_SlotList, 0x60);
} // namespace mc
