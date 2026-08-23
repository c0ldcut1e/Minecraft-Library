#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class OutputStream
    {
    public:
        uint8_t storage[0x20];
    };
    MC_CHECK_SIZE(OutputStream, 0x20);
} // namespace mc
