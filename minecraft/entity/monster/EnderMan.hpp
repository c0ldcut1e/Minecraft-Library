#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class EnderMan : public Monster
    {
    public:
        EnderMan(Level *level)
        {
            MLINK_FUNC(void, 0x023ABAA4, EnderMan *, Level *)(this, level);
        }

        static EnderMan *Create(Level *level)
        {
            return MLINK_FUNC(EnderMan *, 0x023E657C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E6C88)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x023B5050, EnderMan *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x023B5324, EnderMan *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x023B56B4, EnderMan *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x023B67CC, EnderMan *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
    };
    MC_CHECK_SIZE(EnderMan, 0x738);
} // namespace mc
