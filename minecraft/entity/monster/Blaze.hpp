#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Blaze : public Monster
    {
    public:
        Blaze(Level *level)
        {
            MLINK_FUNC(void, 0x0214A8B8, Blaze *, Level *)(this, level);
        }

        static Blaze *Create(Level *level)
        {
            return MLINK_FUNC(Blaze *, 0x023E65C4, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x021A5208)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0214AADC, Blaze *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0214AD14, Blaze *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0214AED8, Blaze *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x0214AFA4, Blaze *)(this);
        }

        bool isCharged()
        {
            return MLINK_FUNC(bool, 0x0214B500, Blaze *)(this);
        }

        void setCharged(bool charged)
        {
            MLINK_FUNC(void, 0x0214BD7C, Blaze *, bool)(this, charged);
        }

        float field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
    };
    MC_CHECK_SIZE(Blaze, 0x740);
} // namespace mc
