#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Vec3.hpp"

namespace mc
{
    class AABB
    {
    public:
        AABB(double minX, double minY, double minZ, double maxX, double maxY, double maxZ)
        {
            MLINK_FUNC(void, 0x0200C920, AABB *, double, double, double, double, double, double)(this, minX, minY, minZ, maxX, maxY, maxZ);
        }

        AABB(const AABB &aabb)
        {
            MLINK_FUNC(void, 0x02CA58A8, AABB *, const AABB &)(this, aabb);
        }

        AABB(int minX, int minY, int minZ, int maxX, int maxY, int maxZ)
        {
            MLINK_FUNC(void, 0x0200C920, AABB *, float, float, float, float, float, float)(this, MLink::ToFloat(minX), MLink::ToFloat(minY),
                                                                                           MLink::ToFloat(minZ), MLink::ToFloat(maxX),
                                                                                           MLink::ToFloat(maxY), MLink::ToFloat(maxZ));
        }

        AABB(Vec3 _min, Vec3 _max)
        {
            MLINK_FUNC(void, 0x0200C920, AABB *, double, double, double, double, double, double)(this, _min.x, _min.y, _min.z, _max.x, _max.y,
                                                                                                 _max.z);
        }

        AABB()
        {
            min = Vec3(0.0);
            max = Vec3(0.0);
        }

        static void CreateNewThreadStorage()
        {
            MLINK_FUNC(void, 0x0200C76C)();
        }

        AABB move(double x, double y, double z)
        {
            return MLINK_FUNC(AABB, 0x0200D260, AABB *, double, double, double)(this, x, y, z);
        }

        void set(const AABB *aabb)
        {
            MLINK_FUNC(void, 0x0200CF7C, AABB *, const AABB *)(this, aabb);
        }

        Vec3 min;
        Vec3 max;
    };
    MC_CHECK_SIZE(AABB, 0x30);
} // namespace mc
