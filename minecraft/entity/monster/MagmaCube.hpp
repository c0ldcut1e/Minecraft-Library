#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/Slime.hpp"
#include "world/Level.hpp"

namespace mc
{
    class MagmaCube : public Slime
    {
    public:
        MagmaCube(Level *level)
        {
            MLINK_FUNC(void, 0x025F06FC, MagmaCube *, Level *)(this, level);
        }

        static MagmaCube *Create(Level *level)
        {
            return MLINK_FUNC(MagmaCube *, 0x023E65DC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026056D0)();
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x025F07BC, MagmaCube *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x025F0828, MagmaCube *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x025F082C, MagmaCube *)(this);
        }

        bool checkSpawnObstruction()
        {
            return MLINK_FUNC(bool, 0x025F0AB4, MagmaCube *)(this);
        }

        void setSize(int size, bool resetHealth)
        {
            MLINK_FUNC(void, 0x025F0E94, MagmaCube *, int, bool)(this, size, resetHealth);
        }

        int getLightColor()
        {
            return MLINK_FUNC(int, 0x025F0F28, MagmaCube *)(this);
        }

        float getBrightness()
        {
            return MLINK_FUNC(float, 0x025F0F34, MagmaCube *)(this);
        }

        bool isOnFire()
        {
            return MLINK_FUNC(bool, 0x025F1388, MagmaCube *)(this);
        }

        bool breathesLava()
        {
            return MLINK_FUNC(bool, 0x025F1390, MagmaCube *)(this);
        }

        int getJumpDelay()
        {
            return MLINK_FUNC(int, 0x025F1398, MagmaCube *)(this);
        }

        void decreaseSquish()
        {
            MLINK_FUNC(void, 0x025F13C8, MagmaCube *)(this);
        }

        bool isDealsDamage()
        {
            return MLINK_FUNC(bool, 0x025F14DC, MagmaCube *)(this);
        }

        int getAttackDamage()
        {
            return MLINK_FUNC(int, 0x025F14E4, MagmaCube *)(this);
        }
    };
    MC_CHECK_SIZE(MagmaCube, 0x718);
} // namespace mc
