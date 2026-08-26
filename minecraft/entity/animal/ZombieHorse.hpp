#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractHorse.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ZombieHorse : public AbstractHorse
    {
    public:
        ZombieHorse(Level *level)
        {
            MLINK_FUNC(void, 0x02A4CD60, ZombieHorse *, Level *)(this, level);
        }

        static ZombieHorse *Create(Level *level)
        {
            return MLINK_FUNC(ZombieHorse *, 0x023E6310, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE844)();
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A4CE3C, ZombieHorse *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A4CF2C, ZombieHorse *)(this);
        }
    };
    MC_CHECK_SIZE(ZombieHorse, 0x7F0);
} // namespace mc
