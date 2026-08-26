#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/vehicle/MinecartContainer.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class MinecartHopper : public MinecartContainer
    {
    public:
        MinecartHopper(Level *level)
        {
            MLINK_FUNC(void, 0x026719C0, MinecartHopper *, Level *)(this, level);
        }

        static MinecartHopper *Create(Level *level)
        {
            return MLINK_FUNC(MinecartHopper *, 0x023E6480, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4F54)();
        }

        bool isEnabled()
        {
            return MLINK_FUNC(bool, 0x026721C4, MinecartHopper *)(this);
        }

        void setEnabled(bool enabled)
        {
            MLINK_FUNC(void, 0x026721CC, MinecartHopper *, bool)(this, enabled);
        }

        void setCooldown(int cooldown)
        {
            MLINK_FUNC(void, 0x026721D4, MinecartHopper *, int)(this, cooldown);
        }

        bool isOnCooldown()
        {
            return MLINK_FUNC(bool, 0x026721DC, MinecartHopper *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x026721F0, MinecartHopper *)(this);
        }

        uint32_t field_0x3E0;
        uint32_t field_0x3E4;
        uint32_t field_0x3E8;
        uint32_t field_0x3EC;
        uint32_t field_0x3F0;
        uint32_t field_0x3F4;
        uint32_t field_0x3F8;
        uint32_t field_0x3FC;
    };
    MC_CHECK_SIZE(MinecartHopper, 0x400);
} // namespace mc
