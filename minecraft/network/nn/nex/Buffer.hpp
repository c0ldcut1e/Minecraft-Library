#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "RefCountedObject.hpp"
#include "String.hpp"

namespace nn::nex
{
    class Buffer : public RefCountedObject
    {
    public:
        Buffer()
        {
            MLINK_FUNC(void, 0x03804E98, Buffer *)(this);
        }

        Buffer(const Buffer &other)
        {
            MLINK_FUNC(void, 0x03710458, Buffer *, const Buffer *)(this, &other);
        }

        Buffer(const String &text)
        {
            MLINK_FUNC(void, 0x0371E894, Buffer *, const String *)(this, &text);
        }

        ~Buffer()
        {
            MLINK_FUNC(void, 0x0371E960, Buffer *, uint32_t)(this, 2);
        }

        static uint32_t GetDefaultBufferSize()
        {
            return MLINK_FUNC(uint32_t, 0x0378CA0C)();
        }

        void Initialize(uint32_t size, uint8_t flags)
        {
            MLINK_FUNC(void, 0x03705B8C, Buffer *, uint32_t, uint8_t)(this, size, flags);
        }

        uint8_t *data;
        uint32_t dataSize;
        uint32_t capacity;
        uint32_t headShiftSize;
        uint8_t flags;
        uint8_t field_0x21;
        uint8_t field_0x22;
        uint8_t field_0x23;
    };
    MC_CHECK_SIZE(Buffer, 0x24);
} // namespace nn::nex
