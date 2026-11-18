#pragma once

#include <cstdint>
#include <limits>

namespace mc::helpers
{
    // Inclusive bounds; coordinates are normalized by the constructor.
    struct BlockRegion
    {
        int minX;
        int minY;
        int minZ;
        int maxX;
        int maxY;
        int maxZ;

        BlockRegion(int x1, int y1, int z1, int x2, int y2, int z2)
            : minX(x1 < x2 ? x1 : x2), minY(y1 < y2 ? y1 : y2), minZ(z1 < z2 ? z1 : z2), maxX(x1 < x2 ? x2 : x1), maxY(y1 < y2 ? y2 : y1),
              maxZ(z1 < z2 ? z2 : z1)
        {}

        bool valid() const
        {
            return minX <= maxX && minY <= maxY && minZ <= maxZ;
        }

        bool contains(int x, int y, int z) const
        {
            return valid() && x >= minX && x <= maxX && y >= minY && y <= maxY && z >= minZ && z <= maxZ;
        }

        bool intersects(const BlockRegion &other) const
        {
            return valid() && other.valid() && minX <= other.maxX && maxX >= other.minX && minY <= other.maxY && maxY >= other.minY &&
                   minZ <= other.maxZ && maxZ >= other.minZ;
        }

        // Returns false if the number of blocks cannot fit in uint64_t.
        bool volume(uint64_t &out) const
        {
            if (!valid())
            {
                return false;
            }
            const uint64_t x     = static_cast<uint64_t>(static_cast<int64_t>(maxX) - minX) + 1;
            const uint64_t y     = static_cast<uint64_t>(static_cast<int64_t>(maxY) - minY) + 1;
            const uint64_t z     = static_cast<uint64_t>(static_cast<int64_t>(maxZ) - minZ) + 1;
            const uint64_t limit = std::numeric_limits<uint64_t>::max();
            if (x > limit / y || x * y > limit / z)
            {
                return false;
            }
            out = x * y * z;
            return true;
        }
    };

    // Return false from the callback to stop early; iteration is X, then Z, then Y.
    template<typename Callback>
    bool visitRegion(BlockRegion region, Callback callback)
    {
        if (!region.valid())
        {
            return false;
        }
        for (int y = region.minY;; ++y)
        {
            for (int z = region.minZ;; ++z)
            {
                for (int x = region.minX;; ++x)
                {
                    if (!callback(x, y, z))
                    {
                        return false;
                    }
                    if (x == region.maxX)
                    {
                        break;
                    }
                }
                if (z == region.maxZ)
                {
                    break;
                }
            }
            if (y == region.maxY)
            {
                break;
            }
        }
        return true;
    }
} // namespace mc::helpers
