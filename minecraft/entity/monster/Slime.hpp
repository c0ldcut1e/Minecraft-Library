#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Mob.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Slime : public Mob
    {
    public:
        Slime(Level *level)
        {
            MLINK_FUNC(void, 0x02940310, Slime *, Level *)(this, level);
        }

        static Slime *Create(Level *level)
        {
            return MLINK_FUNC(Slime *, 0x023E6534, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297CEF8)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02940690, Slime *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02940810, Slime *)(this);
        }

        void setSize(int size, bool param_2)
        {
            MLINK_FUNC(void, 0x029408A0, Slime *, int, bool)(this, size, param_2);
        }

        int getSize()
        {
            return MLINK_FUNC(int, 0x02940A80, Slime *)(this);
        }

        bool isTiny()
        {
            return MLINK_FUNC(bool, 0x02940E24, Slime *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02940E6C, Slime *)(this);
        }

        void decreaseSquish()
        {
            MLINK_FUNC(void, 0x029414B4, Slime *)(this);
        }

        int getJumpDelay()
        {
            return MLINK_FUNC(int, 0x029414CC, Slime *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02942CF0, Slime *)(this);
        }

        bool isDealsDamage()
        {
            return MLINK_FUNC(bool, 0x02942D04, Slime *)(this);
        }

        int getAttackDamage()
        {
            return MLINK_FUNC(int, 0x02942D38, Slime *)(this);
        }

        float targetSquish;
        float squish;
        float oSquish;
        int jumpDelay;
    };
    MC_CHECK_SIZE(Slime, 0x718);
} // namespace mc
