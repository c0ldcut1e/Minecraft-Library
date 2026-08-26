#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "OutputStream.hpp"
#include "client/resource/ArrayWithLength.hpp"

namespace mc
{
    class ByteArrayOutputStream : public OutputStream
    {
    public:
        ByteArrayOutputStream()
        {
            MLINK_FUNC(ByteArrayOutputStream *, 0x02142804, ByteArrayOutputStream *)(this);
        }

        ByteArrayOutputStream(uint32_t size)
        {
            MLINK_FUNC(ByteArrayOutputStream *, 0x021428CC, ByteArrayOutputStream *, uint32_t)(this, size);
        }

        ~ByteArrayOutputStream()
        {
            MLINK_FUNC(void, 0x021429C4, ByteArrayOutputStream *)(this);
        }

        void close()
        {
            MLINK_FUNC(void, 0x02142BF8, ByteArrayOutputStream *)(this);
        }

        void flush()
        {
            MLINK_FUNC(void, 0x021A4764, ByteArrayOutputStream *)(this);
        }

        ArrayWithLength<uint8_t> toByteArray()
        {
            return MLINK_FUNC(ArrayWithLength<uint8_t>, 0x02142BFC, ByteArrayOutputStream *)(this);
        }

        void write(uint32_t value)
        {
            MLINK_FUNC(void, 0x02142A38, ByteArrayOutputStream *, uint32_t)(this, value);
        }

        void write(ArrayWithLength<uint8_t> bytes)
        {
            MLINK_FUNC(void, 0x02142AD0, ByteArrayOutputStream *, ArrayWithLength<uint8_t>)(this, bytes);
        }

        void write(ArrayWithLength<uint8_t> bytes, uint32_t offset, uint32_t size)
        {
            MLINK_FUNC(void, 0x02142B1C, ByteArrayOutputStream *, ArrayWithLength<uint8_t>, uint32_t, uint32_t)(this, bytes, offset, size);
        }
    };
} // namespace mc
