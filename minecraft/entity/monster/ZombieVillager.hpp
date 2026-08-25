#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/Zombie.hpp"
#include "world/Level.hpp"

namespace mc
{
    class ZombieVillager : public Zombie
    {
    public:
        ZombieVillager(Level *level)
        {
            MLINK_FUNC(void, 0x02A3E070, ZombieVillager *, Level *)(this, level);
        }

        static ZombieVillager *Create(Level *level)
        {
            return MLINK_FUNC(ZombieVillager *, 0x023E62E0, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE834)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A49C4C, ZombieVillager *)(this);
        }

        void setProfession(int profession)
        {
            MLINK_FUNC(void, 0x02A3E1B0, ZombieVillager *, int)(this, profession);
        }

        int getProfession()
        {
            return MLINK_FUNC(int, 0x02A49D40, ZombieVillager *)(this);
        }

        bool isConverting()
        {
            return MLINK_FUNC(bool, 0x02A49E04, ZombieVillager *)(this);
        }

        int getConversionProgress()
        {
            return MLINK_FUNC(int, 0x02A4AB1C, ZombieVillager *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A4AD38, ZombieVillager *)(this);
        }

        bool removeWhenFarAway()
        {
            return MLINK_FUNC(bool, 0x02A4B39C, ZombieVillager *)(this);
        }

        int conversionTime;
        uint32_t field_0x754;
        uint16_t field_0x758;
        uint16_t field_0x75A;
        uint32_t field_0x75C;
        uint32_t field_0x760;
        uint32_t field_0x764;
        uint32_t field_0x768;
        uint32_t field_0x76C;
        uint32_t field_0x770;
        uint32_t field_0x774;
    };
    MC_CHECK_SIZE(ZombieVillager, 0x778);
} // namespace mc
