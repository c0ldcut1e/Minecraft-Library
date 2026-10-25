#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::pia::common
{
    class Crypto
    {
    public:
        struct Setting
        {
            uint32_t mode;
            const uint8_t *nonce;
            uint32_t nonceSize;
            const uint8_t *key;
            uint32_t keySize;
        };
    };
} // namespace nn::pia::common
