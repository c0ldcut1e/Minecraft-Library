#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::pia::inet
{
    class ParamVariant
    {
    public:
        uint32_t type;
        uint32_t value;
        uint32_t field_0x8;
        uint32_t field_0xC;
    };
    MC_CHECK_SIZE(ParamVariant, 0x10);
} // namespace nn::pia::inet
