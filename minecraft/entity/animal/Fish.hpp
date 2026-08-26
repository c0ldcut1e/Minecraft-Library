#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/WaterAnimal.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Fish : public WaterAnimal
    {
    public:
        Fish() = default;

        Fish(Level *level, bool runDerivedConstructorCalls)
        {
            MLINK_FUNC(void, 0x023ABD18, Fish *, Level *, bool)(this, level, runDerivedConstructorCalls);
        }

        static Fish *Create(Level *level)
        {
            return MLINK_FUNC(Fish *, 0x023E680C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E79DC)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x023CD498, Fish *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x023CD5D8, Fish *)(this);
        }

        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
    };
    MC_CHECK_SIZE(Fish, 0x758);
} // namespace mc
