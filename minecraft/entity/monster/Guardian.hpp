#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Guardian : public Monster
    {
    public:
        Guardian() = default;

        Guardian(Level *level, bool elder)
        {
            MLINK_FUNC(void, 0x0245AF70, Guardian *, Level *, bool)(this, level, elder);
        }

        static Guardian *Create(Level *level)
        {
            return MLINK_FUNC(Guardian *, 0x023E6654, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0246FEF8)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0245B334, Guardian *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0245B5B0, Guardian *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0245B6F8, Guardian *)(this);
        }

        void setActiveAttackTarget(int entityId)
        {
            MLINK_FUNC(void, 0x0245B790, Guardian *, int)(this, entityId);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x0245C218, Guardian *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
    };
    MC_CHECK_SIZE(Guardian, 0x758);
} // namespace mc
