#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Pig : public Animal
    {
    public:
        Pig(Level *level)
        {
            MLINK_FUNC(Pig *, 0x027598F0, Pig *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CE7D0)();
        }

        static Pig *Create(Level *level)
        {
            return MLINK_FUNC(Pig *, 0x023E6670, Level *)(level);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x027599C4, Pig *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02759E58, Pig *)(this);
        }

        bool canBeControlledByRider()
        {
            return MLINK_FUNC(bool, 0x02759EF8, Pig *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0275A7F4, Pig *)(this);
        }

        bool hasSaddle()
        {
            return MLINK_FUNC(bool, 0x0275A904, Pig *)(this);
        }

        void setSaddle(bool value)
        {
            MLINK_FUNC(void, 0x0275AB24, Pig *, bool)(this, value);
        }

        bool causeFallDamage(float fallDistance, float damageMultiplier)
        {
            return MLINK_FUNC(bool, 0x0275D29C, Pig *, float, float)(this, fallDistance, damageMultiplier);
        }

        void travel(float strafe, float vertical, float forward)
        {
            MLINK_FUNC(void, 0x0275D4BC, Pig *, float, float, float)(this, strafe, vertical, forward);
        }

        bool boost()
        {
            return MLINK_FUNC(bool, 0x0275DB98, Pig *)(this);
        }

        bool testboost()
        {
            return MLINK_FUNC(bool, 0x0275DCB0, Pig *)(this);
        }

        bool removeWhenFarAway()
        {
            return MLINK_FUNC(bool, 0x0275E16C, Pig *)(this);
        }

        bool boosting;
        uint8_t field_0x781;
        uint8_t field_0x782;
        uint8_t field_0x783;
        int boostTime;
        int boostTimeTotal;
        uint32_t field_0x78C;
        uint64_t boostStartTime;
    };
    MC_CHECK_SIZE(Pig, 0x798);
} // namespace mc
