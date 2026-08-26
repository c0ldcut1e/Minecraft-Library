#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ExperienceOrb : public Entity
    {
    public:
        ExperienceOrb(Level *level)
        {
            MLINK_FUNC(void, 0x023AB46C, ExperienceOrb *, Level *)(this, level);
        }

        ExperienceOrb(Level *level, double x, double y, double z, int value)
        {
            MLINK_FUNC(void, 0x0239A488, ExperienceOrb *, Level *, double, double, double, int)(this, level, x, y, z, value);
        }

        static ExperienceOrb *Create(Level *level)
        {
            return MLINK_FUNC(ExperienceOrb *, 0x023E60A0, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E68B8)();
        }

        static int getExperienceValue(int value)
        {
            return MLINK_FUNC(int, 0x0239A268, int)(value);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x023B1F64, ExperienceOrb *)(this);
        }

        int getLightColor()
        {
            return MLINK_FUNC(int, 0x023B1F68, ExperienceOrb *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023B2030, ExperienceOrb *)(this);
        }

        void updateInWaterState()
        {
            MLINK_FUNC(void, 0x023B2D94, ExperienceOrb *)(this);
        }

        void burn(int damage)
        {
            MLINK_FUNC(void, 0x023B2F78, ExperienceOrb *, int)(this, damage);
        }

        static int xpToDurability(int experience)
        {
            return MLINK_FUNC(int, 0x023B342C, int)(experience);
        }

        static int durabilityToXp(int durability)
        {
            return MLINK_FUNC(int, 0x023B3434, int)(durability);
        }

        int getValue()
        {
            return MLINK_FUNC(int, 0x023B3A60, ExperienceOrb *)(this);
        }

        int getIcon()
        {
            return MLINK_FUNC(int, 0x023B3A68, ExperienceOrb *)(this);
        }

        bool isAttackable()
        {
            return MLINK_FUNC(bool, 0x023B3B0C, ExperienceOrb *)(this);
        }

        bool shouldRender(double distance)
        {
            return MLINK_FUNC(bool, 0x023B3B14, ExperienceOrb *, double)(this, distance);
        }

        int age;
        int field_0x354;
        int pickupDelay;
        int health;
        int value;
        mboost::shared_ptr<Player> followingPlayer;
        int nextFollowingUpdateTime;
    };
    MC_CHECK_SIZE(ExperienceOrb, 0x370);
} // namespace mc
