#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class PolarBear : public Animal
    {
    public:
        PolarBear(Level *level)
        {
            MLINK_FUNC(void, 0x0279482C, PolarBear *, Level *)(this, level);
        }

        static PolarBear *Create(Level *level)
        {
            return MLINK_FUNC(PolarBear *, 0x023E6794, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027D0370)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02794F3C, PolarBear *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0279518C, PolarBear *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x027953C8, PolarBear *)(this);
        }

        bool isStanding()
        {
            return MLINK_FUNC(bool, 0x02795458, PolarBear *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x027954D8, PolarBear *)(this);
        }

        void setStanding(bool standing)
        {
            MLINK_FUNC(void, 0x02795BB4, PolarBear *, bool)(this, standing);
        }

        float getStandingAnimationScale(float partialTick)
        {
            return MLINK_FUNC(float, 0x02795C44, PolarBear *, float)(this, partialTick);
        }

        float field_0x780;
        float field_0x784;
        uint32_t field_0x788;
        uint32_t field_0x78C;
    };
    MC_CHECK_SIZE(PolarBear, 0x790);
} // namespace mc
