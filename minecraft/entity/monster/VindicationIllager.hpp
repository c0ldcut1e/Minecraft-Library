#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/monster/AbstractIllager.hpp"
#include "world/Level.hpp"

namespace mc
{
    class VindicationIllager : public AbstractIllager
    {
    public:
        VindicationIllager(Level *level)
        {
            MLINK_FUNC(void, 0x02A475D0, VindicationIllager *, Level *)(this, level);
        }

        static VindicationIllager *Create(Level *level)
        {
            return MLINK_FUNC(VindicationIllager *, 0x023E63B8, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACE788)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A47780, VindicationIllager *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A47B10, VindicationIllager *)(this);
        }

        bool isAgressive()
        {
            return MLINK_FUNC(bool, 0x02A47CC8, VindicationIllager *)(this);
        }

        void setAggressive(bool aggressive)
        {
            MLINK_FUNC(void, 0x02A47CDC, VindicationIllager *, bool)(this, aggressive);
        }

        bool field_0x730;
        uint8_t field_0x731;
        uint8_t field_0x732;
        uint8_t field_0x733;
        uint32_t field_0x734;
    };
    MC_CHECK_SIZE(VindicationIllager, 0x738);
} // namespace mc
