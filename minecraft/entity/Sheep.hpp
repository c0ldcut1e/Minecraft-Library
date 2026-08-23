#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Animal.hpp"
#include "MinecraftLib.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Sheep : public Animal
    {
    public:
        Sheep(Level *level)
        {
            MLINK_FUNC(void, 0x0287F8B8, Sheep *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x028CE45C)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x028802C0, Sheep *)(this);
        }

        uint32_t field_0x780;
        uint32_t field_0x784;
        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint32_t field_0x790;
        uint32_t field_0x794;
    };
    MC_CHECK_SIZE(Sheep, 0x798);
} // namespace mc
