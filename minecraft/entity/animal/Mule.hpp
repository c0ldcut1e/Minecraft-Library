#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractChestedHorse.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Mule : public AbstractChestedHorse
    {
    public:
        Mule(Level *level)
        {
            MLINK_FUNC(void, 0x02667A30, Mule *, Level *)(this, level);
        }

        static Mule *Create(Level *level)
        {
            return MLINK_FUNC(Mule *, 0x023E6358, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4B58)();
        }
    };
    MC_CHECK_SIZE(Mule, 0x7F0);
} // namespace mc
