#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Mob.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class FlyingMob : public Mob
    {
    public:
        FlyingMob() = default;

        FlyingMob(Level *level)
        {
            MLINK_FUNC(void, 0x0241BAC8, FlyingMob *, Level *)(this, level);
        }

        void travel(float x, float y, float z)
        {
            MLINK_FUNC(void, 0x0241BB58, FlyingMob *, float, float, float)(this, x, y, z);
        }

        bool onLadder()
        {
            return MLINK_FUNC(bool, 0x0241C1A4, FlyingMob *)(this);
        }
    };
    MC_CHECK_SIZE(FlyingMob, 0x708);
} // namespace mc
