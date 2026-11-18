#pragma once

#include <cstdint>

#include "helpers/BlockRegion.hpp"

namespace mc::helpers
{
    // Caller-owned cursor for spreading an inclusive region traversal across ticks.
    struct RegionCursor
    {
        BlockRegion bounds;
        int x;
        int y;
        int z;
        bool done;

        explicit RegionCursor(const BlockRegion &region) : bounds(region), x(region.minX), y(region.minY), z(region.minZ), done(!region.valid())
        {}

        bool current(int &outX, int &outY, int &outZ) const
        {
            if (done || !bounds.valid() || !bounds.contains(x, y, z))
            {
                return false;
            }
            outX = x;
            outY = y;
            outZ = z;
            return true;
        }

        bool advance()
        {
            if (done || !bounds.valid() || !bounds.contains(x, y, z))
            {
                done = true;
                return false;
            }
            if (x < bounds.maxX)
            {
                ++x;
            }
            else if (z < bounds.maxZ)
            {
                x = bounds.minX;
                ++z;
            }
            else if (y < bounds.maxY)
            {
                x = bounds.minX;
                z = bounds.minZ;
                ++y;
            }
            else
            {
                done = true;
            }
            return !done;
        }
    };
} // namespace mc::helpers
