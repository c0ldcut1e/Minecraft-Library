#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/AbstractIllager.hpp"
#include "world/Level.hpp"

namespace mc
{
    class SpellcasterIllager : public AbstractIllager
    {
    public:
        SpellcasterIllager() = default;

        SpellcasterIllager(Level *level)
        {
            MLINK_FUNC(void, 0x02947F08, SpellcasterIllager *, Level *)(this, level);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02947FA4, SpellcasterIllager *)(this);
        }

        bool isCastingSpell()
        {
            return MLINK_FUNC(bool, 0x029481D4, SpellcasterIllager *)(this);
        }

        int getCurrentSpell()
        {
            return MLINK_FUNC(int, 0x029483EC, SpellcasterIllager *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x029484B4, SpellcasterIllager *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
    };
    MC_CHECK_SIZE(SpellcasterIllager, 0x738);
} // namespace mc
