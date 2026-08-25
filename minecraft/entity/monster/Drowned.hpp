#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/Zombie.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Drowned : public Zombie
    {
    public:
        Drowned(Level *level)
        {
            MLINK_FUNC(void, 0x022DEEB0, Drowned *, Level *)(this, level);
        }

        static Drowned *Create(Level *level)
        {
            return MLINK_FUNC(Drowned *, 0x023E6870, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02306A1C)();
        }

        void performRangedAttack(mboost::shared_ptr<LivingEntity> target, float distanceFactor)
        {
            MLINK_FUNC(void, 0x0228DEC0, Drowned *, mboost::shared_ptr<LivingEntity>, float)(this, target, distanceFactor);
        }

        bool breathesWater()
        {
            return MLINK_FUNC(bool, 0x022DEFC0, Drowned *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x022DEFC8, Drowned *)(this);
        }

        bool checkSpawnObstruction()
        {
            return MLINK_FUNC(bool, 0x022DF09C, Drowned *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x022DF45C, Drowned *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x022DFA00, Drowned *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x022DFA6C, Drowned *)(this);
        }

        float getWaterSlowDown()
        {
            return MLINK_FUNC(float, 0x022DFF90, Drowned *)(this);
        }

        void travel(float strafe, float vertical, float forward)
        {
            MLINK_FUNC(void, 0x022DFF9C, Drowned *, float, float, float)(this, strafe, vertical, forward);
        }

        bool isAggressive()
        {
            return MLINK_FUNC(bool, 0x0228E8B0, Drowned *)(this);
        }

        void setAggressive(bool aggressive)
        {
            MLINK_FUNC(void, 0x0228E8D4, Drowned *, bool)(this, aggressive);
        }

        uint32_t rangedAttackMobVtable;
        bool searchingForLand;
        uint8_t field_0x755;
        uint8_t field_0x756;
        uint8_t field_0x757;
        uint32_t field_0x758;
        uint32_t field_0x75C;
    };
    MC_CHECK_SIZE(Drowned, 0x760);
} // namespace mc
