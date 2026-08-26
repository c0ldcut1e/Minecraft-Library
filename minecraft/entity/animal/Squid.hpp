#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/WaterAnimal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Squid : public WaterAnimal
    {
    public:
        Squid(Level *level)
        {
            MLINK_FUNC(void, 0x0294F858, Squid *, Level *)(this, level);
        }

        static Squid *Create(Level *level)
        {
            return MLINK_FUNC(Squid *, 0x023E66D4, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297DA08)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0294FA20, Squid *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0294FA80, Squid *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x0294FAEC, Squid *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x0294FB48, Squid *)(this);
        }

        void travel(float x, float y, float z)
        {
            MLINK_FUNC(void, 0x02950238, Squid *, float, float, float)(this, x, y, z);
        }

        void setMovementVector(float x, float y, float z)
        {
            MLINK_FUNC(void, 0x02950D8C, Squid *, float, float, float)(this, x, y, z);
        }

        bool hasMovementVector()
        {
            return MLINK_FUNC(bool, 0x02950D9C, Squid *)(this);
        }

        float xBodyRot;
        float xBodyRotO;
        float zBodyRot;
        float zBodyRotO;
        float tentacleAngle;
        float tentacleAngleO;
        float tentacleMovement;
        float oldTentacleMovement;
        float speed;
        float rotateSpeed;
        float tx;
        float ty;
        float tz;
        float random;
    };
    MC_CHECK_SIZE(Squid, 0x778);
} // namespace mc
