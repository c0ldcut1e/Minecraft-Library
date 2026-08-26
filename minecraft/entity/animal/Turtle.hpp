#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Turtle : public Animal
    {
    public:
        Turtle(Level *level)
        {
            MLINK_FUNC(void, 0x02A31108, Turtle *, Level *)(this, level);
        }

        static Turtle *Create(Level *level)
        {
            return MLINK_FUNC(Turtle *, 0x023E6858, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACF0A8)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A57DDC, Turtle *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A580F0, Turtle *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A58280, Turtle *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A58650, Turtle *)(this);
        }

        uint32_t field_0x780;
        uint32_t field_0x784;
    };
    MC_CHECK_SIZE(Turtle, 0x788);
} // namespace mc
