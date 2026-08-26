#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/TamableAnimal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Ocelot : public TamableAnimal
    {
    public:
        Ocelot(Level *level)
        {
            MLINK_FUNC(void, 0x0275E38C, Ocelot *, Level *)(this, level);
        }

        static Ocelot *Create(Level *level)
        {
            return MLINK_FUNC(Ocelot *, 0x023E6734, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CE90C)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0275E460, Ocelot *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0275E8EC, Ocelot *)(this);
        }

        void SetIsTempted(bool tempted)
        {
            MLINK_FUNC(void, 0x0275E9E0, Ocelot *, bool)(this, tempted);
        }

        void customServerAiStep()
        {
            MLINK_FUNC(void, 0x0275EA70, Ocelot *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0275ECB8, Ocelot *)(this);
        }

        int getCatType()
        {
            return MLINK_FUNC(int, 0x0276117C, Ocelot *)(this);
        }

        void setCatType(int type)
        {
            MLINK_FUNC(void, 0x027611FC, Ocelot *, int)(this, type);
        }

        bool isSittingOnBlock()
        {
            return MLINK_FUNC(bool, 0x027620F0, Ocelot *)(this);
        }

        uint32_t field_0x788;
        uint32_t field_0x78C;
    };
    MC_CHECK_SIZE(Ocelot, 0x790);
} // namespace mc
