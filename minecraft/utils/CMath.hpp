#pragma once

#include "mlink/MLink.hpp"

#include "HitResult.hpp"
#include "entity/player/Player.hpp"
#include "world/level/MultiPlayerLevel.hpp"

#define M_PI   3.14159265358979323846
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.78539816339744830962
#define M_1_PI 0.31830988618379067154
#define M_2_PI 0.63661977236758134308

inline double mc_sin(double x)
{
    return MLINK_FUNC(double, 0x03832468, double)(x);
}

inline float mc_sinf(float x)
{
    return MLINK_FUNC(float, 0x03833F6C, float)(x);
}

inline double mc_cos(double x)
{
    return MLINK_FUNC(double, 0x0383300C, double)(x);
}

inline float mc_cosf(float x)
{
    return MLINK_FUNC(float, 0x03834758, float)(x);
}

inline double mc_tan(double x)
{
    return MLINK_FUNC(double, 0x03832234, double)(x);
}

inline float mc_tanf(float x)
{
    return MLINK_FUNC(float, 0x03833D98, float)(x);
}

inline double mc_pow(double x, double y)
{
    return MLINK_FUNC(double, 0x038324A8, double, double)(x, y);
}

inline float mc_powf(float x, float y)
{
    return MLINK_FUNC(float, 0x038340D4, float, float)(x, y);
}

inline double mc_sqrt(double x)
{
    return MLINK_FUNC(double, 0x038323CC, double)(x);
}

inline float mc_sqrtf(float x)
{
    return MLINK_FUNC(float, 0x03833EE0, float)(x);
}

inline float mc_degToRad(float deg)
{
    return (deg * M_PI / 180.0F);
}

inline float mc_radToDeg(float rad)
{
    return (rad * 180.0F / M_PI);
}

inline double mc_abs(double x)
{
    return 0.0 > x ? -x : x;
}

inline float mc_fabs(float x)
{
    return 0.0F > x ? -x : x;
}

inline float mc_ceilf(float x)
{
    return MLINK_FUNC(float, 0x03833D0C, float)(x);
}

inline double mc_floor(double x)
{
    return MLINK_FUNC(double, 0x03832BAC, double)(x);
}

inline float mc_floorf(float x)
{
    return MLINK_FUNC(float, 0x03833C70, float)(x);
}

inline float mc_acosf(float x)
{
    return MLINK_FUNC(float, 0x03834A98, float)(x);
}

namespace mc
{
    inline Vec3 getLookAt(float pitch, float yaw)
    {
        const Vec3 lookAt = {
                mc_fabs(mc_sinf(mc_degToRad(pitch - 90.0F))) * mc_sinf(mc_degToRad(yaw - 180.0F)),
                mc_sinf(mc_degToRad(pitch - 180.0F)),
                mc_fabs(mc_sinf(mc_degToRad(pitch - 90.0F))) * mc_cosf(mc_degToRad(yaw)),
        };

        return lookAt;
    }

    inline HitResult *getLookAtRay(Player *player, bool ignoreBlockWithoutBoundingBox, double reach)
    {
        if (player == nullptr)
        {
            return nullptr;
        }

        mc::MultiPlayerLevel *lvl = player->multiPlayerLevel;
        if (lvl == nullptr)
        {
            return nullptr;
        }

        Vec3 start = player->pos;
        start.y += player->getEyeHeight();

        const Vec3 lookAt = getLookAt(player->xRot, player->yRot).normalize();
        const Vec3 end    = start + lookAt * reach;

        return lvl->clip(start, end, false, ignoreBlockWithoutBoundingBox, false, false, nullptr, false);
    }
} // namespace mc

namespace mc
{
} // namespace mc
