#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class MCRandom
    {
    public:
        MCRandom()
        {
            MLINK_FUNC(void, 0x027DCA84, MCRandom *)(this);
        }

        MCRandom(int64_t seed)
        {
            MLINK_FUNC(void, 0x027DCB28, MCRandom *, int64_t)(this, seed);
        }

        uint32_t next(int bits)
        {
            return MLINK_FUNC(uint32_t, 0x027DAE78, MCRandom *, int)(this, bits);
        }

        float nextFloat()
        {
            return MLINK_FUNC(float, 0x027DAEE0, MCRandom *)(this);
        }

        int nextInt(int bound)
        {
            return MLINK_FUNC(int, 0x027DAFE0, MCRandom *, int)(this, bound);
        }

        bool nextBoolean()
        {
            return MLINK_FUNC(bool, 0x027DB0C0, MCRandom *)(this);
        }

        void setSeed(int64_t seed)
        {
            MLINK_FUNC(void, 0x027DCA58, MCRandom *, int64_t)(this, seed);
        }

        double nextDouble()
        {
            return MLINK_FUNC(double, 0x027E05C8, MCRandom *)(this);
        }

        double nextGaussian()
        {
            return MLINK_FUNC(double, 0x027E0664, MCRandom *)(this);
        }

        float nextGaussianFloat()
        {
            return MLINK_FUNC(float, 0x027E07F4, MCRandom *)(this);
        }

        int nextGaussianInt(int bound)
        {
            return MLINK_FUNC(int, 0x027E0860, MCRandom *, int)(this, bound);
        }

        int nextInt()
        {
            return MLINK_FUNC(int, 0x027E08CC, MCRandom *)(this);
        }

        int nextInt(int minimum, int maximum)
        {
            return MLINK_FUNC(int, 0x027E08E0, MCRandom *, int, int)(this, minimum, maximum);
        }

        float nextFloat(float maximum)
        {
            return MLINK_FUNC(float, 0x027E092C, MCRandom *, float)(this, maximum);
        }

        float nextFloat(float minimum, float maximum)
        {
            return MLINK_FUNC(float, 0x027E0978, MCRandom *, float, float)(this, minimum, maximum);
        }

        int64_t nextLong()
        {
            return MLINK_FUNC(int64_t, 0x027E09E0, MCRandom *)(this);
        }

        bool rollPercentageChance(int chance)
        {
            return MLINK_FUNC(bool, 0x027E0A4C, MCRandom *, int)(this, chance);
        }

        uint32_t seedHigh;
        uint32_t seedLow;
        bool hasNextGaussian;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t field_0xB;
        uint8_t field_0xC;
        uint8_t field_0xD;
        uint8_t field_0xE;
        uint8_t field_0xF;
        double nextGaussianValue;
    };
    MC_CHECK_SIZE(MCRandom, 0x18);
} // namespace mc
