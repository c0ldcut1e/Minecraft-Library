#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Mob.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Slime : public Mob
    {
    public:
        Slime(Level *level)
        {
            MLINK_FUNC(void, 0x02940310, Slime *, Level *)(this, level);
        }

        void setSize(int size, bool param_2)
        {
            MLINK_FUNC(void, 0x029408A0, Slime *, int, bool)(this, size, param_2);
        }

        uint32_t field_0x708;
        uint32_t field_0x70C;
        uint32_t field_0x710;
        uint32_t field_0x714;
    };
    MC_CHECK_SIZE(Slime, 0x718);
} // namespace mc
