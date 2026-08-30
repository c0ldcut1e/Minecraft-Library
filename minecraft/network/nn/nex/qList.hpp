#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::nex
{
    template<typename T>
    class qList
    {
    public:
        void *root;
        void *sentinel;
        uint32_t size;
    };
    MC_CHECK_SIZE(qList<uint32_t>, 0xC);
} // namespace nn::nex
