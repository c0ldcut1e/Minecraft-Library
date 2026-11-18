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

        double dist(int x, int y, int z) const
        {
            return MLINK_FUNC(double, 0x02A1EEC8, const Vec3i *, int, int, int)(this, x, y, z);
        }

        double dist(const Vec3i &other) const
        {
            return MLINK_FUNC(double, 0x02A1EF58, const Vec3i *, const Vec3i &)(this, other);
        }

        double distSqr(double x, double y, double z) const
        {
            return MLINK_FUNC(double, 0x02A1EF74, const Vec3i *, double, double, double)(this, x, y, z);
        }

        double distSqrToCenter(double x, double y, double z) const
        {
            return MLINK_FUNC(double, 0x02A1EFE4, const Vec3i *, double, double, double)(this, x, y, z);
        }

        double distSqr(const Vec3i &other) const
        {
            return MLINK_FUNC(double, 0x02A1F068, const Vec3i *, const Vec3i &)(this, other);
        }

        int x;
        int y;
        int z;
    };
    MC_CHECK_SIZE(Vec3i, 0xC);
} // namespace mc
