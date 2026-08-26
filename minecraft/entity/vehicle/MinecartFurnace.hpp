#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/vehicle/Minecart.hpp"
#include "world/Level.hpp"

namespace mc
{
    class MinecartFurnace : public Minecart
    {
    public:
        MinecartFurnace(Level *level)
        {
            MLINK_FUNC(void, 0x0266FD70, MinecartFurnace *, Level *)(this, level);
        }

        static MinecartFurnace *Create(Level *level)
        {
            return MLINK_FUNC(MinecartFurnace *, 0x023E6450, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4EC8)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0266FE3C, MinecartFurnace *)(this);
        }

        void setHasFuel(bool hasFuel)
        {
            MLINK_FUNC(void, 0x0266FECC, MinecartFurnace *, bool)(this, hasFuel);
        }

        bool hasFuel()
        {
            return MLINK_FUNC(bool, 0x0266FF5C, MinecartFurnace *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0266FFDC, MinecartFurnace *)(this);
        }

        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
    };
    MC_CHECK_SIZE(MinecartFurnace, 0x3B8);
} // namespace mc
