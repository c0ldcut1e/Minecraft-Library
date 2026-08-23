#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class GuiMessage
    {
    public:
        mstd::basic_string<wchar_t> text;
        uint32_t field_0x20;
    };
    MC_CHECK_SIZE(GuiMessage, 0x24);
} // namespace mc
