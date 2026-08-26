#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class VillagerGolem : public Monster
    {
    public:
        VillagerGolem(Level *level)
        {
            MLINK_FUNC(void, 0x02A646C4, VillagerGolem *, Level *)(this, level);
        }

        static VillagerGolem *Create(Level *level)
        {
            return MLINK_FUNC(VillagerGolem *, 0x023E674C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACF80C)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A88B94, VillagerGolem *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A88EE4, VillagerGolem *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A89308, VillagerGolem *)(this);
        }

        bool isPlayerCreated()
        {
            return MLINK_FUNC(bool, 0x02A89AA8, VillagerGolem *)(this);
        }

        void setPlayerCreated(bool playerCreated)
        {
            MLINK_FUNC(void, 0x02A89CCC, VillagerGolem *, bool)(this, playerCreated);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
    };
    MC_CHECK_SIZE(VillagerGolem, 0x748);
} // namespace mc
