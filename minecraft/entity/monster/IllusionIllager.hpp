#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/SpellcasterIllager.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class IllusionIllager : public SpellcasterIllager
    {
    public:
        IllusionIllager(Level *level)
        {
            MLINK_FUNC(void, 0x025108B4, IllusionIllager *, Level *)(this, level);
        }

        static IllusionIllager *Create(Level *level)
        {
            return MLINK_FUNC(IllusionIllager *, 0x023E63D0, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252FA38)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02510BA8, IllusionIllager *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02510F64, IllusionIllager *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0251146C, IllusionIllager *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x025114B0, IllusionIllager *)(this);
        }

        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
        uint32_t field_0x758;
        uint32_t field_0x75C;
    };
    MC_CHECK_SIZE(IllusionIllager, 0x760);
} // namespace mc
