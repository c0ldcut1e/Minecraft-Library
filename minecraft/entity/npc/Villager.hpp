#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/AgableMob.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Villager : public AgableMob
    {
    public:
        Villager(Level *level)
        {
            MLINK_FUNC(void, 0x02A4B90C, Villager *, Level *)(this, level);
        }

        static Villager *Create(Level *level)
        {
            return MLINK_FUNC(Villager *, 0x023E68A0, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACF760)();
        }

        int getProfession()
        {
            return MLINK_FUNC(int, 0x02A1BCB8, Villager *)(this);
        }

        int getCareer()
        {
            return MLINK_FUNC(int, 0x02A1BD60, Villager *)(this);
        }

        void setProfession(int profession)
        {
            MLINK_FUNC(void, 0x02A4B554, Villager *, int)(this, profession);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A76018, Villager *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A76084, Villager *)(this);
        }

        bool isTrading()
        {
            return MLINK_FUNC(bool, 0x02A765BC, Villager *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A788F0, Villager *)(this);
        }

        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
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
        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint32_t field_0x790;
        uint32_t field_0x794;
        uint32_t field_0x798;
        uint32_t field_0x79C;
    };
    MC_CHECK_SIZE(Villager, 0x7A0);
} // namespace mc
