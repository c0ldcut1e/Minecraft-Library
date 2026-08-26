#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "InputStream.hpp"
#include "client/resource/ArrayWithLength.hpp"

namespace mc
{
    class ByteArrayInputStream : public InputStream
    {
    public:
        ByteArrayInputStream(ArrayWithLength<uint8_t> bytes)
        {
            MLINK_FUNC(ByteArrayInputStream *, 0x0214229C, ByteArrayInputStream *, ArrayWithLength<uint8_t>)(this, bytes);
        }

        ByteArrayInputStream(ArrayWithLength<uint8_t> bytes, uint32_t offset, uint32_t size)
        {
            MLINK_FUNC(ByteArrayInputStream *, 0x021421F4, ByteArrayInputStream *, ArrayWithLength<uint8_t>, uint32_t, uint32_t)(this, bytes, offset,
                                                                                                                                 size);
        }

        ~ByteArrayInputStream()
        {
            MLINK_FUNC(void, 0x0214231C, ByteArrayInputStream *)(this);
        }

        void close()
        {
            MLINK_FUNC(void, 0x021424BC, ByteArrayInputStream *)(this);
        }

        int read()
        {
            return MLINK_FUNC(int, 0x02142398, ByteArrayInputStream *)(this);
        }

        int read(ArrayWithLength<uint8_t> bytes)
        {
            return MLINK_FUNC(int, 0x021423C8, ByteArrayInputStream *, ArrayWithLength<uint8_t>)(this, bytes);
        }

        int read(ArrayWithLength<uint8_t> bytes, uint32_t offset, uint32_t size)
        {
            return MLINK_FUNC(int, 0x02142418, ByteArrayInputStream *, ArrayWithLength<uint8_t>, uint32_t, uint32_t)(this, bytes, offset, size);
        }

        int64_t skip(int64_t byteCount)
        {
            return MLINK_FUNC(int64_t, 0x021424C0, ByteArrayInputStream *, int64_t)(this, byteCount);
        }
    };
} // namespace mc
