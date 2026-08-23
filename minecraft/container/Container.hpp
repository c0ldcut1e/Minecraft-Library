#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class Container
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
    };
    MC_CHECK_SIZE(Container, 0xC);
} // namespace mc
