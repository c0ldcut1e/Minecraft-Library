#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Zombie : public Monster
    {
    public:
        Zombie(Level *level)
        {
            MLINK_FUNC(void, 0x02A3A914, Zombie *, Level *)(this, level);
        }

        Zombie(Level *level, bool runDerivedConstructorCalls)
        {
            MLINK_FUNC(void, 0x02A3A9C4, Zombie *, Level *, bool)(this, level, runDerivedConstructorCalls);
        }

        static Zombie *Create(Level *level)
        {
            return MLINK_FUNC(Zombie *, 0x023E651C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE444)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A3AA88, Zombie *)(this);
        }

        void addBehaviourGoals()
        {
            MLINK_FUNC(void, 0x02A3AC80, Zombie *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A3AF10, Zombie *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A3B050, Zombie *)(this);
        }

        void setAggressive(bool aggressive)
        {
            MLINK_FUNC(void, 0x02A3B358, Zombie *, bool)(this, aggressive);
        }

        bool isAggressive()
        {
            return MLINK_FUNC(bool, 0x02A3B474, Zombie *)(this);
        }

        bool canBreakDoors()
        {
            return MLINK_FUNC(bool, 0x02A3B594, Zombie *)(this);
        }

        void setCanBreakDoors(bool canBreakDoors)
        {
            MLINK_FUNC(void, 0x02A3B59C, Zombie *, bool)(this, canBreakDoors);
        }

        bool isBaby()
        {
            return MLINK_FUNC(bool, 0x02A3B65C, Zombie *)(this);
        }

        bool isJockey()
        {
            return MLINK_FUNC(bool, 0x02A3B77C, Zombie *)(this);
        }

        void setBaby(bool baby)
        {
            MLINK_FUNC(void, 0x02A3B8E8, Zombie *, bool)(this, baby);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02A3BBA0, Zombie *)(this);
        }

        bool isSunSensitive()
        {
            return MLINK_FUNC(bool, 0x02A3D808, Zombie *)(this);
        }

        bool breathesWater()
        {
            return MLINK_FUNC(bool, 0x02A3F580, Zombie *)(this);
        }

        bool isConverting()
        {
            return MLINK_FUNC(bool, 0x02A400C8, Zombie *)(this);
        }

        void startConverting(int conversionTime)
        {
            MLINK_FUNC(void, 0x02A401E8, Zombie *, int)(this, conversionTime);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A405E0, Zombie *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02A3F174, Zombie *)(this);
        }

        uint32_t breakDoorGoal;
        bool canBreakDoorsFlag;
        uint8_t field_0x735;
        uint8_t field_0x736;
        uint8_t field_0x737;
        float field_0x738;
        float field_0x73C;
        bool field_0x740;
        uint8_t field_0x741;
        uint8_t field_0x742;
        uint8_t field_0x743;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
    };
    MC_CHECK_SIZE(Zombie, 0x750);
} // namespace mc
