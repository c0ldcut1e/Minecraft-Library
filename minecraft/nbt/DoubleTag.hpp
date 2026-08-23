#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Tag.hpp"

namespace mc
{
    class DoubleTag : public Tag
    {
    public:
        uint32_t field_0x4;
        double data;
    };
    MC_CHECK_SIZE(DoubleTag, 0x10);
} // namespace mc
