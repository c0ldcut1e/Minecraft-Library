#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/Fish.hpp"
#include "world/Level.hpp"

namespace mc
{
    class TropicalFish : public Fish
    {
    public:
        TropicalFish(Level *level)
        {
            MLINK_FUNC(void, 0x02A55674, TropicalFish *, Level *)(this, level);
        }

        static TropicalFish *Create(Level *level)
        {
            return MLINK_FUNC(TropicalFish *, 0x023E67F4, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACEFE4)();
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A5591C, TropicalFish *)(this);
        }

        int getVariant()
        {
            return MLINK_FUNC(int, 0x02A55C18, TropicalFish *)(this);
        }

        void setVariant(int variant)
        {
            MLINK_FUNC(void, 0x02A55DB0, TropicalFish *, int)(this, variant);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A56620, TropicalFish *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A56724, TropicalFish *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A567C4, TropicalFish *)(this);
        }

        uint32_t field_0x758;
        uint32_t field_0x75C;
        uint32_t field_0x760;
        uint32_t field_0x764;
        uint32_t field_0x768;
        uint32_t field_0x76C;
        uint32_t field_0x770;
        uint32_t field_0x774;
        uint32_t field_0x778;
        uint32_t field_0x77C;
    };
    MC_CHECK_SIZE(TropicalFish, 0x780);
} // namespace mc
