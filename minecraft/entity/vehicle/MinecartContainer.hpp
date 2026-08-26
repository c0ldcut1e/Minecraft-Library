#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/vehicle/Minecart.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class MinecartContainer : public Minecart
    {
    public:
        MinecartContainer() = default;

        MinecartContainer(Level *level)
        {
            MLINK_FUNC(void, 0x0266DAC8, MinecartContainer *, Level *)(this, level);
        }

        void setDropContainerContent(bool dropContainerContent)
        {
            MLINK_FUNC(void, 0x0266F980, MinecartContainer *, bool)(this, dropContainerContent);
        }

        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
        uint32_t field_0x3B8;
        uint32_t field_0x3BC;
        uint32_t field_0x3C0;
        uint32_t field_0x3C4;
        uint32_t field_0x3C8;
        uint32_t field_0x3CC;
        uint32_t field_0x3D0;
        uint32_t field_0x3D4;
        uint32_t field_0x3D8;
        uint32_t field_0x3DC;
    };
    MC_CHECK_SIZE(MinecartContainer, 0x3E0);
} // namespace mc
