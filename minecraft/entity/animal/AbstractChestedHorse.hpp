#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractHorse.hpp"
#include "world/Level.hpp"

namespace mc
{
    class AbstractChestedHorse : public AbstractHorse
    {
    public:
        AbstractChestedHorse() = default;

        AbstractChestedHorse(Level *level)
        {
            MLINK_FUNC(void, 0x02023708, AbstractChestedHorse *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x020B16F8)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x020237BC, AbstractChestedHorse *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0202384C, AbstractChestedHorse *)(this);
        }

        bool hasChest()
        {
            return MLINK_FUNC(bool, 0x02023944, AbstractChestedHorse *)(this);
        }

        void setChest(bool chest)
        {
            MLINK_FUNC(void, 0x020239C4, AbstractChestedHorse *, bool)(this, chest);
        }
    };
    MC_CHECK_SIZE(AbstractChestedHorse, 0x7F0);
} // namespace mc
