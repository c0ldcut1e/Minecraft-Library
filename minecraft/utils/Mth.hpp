#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MCRandom.hpp"

namespace mc
{
    class Mth
    {
    public:
        static int abs(int value)
        {
            return MLINK_FUNC(int, 0x02622EA8, int)(value);
        }

        static float abs(float value)
        {
            return MLINK_FUNC(float, 0x02623450, float)(value);
        }

        static double abs(double value)
        {
            return MLINK_FUNC(double, 0x02623458, double)(value);
        }

        static bool almostEquals(double first, double second, double maxDifference)
        {
            return MLINK_FUNC(uint32_t, 0x0262415C, double, double, double)(first, second, maxDifference) != 0;
        }

        static float approach(float value, float target, float step)
        {
            return MLINK_FUNC(float, 0x02623F90, float, float, float)(value, target, step);
        }

        static float approachDegrees(float value, float target, float step)
        {
            return MLINK_FUNC(float, 0x0262405C, float, float, float)(value, target, step);
        }

        static double asbMax(double first, double second)
        {
            return MLINK_FUNC(double, 0x0262351C, double, double)(first, second);
        }

        static double atan2(int y, int x)
        {
            return MLINK_FUNC(double, 0x026230E0, int, int)(y, x);
        }

        static double cached_atan(int y, int x)
        {
            return MLINK_FUNC(double, 0x02622EB8, int, int)(y, x);
        }

        static int cached_atan_index(int y, int x)
        {
            return MLINK_FUNC(int, 0x026227B4, int, int)(y, x);
        }

        static double ceil(double value, double step)
        {
            return MLINK_FUNC(double, 0x02623ED4, double, double)(value, step);
        }

        static int ceillog2(int value)
        {
            return MLINK_FUNC(int, 0x02623CE8, int)(value);
        }

        static int clamp(int value, int min, int max)
        {
            return MLINK_FUNC(int, 0x02623460, int, int, int)(value, min, max);
        }

        static float clamp(float value, float min, float max)
        {
            return MLINK_FUNC(float, 0x02623484, float, float, float)(value, min, max);
        }

        static double clamp(double value, double min, double max)
        {
            return MLINK_FUNC(double, 0x026234A0, double, double, double)(value, min, max);
        }

        static double clampedLerp(double from, double to, double delta)
        {
            return MLINK_FUNC(double, 0x026234E8, double, double, double)(from, to, delta);
        }

        static float clampRotateDegrees(float from, float to, float maxDifference)
        {
            return MLINK_FUNC(float, 0x02623938, float, float, float)(from, to, maxDifference);
        }

        static float cos(float value)
        {
            return MLINK_FUNC(float, 0x02623050, float)(value);
        }

        static int countTrailingZeros(int value)
        {
            return MLINK_FUNC(int, 0x026237E0, int)(value);
        }

        static float degreesDifference(float first, float second)
        {
            return MLINK_FUNC(float, 0x02623F44, float, float)(first, second);
        }

        static float degreesDifferenceAbs(float first, float second)
        {
            return MLINK_FUNC(float, 0x026240E0, float, float)(first, second);
        }

        static bool equal(float first, float second)
        {
            return MLINK_FUNC(uint32_t, 0x026236A8, float, float)(first, second) != 0;
        }

        static int fastFloor(double value)
        {
            return MLINK_FUNC(int, 0x02623424, double)(value);
        }

        static double fastInvSqrt(double value)
        {
            return MLINK_FUNC(double, 0x026232D0, double)(value);
        }

        static double frac(double value)
        {
            return MLINK_FUNC(double, 0x02623DF8, double)(value);
        }

        static int64_t getSeed(int x, int y, int z)
        {
            return MLINK_FUNC(int64_t, 0x02623E64, int, int, int)(x, y, z);
        }

        static uint32_t hsvToRgb(float hue, float saturation, float value)
        {
            return MLINK_FUNC(uint32_t, 0x02624178, float, float, float)(hue, saturation, value);
        }

        static void init()
        {
            MLINK_FUNC(void, 0x026227C0)();
        }

        static int intFloorDiv(int value, int divisor)
        {
            return MLINK_FUNC(int, 0x02623548, int, int)(value, divisor);
        }

        static bool isPowerOfTwo(int value)
        {
            return MLINK_FUNC(uint32_t, 0x02623CC4, int)(value) != 0;
        }

        static float Lerp(float from, float to, float delta)
        {
            return MLINK_FUNC(float, 0x026234B8, float, float, float)(from, to, delta);
        }

        static double Lerp(double from, double to, double delta)
        {
            return MLINK_FUNC(double, 0x026234D0, double, double, double)(from, to, delta);
        }

        static float lerp(float delta, float from, float to)
        {
            return Lerp(from, to, delta);
        }

        static double lerp(double delta, double from, double to)
        {
            return Lerp(from, to, delta);
        }

        static float lerpRotateDegrees(float from, float to, float delta)
        {
            return MLINK_FUNC(float, 0x026239EC, float, float, float)(from, to, delta);
        }

        static int log2(int value)
        {
            return MLINK_FUNC(int, 0x02623D5C, int)(value);
        }

        static double nextDouble(MCRandom *random, double min, double max)
        {
            return MLINK_FUNC(double, 0x02623634, MCRandom *, double, double)(random, min, max);
        }

        static float nextFloat(MCRandom *random, float min, float max)
        {
            return MLINK_FUNC(float, 0x026235C0, MCRandom *, float, float)(random, min, max);
        }

        static int nextInt(MCRandom *random, int min, int max)
        {
            return MLINK_FUNC(int, 0x02623570, MCRandom *, int, int)(random, min, max);
        }

        static double pct(double value, double min, double max)
        {
            return MLINK_FUNC(double, 0x02623CB4, double, double, double)(value, min, max);
        }

        static float positiveModulo(float value, float divisor)
        {
            return MLINK_FUNC(float, 0x026236EC, float, float)(value, divisor);
        }

        static double positiveModulo(double value, double divisor)
        {
            return MLINK_FUNC(double, 0x0262374C, double, double)(value, divisor);
        }

        static int roundUp(int value, int multiple)
        {
            return MLINK_FUNC(int, 0x02623DBC, int, int)(value, multiple);
        }

        static float sin(float value)
        {
            return MLINK_FUNC(float, 0x02622FC8, float)(value);
        }

        static int smallestEncompassingPowerOfTwo(int value)
        {
            return MLINK_FUNC(int, 0x026237AC, int)(value);
        }

        static float sqrt(float value)
        {
            return MLINK_FUNC(float, 0x02623338, float)(value);
        }

        static double sqrt(double value)
        {
            return MLINK_FUNC(double, 0x02623348, double)(value);
        }

        static float subtractFromLarger(float first, float second)
        {
            return MLINK_FUNC(float, 0x02623F30, float, float)(first, second);
        }

        static float wrapDegrees(float degrees)
        {
            return MLINK_FUNC(float, 0x02623808, float)(degrees);
        }

        static double wrapDegrees(double degrees)
        {
            return MLINK_FUNC(double, 0x02623880, double)(degrees);
        }

        static int wrapDegrees(int degrees)
        {
            return MLINK_FUNC(int, 0x026238F8, int)(degrees);
        }

        // The game returns a 64-bit value here, truncating it to an int loses the result.
        static int64_t lfloor(double value)
        {
            return MLINK_FUNC(int64_t, 0x02623378, double)(value);
        }
    };
} // namespace mc
