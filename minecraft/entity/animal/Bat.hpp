#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/AmbientCreature.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Bat : public AmbientCreature
    {
    public:
        Bat(Level *level)
        {
            MLINK_FUNC(void, 0x020A091C, Bat *, Level *)(this, level);
        }

        static Bat *Create(Level *level)
        {
            return MLINK_FUNC(Bat *, 0x023E660C, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x020B422C)();
        }

        void setResting(bool resting)
        {
            MLINK_FUNC(void, 0x020A07F8, Bat *, bool)(this, resting);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x020A0A08, Bat *)(this);
        }

        bool isResting()
        {
            return MLINK_FUNC(bool, 0x020A0BF0, Bat *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x020A0C74, Bat *)(this);
        }

        void customServerAiStep()
        {
            MLINK_FUNC(void, 0x020A0DB4, Bat *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x020A1DC8, Bat *)(this);
        }

        uint32_t field_0x708;
        uint32_t field_0x70C;
    };
    MC_CHECK_SIZE(Bat, 0x710);
} // namespace mc
