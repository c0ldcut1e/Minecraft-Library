#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/global/GlobalEntity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class EnderCrystal : public Entity
    {
    public:
        EnderCrystal(Level *level)
        {
            MLINK_FUNC(void, 0x02385C54, EnderCrystal *, Level *)(this, level);
        }

        EnderCrystal(Level *level, double x, double y, double z)
        {
            MLINK_FUNC(void, 0x02385EA8, EnderCrystal *, Level *, double, double, double)(this, level, x, y, z);
        }

        static EnderCrystal *Create(Level *level)
        {
            return MLINK_FUNC(EnderCrystal *, 0x023E5A9C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E5A8C)();
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, EnderCrystal *crystal)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308C644, mboost::shared_ptr<Entity> *, EnderCrystal *)(out, crystal);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x023860B0, EnderCrystal *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023862BC, EnderCrystal *)(this);
        }

        bool showsBottom()
        {
            return MLINK_FUNC(bool, 0x023864EC, EnderCrystal *)(this);
        }

        void setShowBottom(bool showBottom)
        {
            MLINK_FUNC(void, 0x023869F8, EnderCrystal *, bool)(this, showBottom);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x02386E10, EnderCrystal *)(this);
        }

        void kill()
        {
            MLINK_FUNC(void, 0x02389544, EnderCrystal *)(this);
        }

        bool shouldRenderAtSqrDistance(double distance)
        {
            return MLINK_FUNC(bool, 0x02389598, EnderCrystal *, double)(this, distance);
        }

        int time;
        uint32_t field_0x354;
    };
    MC_CHECK_SIZE(EnderCrystal, 0x358);
} // namespace mc
