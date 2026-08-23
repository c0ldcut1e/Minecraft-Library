#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mc
{
    class InputStream
    {
    public:
        uint8_t storage[0x20];
    };
    MC_CHECK_SIZE(InputStream, 0x20);
} // namespace mc
