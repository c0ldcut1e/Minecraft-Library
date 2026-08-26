#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mstd
{
    template<typename T>
    class deque
    {
    public:
        uint32_t field_0x0;
        T **map;
        uint32_t mapSize;
        uint32_t offset;
        uint32_t size;
    };
    MC_CHECK_SIZE(deque<void *>, 0x14);
} // namespace mstd
