#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Vex : public Monster
    {
    public:
        Vex(Level *level)
        {
            MLINK_FUNC(void, 0x02A4454C, Vex *, Level *)(this, level);
        }

        static Vex *Create(Level *level)
        {
            return MLINK_FUNC(Vex *, 0x023E63A0, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE674)();
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A446E4, Vex *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A44948, Vex *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A44BDC, Vex *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A44C7C, Vex *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
    };
    MC_CHECK_SIZE(Vex, 0x748);
} // namespace mc
