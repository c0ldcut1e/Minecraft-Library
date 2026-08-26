#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/Fish.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Salmon : public Fish
    {
    public:
        Salmon(Level *level)
        {
            MLINK_FUNC(void, 0x028534C0, Salmon *, Level *)(this, level);
        }

        static Salmon *Create(Level *level)
        {
            return MLINK_FUNC(Salmon *, 0x023E6840, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0286B6C8)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02853A10, Salmon *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02853AA0, Salmon *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02853B20, Salmon *)(this);
        }
    };
    MC_CHECK_SIZE(Salmon, 0x758);
} // namespace mc
