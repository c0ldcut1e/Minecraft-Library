#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "INetworkPlayer.hpp"
#include "MinecraftLib.hpp"
#include "NQRNetworkPlayer.hpp"
#include "entity/player/PlayerUID.hpp"

namespace mc
{
    class Socket;

    class NetworkPlayerNintendo : public INetworkPlayer
    {
    public:
        int GetCurrentRtt()
        {
            return MLINK_FUNC(int, 0x034AFED0, NetworkPlayerNintendo *)(this);
        }

        Socket *GetSocket()
        {
            return MLINK_FUNC(Socket *, 0x034AFFB0, NetworkPlayerNintendo *)(this);
        }

        PlayerUID GetUID()
        {
            PlayerUID uid;
            MLINK_FUNC(void, 0x034B08F4, PlayerUID *, NetworkPlayerNintendo *)(&uid, this);
            return uid;
        }

        void SetSocket(Socket *socket)
        {
            MLINK_FUNC(void, 0x034AFFA8, NetworkPlayerNintendo *, Socket *)(this, socket);
        }

        uint32_t field_0x0;
        NQRNetworkPlayer *nqrNetworkPlayer;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
    };
    MC_CHECK_SIZE(NetworkPlayerNintendo, 0x18);
} // namespace mc
