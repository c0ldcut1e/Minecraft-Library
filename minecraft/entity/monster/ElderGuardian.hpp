#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/Guardian.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ElderGuardian : public Guardian
    {
    public:
        ElderGuardian(Level *level)
        {
            MLINK_FUNC(void, 0x022DE384, ElderGuardian *, Level *)(this, level);
        }

        static ElderGuardian *Create(Level *level)
        {
            return MLINK_FUNC(ElderGuardian *, 0x023E60D0, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02306A0C)();
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x022DE488, ElderGuardian *)(this);
        }

        void setGhost()
        {
            MLINK_FUNC(void, 0x022DE58C, ElderGuardian *)(this);
        }
    };
    MC_CHECK_SIZE(ElderGuardian, 0x758);
} // namespace mc
