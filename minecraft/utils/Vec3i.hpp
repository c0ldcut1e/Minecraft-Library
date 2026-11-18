#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class Vec3i
    {
    public:
        Vec3i(double x, double y, double z)
        {
            MLINK_FUNC(void, 0x02A1EC10, Vec3i *, double, double, double)(this, x, y, z);
        }

        double distSqr(double x, double y, double z) const
        {
            return MLINK_FUNC(double, 0x02A1EF74, const Vec3i *, double, double, double)(this, x, y, z);
        }

        double distSqrToCenter(double x, double y, double z) const
        {
            return MLINK_FUNC(double, 0x02A1EFE4, const Vec3i *, double, double, double)(this, x, y, z);
        }

        int x;
        int y;
        int z;
    };
    MC_CHECK_SIZE(Vec3i, 0xC);
} // namespace mc
