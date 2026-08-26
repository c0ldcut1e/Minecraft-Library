#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/Cow.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class MushroomCow : public Cow
    {
    public:
        MushroomCow(Level *level)
        {
            MLINK_FUNC(void, 0x0265E680, MushroomCow *, Level *)(this, level);
        }

        static MushroomCow *Create(Level *level)
        {
            return MLINK_FUNC(MushroomCow *, 0x023E6704, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4368)();
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x02660414, MushroomCow *)(this);
        }
    };
    MC_CHECK_SIZE(MushroomCow, 0x780);
} // namespace mc
