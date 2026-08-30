#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Cow : public Animal
    {
    public:
        Cow(Level *level, bool initialize)
        {
            MLINK_FUNC(void, 0x02276048, Cow *, Level *, bool)(this, level, initialize);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02283B94)();
        }

        static Cow *Create(Level *level)
        {
            return MLINK_FUNC(Cow *, 0x023E66A0, Level *)(level);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02276134, Cow *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02276400, Cow *)(this);
        }

        float getSoundVolume()
        {
            return MLINK_FUNC(float, 0x022764EC, Cow *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02277818, Cow *)(this);
        }

        Cow() = default;
    };
    MC_CHECK_SIZE(Cow, 0x780);
} // namespace mc
