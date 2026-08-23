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
        ~ByteArrayInputStream()
        {
            MLINK_FUNC(void, 0x0214231C, ByteArrayInputStream *)(this);
        }

        void close()
        {
            MLINK_FUNC(void, 0x021424BC, ByteArrayInputStream *)(this);
        }
    };
} // namespace mc
