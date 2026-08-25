#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/Zombie.hpp"
#include "world/Level.hpp"

namespace mc
{
    class PigZombie : public Zombie
    {
    public:
        PigZombie(Level *level)
        {
            MLINK_FUNC(void, 0x0275BD4C, PigZombie *, Level *)(this, level);
        }

        static PigZombie *Create(Level *level)
        {
            return MLINK_FUNC(PigZombie *, 0x023E6564, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CE940)();
        }

        void addBehaviourGoals()
        {
            MLINK_FUNC(void, 0x02762DF4, PigZombie *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02762E54, PigZombie *)(this);
        }

        bool isAngry()
        {
            return MLINK_FUNC(bool, 0x02762F28, PigZombie *)(this);
        }

        void customServerAiStep()
        {
            MLINK_FUNC(void, 0x02762F3C, PigZombie *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x0276314C, PigZombie *)(this);
        }

        int angerTime;
        int soundDelay;
    };
    MC_CHECK_SIZE(PigZombie, 0x758);
} // namespace mc
