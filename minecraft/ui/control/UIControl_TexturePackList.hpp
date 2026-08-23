#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "UIControl_List.hpp"

namespace mc
{
    class UIControl_TexturePackList : public UIControl_List
    {
    public:
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
    };
    MC_CHECK_SIZE(UIControl_TexturePackList, 0x6C);
} // namespace mc
