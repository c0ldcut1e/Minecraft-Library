#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "FJ_FuiNode.hpp"
#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class FJ_Hud : public FJ_FuiNode
    {
    public:
        void clearStatusEffectTiles()
        {
            UpdateStatusEffectTile(0, 0, 0, false, 0.0F);
        }

        FJ_FuiNode *getStatusEffectTile(int index)
        {
            if (index < 0 || index >= 27)
            {
                return nullptr;
            }

            return *(FJ_FuiNode **) ((uint8_t *) this + 0x3C0 + (index * 4));
        }

        void HideSelectedLabel()
        {
            MLINK_FUNC(void, 0x02B562B4, FJ_Hud *)(this);
        }

        void SetHealthAbsorb(bool visible, int value)
        {
            MLINK_FUNC(void, 0x02B4932C, FJ_Hud *, bool, int)(this, visible, value);
        }

        void SetSelectedLabel(const mstd::basic_string<wchar_t> &label, bool updateText)
        {
            MLINK_FUNC(void, 0x02B48BA8, FJ_Hud *, const mstd::basic_string<wchar_t> &, bool)(this, label, updateText);
        }

        void ShowAir(bool show)
        {
            MLINK_FUNC(void, 0x02B58478, FJ_Hud *, bool)(this, show);
        }

        void ShowArmour(bool show)
        {
            MLINK_FUNC(void, 0x02B584C4, FJ_Hud *, bool)(this, show);
        }

        void ShowFood(bool show)
        {
            MLINK_FUNC(void, 0x02B5842C, FJ_Hud *, bool)(this, show);
        }

        void ShowHealth(bool show)
        {
            MLINK_FUNC(void, 0x02B58394, FJ_Hud *, bool)(this, show);
        }

        void ShowHorseHealth(bool show)
        {
            MLINK_FUNC(void, 0x02B583E0, FJ_Hud *, bool)(this, show);
        }

        void UpdateStatusEffectTile(int total, int index, int icon, bool harmful, float alpha)
        {
            MLINK_FUNC(void, 0x02B563FC, FJ_Hud *, int, int, int, bool, float)(this, total, index, icon, harmful, alpha);
        }

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
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        FJ_FuiNode *healthAbsorbBar;
        FJ_FuiNode *healthAbsorbIcon[10];
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
        FJ_FuiNode *healthBar;
        FJ_FuiNode *healthIcon[10];
    };
    MC_CHECK_SIZE(FJ_Hud, 0x130);
} // namespace mc
