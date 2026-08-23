#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class Abilities
    {
    public:
        float getFlyingSpeed()
        {
            return MLINK_FUNC(float, 0x0200ED38, Abilities *)(this);
        }

        float getWalkingSpeed()
        {
            return MLINK_FUNC(float, 0x0200ED48, Abilities *)(this);
        }

        void setFlyingSpeed(float newSpeed)
        {
            MLINK_FUNC(void, 0x0200ED40, Abilities *, float)(this, newSpeed);
        }

        void setWalkingSpeed(float newSpeed)
        {
            MLINK_FUNC(void, 0x0200ED50, Abilities *, float)(this, newSpeed);
        }

        bool operator==(const Abilities &abilities)
        {
            return MLINK_FUNC(bool, 0x0200E1F4, Abilities *, const Abilities &)(this, abilities);
        }

        bool isInvulnerable;
        bool isFlying;
        bool canFly;
        bool canInstaBuild;
        bool canBuild;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t field_0x7;
        float flyingSpeed;
        float walkingSpeed;
    };
    MC_CHECK_SIZE(Abilities, 0x10);
} // namespace mc
