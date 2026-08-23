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
    };
} // namespace mc
