#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Witch : public Monster
    {
    public:
        Witch(Level *level)
        {
            MLINK_FUNC(void, 0x02A420B4, Witch *, Level *)(this, level);
        }

        static Witch *Create(Level *level)
        {
            return MLINK_FUNC(Witch *, 0x023E6624, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE664)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A42258, Witch *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A42490, Witch *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A4281C, Witch *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02A428BC, Witch *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
    };
    MC_CHECK_SIZE(Witch, 0x738);
} // namespace mc
