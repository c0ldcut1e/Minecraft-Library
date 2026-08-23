#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Tag.hpp"

namespace mc
{
    class LongTag : public Tag
    {
    public:
        uint32_t field_0x4;
        long long data;
    };
    MC_CHECK_SIZE(LongTag, 0x10);
} // namespace mc
