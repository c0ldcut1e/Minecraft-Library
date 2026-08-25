#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Spider : public Monster
    {
    public:
        Spider(Level *level)
        {
            MLINK_FUNC(void, 0x02944714, Spider *, Level *)(this, level);
        }

        Spider(Level *level, bool runDerivedConstructorCalls)
        {
            MLINK_FUNC(void, 0x029447E0, Spider *, Level *, bool)(this, level, runDerivedConstructorCalls);
        }

        static Spider *Create(Level *level)
        {
            return MLINK_FUNC(Spider *, 0x023E64EC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297D208)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x029449FC, Spider *)(this);
        }

        float getRideHeight()
        {
            return MLINK_FUNC(float, 0x02944C80, Spider *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02944CB0, Spider *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02944D40, Spider *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02944DD8, Spider *)(this);
        }

        bool onLadder()
        {
            return MLINK_FUNC(bool, 0x02944ED0, Spider *)(this);
        }

        void makeStuckInWeb()
        {
            MLINK_FUNC(void, 0x02944EE0, Spider *)(this);
        }

        bool isClimbing()
        {
            return MLINK_FUNC(bool, 0x02944F70, Spider *)(this);
        }

        void setClimbing(bool climbing)
        {
            MLINK_FUNC(void, 0x02944FF4, Spider *, bool)(this, climbing);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x0294697C, Spider *)(this);
        }

    protected:
        Spider() = default;
    };
    MC_CHECK_SIZE(Spider, 0x730);
} // namespace mc
