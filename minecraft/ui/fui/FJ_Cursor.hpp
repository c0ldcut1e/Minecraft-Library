#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "FJ_FuiNode.hpp"
#include "MinecraftLib.hpp"
#include "fuiRenderNode.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class FJ_Cursor : public FJ_FuiNode
    {
    public:
        ~FJ_Cursor()
        {
            MLINK_FUNC(void, 0x02B233E4, FJ_Cursor *, uint32_t)(this, 0);
        }

        static FJ_Cursor *Construct(FJ_Cursor *storage, fuiRenderNode *renderNode)
        {
            return MLINK_FUNC(FJ_Cursor *, 0x02B02BAC, FJ_Cursor *, fuiRenderNode *)(storage, renderNode);
        }

        void AlignPanel(bool alignRight)
        {
            MLINK_FUNC(void, 0x02B01B5C, FJ_Cursor *, bool)(this, alignRight);
        }

        void ASConstructor()
        {
            MLINK_FUNC(void, 0x02B02E68, FJ_Cursor *)(this);
        }

        void SetLabel(const mstd::basic_string<wchar_t> &label)
        {
            MLINK_FUNC(void, 0x02B02C28, FJ_Cursor *, const mstd::basic_string<wchar_t> &)(this, label);
        }

        void TopAlignPanel()
        {
            MLINK_FUNC(void, 0x02B01A68, FJ_Cursor *)(this);
        }

        void UpdatePanelAlignment()
        {
            MLINK_FUNC(void, 0x02B01FAC, FJ_Cursor *)(this);
        }

        MC_UNDEFINED_TYPE(fuiRenderNode *, fuiRenderNodeEditText) textField;
        FJ_FuiNode *pointerTextPanel;
        FJ_FuiNode *pointerIcon;
        FJ_FuiNode *cursorImage;
        int field_0x30;
        int field_0x34;
    };
    MC_CHECK_SIZE(FJ_Cursor, 0x38);
} // namespace mc
