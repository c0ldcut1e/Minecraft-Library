#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Pig : public Animal
    {
    public:
        Pig(Level *level)
        {
            MLINK_FUNC(Pig *, 0x027598F0, Pig *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CE7D0)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0275A7F4, Pig *)(this);
        }

        bool hasSaddle()
        {
            return MLINK_FUNC(bool, 0x0275A904, Pig *)(this);
        }

        void setSaddle(bool value)
        {
            MLINK_FUNC(void, 0x0275AB24, Pig *, bool)(this, value);
        }

        bool field_0x780;
        uint8_t field_0x781;
        uint8_t field_0x782;
        uint8_t field_0x783;
        uint32_t field_0x784;
        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint32_t field_0x790;
        uint32_t field_0x794;
    };
    MC_CHECK_SIZE(Pig, 0x798);
} // namespace mc
