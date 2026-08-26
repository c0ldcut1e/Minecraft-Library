#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Phantom : public Monster
    {
    public:
        Phantom(Level *level)
        {
            MLINK_FUNC(void, 0x0278CF38, Phantom *, Level *)(this, level);
        }

        static Phantom *Create(Level *level)
        {
            return MLINK_FUNC(Phantom *, 0x023E6888, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CFBF8)();
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0278D05C, Phantom *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x0278D8D0, Phantom *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0278DA08, Phantom *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0278DBF4, Phantom *)(this);
        }
    };
    MC_CHECK_SIZE(Phantom, 0x730);
} // namespace mc
