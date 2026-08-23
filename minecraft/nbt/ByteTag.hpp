#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Tag.hpp"

namespace mc
{
    class ByteTag : public Tag
    {
    public:
        uint8_t data;
    };
    MC_CHECK_SIZE(ByteTag, 0x8);
} // namespace mc
