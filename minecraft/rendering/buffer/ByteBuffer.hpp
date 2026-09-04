#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "client/resource/ArrayWithLength.hpp"

namespace mc
{
    class ByteBuffer
    {
    public:
        ByteBuffer(uint32_t size)
        {
            MLINK_FUNC(void, 0x02191910, ByteBuffer *, uint32_t)(this, size);
        }

        ~ByteBuffer()
        {
            MLINK_FUNC(void, 0x021919E8, ByteBuffer *, uint32_t)(this, 0);
        }

        static ByteBuffer *allocateDirect(int size)
        {
            return MLINK_FUNC(ByteBuffer *, 0x021919D0, int)(size);
        }

        static ByteBuffer *allocate(uint32_t size)
        {
            return MLINK_FUNC(ByteBuffer *, 0x02191A68, uint32_t)(size);
        }

        void flip()
        {
            MLINK_FUNC(void, 0x02191A80, ByteBuffer *)(this);
        }

        void *getBuffer()
        {
            return MLINK_FUNC(void *, 0x02191A94, ByteBuffer *)(this);
        }

        int getInt(uint32_t index)
        {
            return MLINK_FUNC(int, 0x02191A9C, ByteBuffer *, uint32_t)(this, index);
        }

        void putInt(uint32_t index, int value)
        {
            MLINK_FUNC(void, 0x02191B04, ByteBuffer *, uint32_t, int)(this, index, value);
        }

        void put(const ArrayWithLength<uint8_t> &array)
        {
            MLINK_FUNC(void, 0x02191B90, ByteBuffer *, const ArrayWithLength<uint8_t> &)(this, array);
        }
    };
} // namespace mc
