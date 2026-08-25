#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Rabbit : public Animal
    {
    public:
        Rabbit(Level *level)
        {
            MLINK_FUNC(void, 0x0282A398, Rabbit *, Level *)(this, level);
        }

        static Rabbit *Create(Level *level)
        {
            return MLINK_FUNC(Rabbit *, 0x023E677C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02867818)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0282A790, Rabbit *)(this);
        }

        float getJumpPower()
        {
            return MLINK_FUNC(float, 0x0282AD20, Rabbit *)(this);
        }

        void jumpFromGround()
        {
            MLINK_FUNC(void, 0x0282B058, Rabbit *)(this);
        }

        void setJumping(bool jumping)
        {
            MLINK_FUNC(void, 0x0282B348, Rabbit *, bool)(this, jumping);
        }

        void startJumping()
        {
            MLINK_FUNC(void, 0x0282B460, Rabbit *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0282B7D8, Rabbit *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x0282C1A4, Rabbit *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0282C230, Rabbit *)(this);
        }

        int getRabbitType()
        {
            return MLINK_FUNC(int, 0x0282B934, Rabbit *)(this);
        }

        void setRabbitType(int type)
        {
            MLINK_FUNC(void, 0x0282C4E4, Rabbit *, int)(this, type);
        }

        uint32_t field_0x780;
        uint32_t field_0x784;
        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint32_t field_0x790;
        uint32_t field_0x794;
        uint32_t field_0x798;
        uint32_t field_0x79C;
        uint32_t field_0x7A0;
        uint32_t field_0x7A4;
        uint32_t field_0x7A8;
        uint32_t field_0x7AC;
    };
    MC_CHECK_SIZE(Rabbit, 0x7B0);
} // namespace mc
