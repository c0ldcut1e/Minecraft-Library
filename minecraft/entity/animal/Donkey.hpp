#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractChestedHorse.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Donkey : public AbstractChestedHorse
    {
    public:
        Donkey(Level *level)
        {
            MLINK_FUNC(void, 0x022D0C18, Donkey *, Level *)(this, level);
        }

        static Donkey *Create(Level *level)
        {
            return MLINK_FUNC(Donkey *, 0x023E6340, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02305850)();
        }
    };
    MC_CHECK_SIZE(Donkey, 0x7F0);
} // namespace mc
