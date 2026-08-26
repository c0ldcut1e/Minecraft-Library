#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Chicken : public Animal
    {
    public:
        Chicken(Level *level)
        {
            MLINK_FUNC(Chicken *, 0x021BA8F4, Chicken *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x022057C8)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x021BA9E8, Chicken *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x021BAD70, Chicken *)(this);
        }

        float flap;
        float flapSpeed;
        float oldFlapSpeed;
        float oldFlap;
        float flapping;
        int eggTime;
    };
    MC_CHECK_SIZE(Chicken, 0x798);
} // namespace mc
