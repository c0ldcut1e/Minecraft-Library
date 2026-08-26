#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractChestedHorse.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Llama : public AbstractChestedHorse
    {
    public:
        Llama(Level *level)
        {
            MLINK_FUNC(void, 0x025E0818, Llama *, Level *)(this, level);
        }

        static Llama *Create(Level *level)
        {
            return MLINK_FUNC(Llama *, 0x023E67AC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02604778)();
        }

        void setStrength(int strength)
        {
            MLINK_FUNC(void, 0x025E0C20, Llama *, int)(this, strength);
        }

        void setRandomStrength()
        {
            MLINK_FUNC(void, 0x025E0CCC, Llama *)(this);
        }

        int getStrength()
        {
            return MLINK_FUNC(int, 0x025E0D58, Llama *)(this);
        }

        int getVariant()
        {
            return MLINK_FUNC(int, 0x025E0DD8, Llama *)(this);
        }

        void setVariant(int variant)
        {
            MLINK_FUNC(void, 0x025E12F8, Llama *, int)(this, variant);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x025E1CFC, Llama *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x025E2034, Llama *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x025E20A0, Llama *)(this);
        }

        int getInventorySize()
        {
            return MLINK_FUNC(int, 0x025E21E0, Llama *)(this);
        }

        uint32_t field_0x7F0;
        bool didSpit;
        uint8_t field_0x7F5;
        uint8_t field_0x7F6;
        uint8_t field_0x7F7;
        uint32_t field_0x7F8;
        uint32_t field_0x7FC;
        uint32_t field_0x800;
        uint32_t field_0x804;
    };
    MC_CHECK_SIZE(Llama, 0x808);
} // namespace mc
