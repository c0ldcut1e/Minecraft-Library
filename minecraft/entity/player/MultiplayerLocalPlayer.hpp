#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "LocalPlayer.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class MultiplayerLocalPlayer : public LocalPlayer
    {
    public:
        void tick()
        {
            MLINK_FUNC(void, 0x031F54E4, MultiplayerLocalPlayer *)(this);
        }

        uint32_t field_0xA10;
        uint32_t field_0xA14;
        uint32_t field_0xA18;
        uint32_t field_0xA1C;
        uint32_t field_0xA20;
        uint32_t field_0xA24;
    };
    MC_CHECK_SIZE(MultiplayerLocalPlayer, 0xA28);
} // namespace mc
