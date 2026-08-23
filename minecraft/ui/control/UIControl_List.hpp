#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "UIControl_Base.hpp"

namespace mc
{
    class UIString;

    class UIControl_List : public UIControl_Base
    {
    public:
        bool CanTouchFocus(int x, int y)
        {
            return MLINK_FUNC(bool, 0x02E8A1D4, UIControl_List *, int, int)(this, x, y);
        }

        void init(int param_1)
        {
            MLINK_FUNC(void, 0x02E5606C, UIControl_List *, int)(this, param_1);
        }

        void SetItemLabel(uint32_t id, UIString *str, bool param_3)
        {
            MLINK_FUNC(void, 0x02E7AA08, UIControl_List *, uint32_t, UIString *, bool)(this, id, str, param_3);
        }

        void SetTouchFocus(int x, int y, bool focused)
        {
            MLINK_FUNC(void, 0x02E8A134, UIControl_List *, int, int, bool)(this, x, y, focused);
        }

        uint32_t field_0x5C;
    };
    MC_CHECK_SIZE(UIControl_List, 0x60);
} // namespace mc
