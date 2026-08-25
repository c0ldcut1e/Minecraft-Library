#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Zombie : public Monster
    {
    public:
        Zombie(Level *level)
        {
            MLINK_FUNC(void, 0x02A3A914, Zombie *, Level *)(this, level);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
    };
    MC_CHECK_SIZE(Zombie, 0x750);
} // namespace mc
