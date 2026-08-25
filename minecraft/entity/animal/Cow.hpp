#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Cow : public Animal
    {
    public:
        Cow(Level *level, bool initialize)
        {
            MLINK_FUNC(Cow *, 0x02276048, Cow *, Level *, bool)(this, level, initialize);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02283B94)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02276134, Cow *)(this);
        }
    };
    MC_CHECK_SIZE(Cow, 0x780);
} // namespace mc
