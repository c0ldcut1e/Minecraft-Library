#pragma once

#include <cstdint>

namespace mc::helpers
{
    // Floor division keeps negative world coordinates in the correct chunk.
    inline int chunkCoordinate(int blockCoordinate)
    {
        const int quotient  = blockCoordinate / 16;
        const int remainder = blockCoordinate % 16;
        return remainder < 0 ? quotient - 1 : quotient;
    }

    inline int localChunkCoordinate(int blockCoordinate)
    {
        const int remainder = blockCoordinate % 16;
        return remainder < 0 ? remainder + 16 : remainder;
    }

    // A 64-bit result also handles chunk coordinates outside the block int range.
    inline int64_t chunkMinBlock(int chunk)
    {
        return static_cast<int64_t>(chunk) * 16;
    }
} // namespace mc::helpers
