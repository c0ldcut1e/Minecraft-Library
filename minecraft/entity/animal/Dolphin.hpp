#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/WaterAnimal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Dolphin : public WaterAnimal
    {
    public:
        Dolphin(Level *level)
        {
            MLINK_FUNC(void, 0x022D27C4, Dolphin *, Level *)(this, level);
        }

        static Dolphin *Create(Level *level)
        {
            return MLINK_FUNC(Dolphin *, 0x023E6400, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02305870)();
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x022D2A88, Dolphin *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x022D2CD0, Dolphin *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x022D4CE0, Dolphin *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x022D5158, Dolphin *)(this);
        }

        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
    };
    MC_CHECK_SIZE(Dolphin, 0x758);
} // namespace mc
