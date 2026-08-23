#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

namespace mc
{
    class Compression
    {
    public:
        static Compression *getCompression()
        {
            return MLINK_FUNC(Compression *, 0x033E4444)();
        }

        static void UseDefaultThreadStorage()
        {
            MLINK_FUNC(void, 0x033E42A4)();
        }

        int compress(void *output, uint32_t *outputSize, void *input, uint32_t inputSize)
        {
            return MLINK_FUNC(int, 0x033E46BC, Compression *, void *, uint32_t *, void *, uint32_t)(this, output, outputSize, input, inputSize);
        }

        int compressLZXRLE(void *output, uint32_t *outputSize, void *input, uint32_t inputSize, uint32_t *temporarySize)
        {
            return MLINK_FUNC(int, 0x033E48D0, Compression *, void *, uint32_t *, void *, uint32_t, uint32_t *)(this, output, outputSize, input,
                                                                                                                inputSize, temporarySize);
        }
    };
} // namespace mc
