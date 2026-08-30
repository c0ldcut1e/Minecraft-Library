#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::nex
{
    template<typename T>
    class qVector
    {
    public:
        uint32_t allocator;
        T *begin;
        T *end;
        T *capacity;
    };
    MC_CHECK_SIZE(qVector<uint8_t>, 0x10);
} // namespace nn::nex
