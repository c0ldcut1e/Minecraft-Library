#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/vehicle/Minecart.hpp"
#include "world/Level.hpp"

namespace mc
{
    class MinecartSpawner : public Minecart
    {
    public:
        MinecartSpawner(Level *level)
        {
            MLINK_FUNC(void, 0x02671364, MinecartSpawner *, Level *)(this, level);
        }

        static MinecartSpawner *Create(Level *level)
        {
            return MLINK_FUNC(MinecartSpawner *, 0x023E64A4, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4ED8)();
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0267150C, MinecartSpawner *)(this);
        }

        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
    };
    MC_CHECK_SIZE(MinecartSpawner, 0x3A8);
} // namespace mc
