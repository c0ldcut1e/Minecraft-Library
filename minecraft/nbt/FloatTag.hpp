#pragma once

#include "MinecraftLib.hpp"
#include "Tag.hpp"

namespace mc
{
    class FloatTag : public Tag
    {
    public:
        float data;
    };
    MC_CHECK_SIZE(FloatTag, 0x8);
} // namespace mc
