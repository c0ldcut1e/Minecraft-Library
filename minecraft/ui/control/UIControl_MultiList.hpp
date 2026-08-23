#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "UIControl_List.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class UIScene;
    class fuiRenderNode;

    class UIControl_MultiList : public UIControl_List
    {
    public:
        UIControl_MultiList()
        {
            MLINK_FUNC(void, 0x02E67BD4, UIControl_MultiList *)(this);
        }

        UIControl_MultiList(UIControl_MultiList *this_)
        {
            MLINK_FUNC(void, 0x02E67BD4, UIControl_MultiList *)(this_);
        }

        void AddNewButton(const mstd::basic_string<wchar_t> &str, uint32_t id, bool enabled)
        {
            MLINK_FUNC(void, 0x02E345EC, UIControl_MultiList *, const mstd::basic_string<wchar_t> &, uint32_t, bool)(this, str, id, enabled);
        }

        void AddNewCheckbox(const mstd::basic_string<wchar_t> &str, uint32_t id, bool enabled)
        {
            MLINK_FUNC(void, 0x02E67CA8, UIControl_MultiList *, const mstd::basic_string<wchar_t> &, uint32_t, bool)(this, str, id, enabled);
        }

        void AddNewLabel(const mstd::basic_string<wchar_t> &str, uint32_t id)
        {
            MLINK_FUNC(void, 0x02E67C40, UIControl_MultiList *, const mstd::basic_string<wchar_t> &, uint32_t)(this, str, id);
        }

        void AddNewSlider(const mstd::basic_string<wchar_t> &str, bool enabled, uint32_t id, uint32_t idx, uint32_t min, uint32_t max)
        {
            MLINK_FUNC(void, 0x02E6CF88, UIControl_MultiList *, const mstd::basic_string<wchar_t> &, uint32_t, uint32_t, uint32_t, uint32_t, bool,
                       uint32_t, uint32_t)(this, str, id, min, max, idx, enabled, max, min);
        }

        void setupControl(UIScene *scene, fuiRenderNode *fuiNode, mstd::basic_string<wchar_t> *str)
        {
            MLINK_FUNC(void, 0x02E8E86C, UIControl_MultiList *, UIScene *, fuiRenderNode *, mstd::basic_string<wchar_t> *)(this, scene, fuiNode, str);
        }

        void setupControl(UIScene *scene, uint32_t fuiNode, mstd::basic_string<wchar_t> *str)
        {
            MLINK_FUNC(void, 0x02E8E86C, UIControl_MultiList *, UIScene *, uint32_t, mstd::basic_string<wchar_t> *)(this, scene, fuiNode, str);
        }

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
    };
    MC_CHECK_SIZE(UIControl_MultiList, 0xC0);
} // namespace mc
