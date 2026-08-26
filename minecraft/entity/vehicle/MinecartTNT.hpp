#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/vehicle/Minecart.hpp"
#include "world/Level.hpp"

namespace mc
{
    class MinecartTNT : public Minecart
    {
    public:
        MinecartTNT(Level *level)
        {
            MLINK_FUNC(void, 0x0265CEAC, MinecartTNT *, Level *)(this, level);
        }

        static MinecartTNT *Create(Level *level)
        {
            return MLINK_FUNC(MinecartTNT *, 0x023E6468, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4354)();
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0265CF6C, MinecartTNT *)(this);
        }

        void primeFuse()
        {
            MLINK_FUNC(void, 0x0265DEA4, MinecartTNT *)(this);
        }

        int getFuse()
        {
            return MLINK_FUNC(int, 0x0265E1B8, MinecartTNT *)(this);
        }

        bool isPrimed()
        {
            return MLINK_FUNC(bool, 0x0265E1C0, MinecartTNT *)(this);
        }

        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
    };
    MC_CHECK_SIZE(MinecartTNT, 0x3A8);
} // namespace mc
