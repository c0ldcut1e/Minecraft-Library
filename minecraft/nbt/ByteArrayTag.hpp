#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "client/resource/ArrayWithLength.hpp"

namespace mc
{
    class ByteArrayTag : public Tag
    {
    public:
        ArrayWithLength<uint8_t> array;
    };
    MC_CHECK_SIZE(ByteArrayTag, 0xC);
} // namespace mc
