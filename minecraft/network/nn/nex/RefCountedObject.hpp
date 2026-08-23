#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class RefCountedObject
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
    };
    MC_CHECK_SIZE(RefCountedObject, 0x10);
} // namespace nn::nex
