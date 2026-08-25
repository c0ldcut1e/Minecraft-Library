#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Creeper : public Monster
    {
    public:
        Creeper(Level *level)
        {
            MLINK_FUNC(Creeper *, 0x022728B0, Creeper *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02283B84)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02272984, Creeper *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02272E6C, Creeper *)(this);
        }

        int getSwellDir()
        {
            return MLINK_FUNC(int, 0x02273808, Creeper *)(this);
        }

        void setSwellDir(int value)
        {
            MLINK_FUNC(void, 0x02273888, Creeper *, int)(this, value);
        }

        bool isPowered()
        {
            return MLINK_FUNC(bool, 0x022758CC, Creeper *)(this);
        }

        float getSwelling(float partialTicks)
        {
            return MLINK_FUNC(float, 0x0227594C, Creeper *, float)(this, partialTicks);
        }

        int swell;
        int oldSwell;
        int maxSwell;
        int explosionRadius;
        uint32_t field_0x740;
        uint32_t field_0x744;
    };
    MC_CHECK_SIZE(Creeper, 0x748);
} // namespace mc
