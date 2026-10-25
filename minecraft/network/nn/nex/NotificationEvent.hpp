#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class NotificationEvent
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t type;
        uint32_t param1;
        uint32_t param2;
    };
} // namespace nn::nex
