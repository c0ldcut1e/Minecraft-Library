#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/AbstractSkeleton.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Skeleton : public AbstractSkeleton
    {
    public:
        Skeleton(Level *level)
        {
            MLINK_FUNC(void, 0x0293F4A8, Skeleton *, Level *)(this, level);
        }

        static Skeleton *Create(Level *level)
        {
            return MLINK_FUNC(Skeleton *, 0x023E64D4, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297CEE8)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0293F3E0, Skeleton *)(this);
        }
    };
    MC_CHECK_SIZE(Skeleton, 0x740);
} // namespace mc
