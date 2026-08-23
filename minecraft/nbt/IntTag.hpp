#pragma once

#include "MinecraftLib.hpp"
#include "Tag.hpp"

namespace mc
{
    class IntTag : public Tag
    {
    public:
        int data;
    };
    MC_CHECK_SIZE(IntTag, 0x8);
} // namespace mc
