#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/Fish.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Pufferfish : public Fish
    {
    public:
        Pufferfish(Level *level)
        {
            MLINK_FUNC(void, 0x028286B0, Pufferfish *, Level *)(this, level);
        }

        static Pufferfish *Create(Level *level)
        {
            return MLINK_FUNC(Pufferfish *, 0x023E6828, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02867808)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02829F70, Pufferfish *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02829FE4, Pufferfish *)(this);
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
        uint32_t field_0x780;
        uint32_t field_0x784;
    };
    MC_CHECK_SIZE(Pufferfish, 0x788);
} // namespace mc
