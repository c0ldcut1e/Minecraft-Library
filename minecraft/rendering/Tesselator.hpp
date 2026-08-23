#pragma once

#include "mlink/MLink.hpp"

#include "buffer/BufferBuilder.hpp"

namespace mc
{
    class Tesselator
    {
    public:
        static Tesselator *GetInstance()
        {
            return MLINK_FUNC(Tesselator *, 0x3337EF0)();
        }

        BufferBuilder *getBuilder()
        {
            return MLINK_FUNC(BufferBuilder *, 0x3337EE8, Tesselator *)(this);
        }
    };
} // namespace mc
