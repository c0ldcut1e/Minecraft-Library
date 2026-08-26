#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/FlyingMob.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Ghast : public FlyingMob
    {
    public:
        Ghast(Level *level)
        {
            MLINK_FUNC(void, 0x02457BA0, Ghast *, Level *)(this, level);
        }

        static Ghast *Create(Level *level)
        {
            return MLINK_FUNC(Ghast *, 0x023E654C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0246FC90)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02457E60, Ghast *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x024586C4, Ghast *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02458754, Ghast *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02458B28, Ghast *)(this);
        }

        uint32_t field_0x708;
        uint32_t field_0x70C;
    };
    MC_CHECK_SIZE(Ghast, 0x710);
} // namespace mc
