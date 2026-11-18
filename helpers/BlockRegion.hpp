#pragma once

namespace mc::helpers
{
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
    };

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
}
