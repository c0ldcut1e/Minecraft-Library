#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/DamageSource.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Fireball : public Entity
    {
    public:
        Fireball() = default;

        Fireball(Level *level)
        {
            MLINK_FUNC(Fireball *, 0x023BD940, Fireball *, Level *)(this, level);
        }

        Fireball(Level *level, double xPos, double yPos, double zPos, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(Fireball *, 0x023BDAC8, Fireball *, Level *, double, double, double, double, double, double)(this, level, xPos, yPos, zPos,
                                                                                                                    xPower, yPower, zPower);
        }

        Fireball(Level *level, const mboost::shared_ptr<LivingEntity> &owner, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(Fireball *, 0x023BDCFC, Fireball *, Level *, const mboost::shared_ptr<LivingEntity> &, double, double,
                       double)(this, level, owner, xPower, yPower, zPower);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E6F9C)();
        }

        bool shouldRenderAtSqrDistance(double distance)
        {
            return MLINK_FUNC(bool, 0x023BDA34, Fireball *, double)(this, distance);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023BE14C, Fireball *)(this);
        }

        float getInertia()
        {
            return MLINK_FUNC(float, 0x023BEC5C, Fireball *)(this);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x023BEC68, Fireball *, CompoundTag *)(this, tag);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x023BEE88, Fireball *, CompoundTag *)(this, tag);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x023BF2A4, Fireball *)(this);
        }

        float getPickRadius()
        {
            return MLINK_FUNC(float, 0x023BF2AC, Fireball *)(this);
        }

        bool hurt(const DamageSource *source, float damage)
        {
            return MLINK_FUNC(bool, 0x023BF2B8, Fireball *, const DamageSource *, float)(this, source, damage);
        }

        float getBrightness()
        {
            return MLINK_FUNC(float, 0x023BF814, Fireball *)(this);
        }

        int getLightColor()
        {
            return MLINK_FUNC(int, 0x023BF820, Fireball *)(this);
        }

        bool shouldBurn()
        {
            return MLINK_FUNC(bool, 0x023BF838, Fireball *)(this);
        }

        bool shouldTick()
        {
            return MLINK_FUNC(bool, 0x02307200, Fireball *)(this);
        }

        mboost::shared_ptr<LivingEntity> owner;
        int life;
        int flightTime;
        double xPower;
        double yPower;
        double zPower;
    };
    MC_CHECK_SIZE(Fireball, 0x378);
} // namespace mc
