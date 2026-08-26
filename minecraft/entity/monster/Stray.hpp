#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/AbstractSkeleton.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Stray : public AbstractSkeleton
    {
    public:
        Stray(Level *level)
        {
            MLINK_FUNC(void, 0x029450DC, Stray *, Level *)(this, level);
        }

        static Stray *Create(Level *level)
        {
            return MLINK_FUNC(Stray *, 0x023E6100, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297D5E0)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02949044, Stray *)(this);
        }
    };
    MC_CHECK_SIZE(Stray, 0x740);
} // namespace mc
