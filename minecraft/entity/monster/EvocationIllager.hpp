#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/SpellcasterIllager.hpp"
#include "world/Level.hpp"

namespace mc
{
    class EvocationIllager : public SpellcasterIllager
    {
    public:
        EvocationIllager(Level *level)
        {
            MLINK_FUNC(void, 0x023AB9A0, EvocationIllager *, Level *)(this, level);
        }

        static EvocationIllager *Create(Level *level)
        {
            return MLINK_FUNC(EvocationIllager *, 0x023E6388, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E6F0C)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x023B975C, EvocationIllager *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x023B9BB8, EvocationIllager *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x023B9C8C, EvocationIllager *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023B9DB4, EvocationIllager *)(this);
        }

        uint32_t field_0x738;
        uint32_t field_0x73C;
    };
    MC_CHECK_SIZE(EvocationIllager, 0x740);
} // namespace mc
