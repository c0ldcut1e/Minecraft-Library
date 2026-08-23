#pragma once

#include "MinecraftLib.hpp"
#include "Tag.hpp"

namespace mc
{
    class ShortTag : public Tag
    {
    public:
        short data;
    };
    MC_CHECK_SIZE(ShortTag, 0x8);
} // namespace mc
