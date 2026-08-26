#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Endermite : public Monster
    {
    public:
        Endermite(Level *level)
        {
            MLINK_FUNC(void, 0x023ABBA0, Endermite *, Level *)(this, level);
        }

        static Endermite *Create(Level *level)
        {
            return MLINK_FUNC(Endermite *, 0x023E663C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E729C)();
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x023C78F4, Endermite *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x023C7900, Endermite *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x023C7B80, Endermite *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023C7F88, Endermite *)(this);
        }

        void setPlayerSpawned(bool playerSpawned)
        {
            MLINK_FUNC(void, 0x023C8020, Endermite *, bool)(this, playerSpawned);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x023C8028, Endermite *)(this);
        }

        bool isDarkEnoughToSpawn()
        {
            return MLINK_FUNC(bool, 0x023C83B0, Endermite *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x023C83B8, Endermite *)(this);
        }

        int life;
        bool playerSpawned;
        uint8_t field_0x735;
        uint8_t field_0x736;
        uint8_t field_0x737;
    };
    MC_CHECK_SIZE(Endermite, 0x738);
} // namespace mc
