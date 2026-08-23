#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class UIControl_MultiList;

    class MultiListSliderLogic
    {
    public:
        MultiListSliderLogic()
        {
            MLINK_FUNC(void, 0x02E6CB0C, MultiListSliderLogic *)(this);
        }

        void AddTo(UIControl_MultiList &list, int param_2)
        {
            MLINK_FUNC(void, 0x02E6CFF8, MultiListSliderLogic *, UIControl_MultiList &, int)(this, list, param_2);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
    };
    MC_CHECK_SIZE(MultiListSliderLogic, 0x14);
} // namespace mc
