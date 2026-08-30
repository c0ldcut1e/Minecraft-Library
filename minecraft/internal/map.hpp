#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mstd
{
    template<typename Key, typename Value>
    class map
    {
    public:
        void *root;
        void *sentinel;
        uint32_t size;
    };

    using mapUInt32 = map<uint32_t, uint32_t>;
    MC_CHECK_SIZE(mapUInt32, 0xC);
} // namespace mstd
