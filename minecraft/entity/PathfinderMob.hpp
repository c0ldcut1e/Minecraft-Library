#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Mob.hpp"

namespace mc
{
    class PathfinderMob : public Mob
    {
    public:
        uint32_t field_0x708;
        uint32_t field_0x70C;
        uint32_t field_0x710;
        uint32_t field_0x714;
        uint32_t field_0x718;
        uint32_t field_0x71C;
        uint32_t field_0x720;
        uint32_t field_0x724;
        uint32_t field_0x728;
        uint32_t field_0x72C;
    };
    MC_CHECK_SIZE(PathfinderMob, 0x730);
} // namespace mc
