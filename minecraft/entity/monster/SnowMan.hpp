#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class SnowMan : public Monster
    {
    public:
        SnowMan(Level *level)
        {
            MLINK_FUNC(void, 0x02951478, SnowMan *, Level *)(this, level);
        }

        static SnowMan *Create(Level *level)
        {
            return MLINK_FUNC(SnowMan *, 0x023E671C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297DAD0)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02951560, SnowMan *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02951708, SnowMan *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x029517A8, SnowMan *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02951C34, SnowMan *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
    };
    MC_CHECK_SIZE(SnowMan, 0x738);
} // namespace mc
