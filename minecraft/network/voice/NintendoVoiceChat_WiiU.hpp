#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "internal/vector.hpp"
#include "network/player/NQRNetworkPlayer.hpp"

namespace mc
{
    class NintendoVoiceChat_WiiU
    {
    public:
        static void addPlayer(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x03472EB0, NQRNetworkPlayer *)(player);
        };

        static mstd::vector<NQRNetworkPlayer *> getPlayers()
        {
            return {*(uint32_t *) MLink::CorrectPointerOffset(0x10AD2224)};
        }

        static void removePlayer(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x03472774, NQRNetworkPlayer *)(player);
        }
    };
} // namespace mc
