#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/Result.hpp"

namespace nn::pia::common
{
    class ZlibCompressor
    {
    public:
        ZlibCompressor()
        {
            MLINK_FUNC(void, 0x0383BD38, ZlibCompressor *)(this);
        }

        ~ZlibCompressor()
        {
            MLINK_FUNC(void, 0x0383BD84, ZlibCompressor *)(this);
        }

        void Cleanup()
        {
            MLINK_FUNC(void, 0x0383C20C, ZlibCompressor *)(this);
        }

        Result Deflate(const uint8_t *input, uint32_t inputSize)
        {
            Result result;
            MLINK_FUNC(void, 0x0383C244, ZlibCompressor *, Result *, const uint8_t *, uint32_t)(this, &result, input, inputSize);
            return result;
        }

        void Finalize()
        {
            MLINK_FUNC(void, 0x0383BEF4, ZlibCompressor *)(this);
        }

        Result FinishDeflate(uint32_t *compressedSize)
        {
            Result result;
            MLINK_FUNC(void, 0x0383C468, ZlibCompressor *, Result *, uint32_t *)(this, &result, compressedSize);
            return result;
        }

        Result Initialize(void *workBuffer, uint32_t workBufferSize)
        {
            Result result;
            MLINK_FUNC(void, 0x0383BDA8, ZlibCompressor *, Result *, void *, uint32_t)(this, &result, workBuffer, workBufferSize);
            return result;
        }

        [[nodiscard]] bool IsInitialized() const
        {
            return MLINK_FUNC(bool, 0x0383BD98, const ZlibCompressor *)(this);
        }

        static void *myAlloc(void *opaque, uint32_t itemCount, uint32_t itemSize)
        {
            return MLINK_FUNC(void *, 0x0383BF04, void *, uint32_t, uint32_t)(opaque, itemCount, itemSize);
        }

        static void myFree(void *opaque, void *address)
        {
            MLINK_FUNC(void, 0x0383BF50, void *, void *)(opaque, address);
        }

        Result Startup(uint8_t *output, uint32_t outputSize, int compressionLevel, int windowBits, int memoryLevel)
        {
            Result result;
            MLINK_FUNC(void, 0x0383BF68, ZlibCompressor *, Result *, uint8_t *, uint32_t, int, int, int)(this, &result, output, outputSize,
                                                                                                         compressionLevel, windowBits, memoryLevel);
            return result;
        }

        void *workBuffer;
        uint32_t workBufferSize;
        uint32_t allocationDepth;
        uint32_t allocationOffset;
        uint32_t field_0x10;
        const uint8_t *nextInput;
        uint32_t availableInput;
        uint32_t totalInput;
        uint8_t *nextOutput;
        uint32_t availableOutput;
        uint32_t totalOutput;
        char *message;
        void *state;
        void *(*allocationFunction)(void *, uint32_t, uint32_t);
        void (*freeFunction)(void *, void *);
        void *allocationContext;
    };
    MC_CHECK_SIZE(ZlibCompressor, 0x40);
} // namespace nn::pia::common
