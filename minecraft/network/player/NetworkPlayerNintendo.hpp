#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "INetworkPlayer.hpp"
#include "MinecraftLib.hpp"
#include "NQRNetworkPlayer.hpp"
#include "entity/player/PlayerUID.hpp"
#include "network/listener/Socket.hpp"

namespace mc
{
    class NetworkPlayerNintendo : public INetworkPlayer
    {
    public:
        NetworkPlayerNintendo(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x034AFDA8, NetworkPlayerNintendo *, NQRNetworkPlayer *)(this, player);
        }

        uint8_t GetSmallId()
        {
            return MLINK_FUNC(uint8_t, 0x034AFE2C, NetworkPlayerNintendo *)(this);
        }

        void SendData(INetworkPlayer *receiver, const void *data, int size, bool reliable, bool immediate)
        {
            MLINK_FUNC(void, 0x034AFE60, NetworkPlayerNintendo *, INetworkPlayer *, const void *, int, bool, bool)(this, receiver, data, size,
                                                                                                                   reliable, immediate);
        }

        bool IsSameSystem(INetworkPlayer *other)
        {
            return MLINK_FUNC(bool, 0x034AFE7C, NetworkPlayerNintendo *, INetworkPlayer *)(this, other);
        }

        int GetOutstandingAckCount()
        {
            return MLINK_FUNC(int, 0x034AFE94, NetworkPlayerNintendo *)(this);
        }

        int GetSendQueueSizeBytes(INetworkPlayer *receiver, bool reliable)
        {
            return MLINK_FUNC(int, 0x034AFEA8, NetworkPlayerNintendo *, INetworkPlayer *, bool)(this, receiver, reliable);
        }

        int GetSendQueueSizeMessages(INetworkPlayer *receiver, bool reliable)
        {
            return MLINK_FUNC(int, 0x034AFEBC, NetworkPlayerNintendo *, INetworkPlayer *, bool)(this, receiver, reliable);
        }

        int GetCurrentRtt()
        {
            return MLINK_FUNC(int, 0x034AFED0, NetworkPlayerNintendo *)(this);
        }

        bool IsHost()
        {
            return MLINK_FUNC(bool, 0x034AFED8, NetworkPlayerNintendo *)(this);
        }

        bool IsGuest()
        {
            return MLINK_FUNC(bool, 0x034AFEEC, NetworkPlayerNintendo *)(this);
        }

        bool IsLocal()
        {
            return MLINK_FUNC(bool, 0x034AFF28, NetworkPlayerNintendo *)(this);
        }

        int GetSessionIndex()
        {
            return MLINK_FUNC(int, 0x034AFF3C, NetworkPlayerNintendo *)(this);
        }

        bool IsTalking()
        {
            return MLINK_FUNC(bool, 0x034AFF50, NetworkPlayerNintendo *)(this);
        }

        bool IsMutedByLocalUser(int userIndex)
        {
            return MLINK_FUNC(bool, 0x034AFF64, NetworkPlayerNintendo *, int)(this, userIndex);
        }

        bool HasVoice()
        {
            return MLINK_FUNC(bool, 0x034AFF78, NetworkPlayerNintendo *)(this);
        }

        bool HasCamera()
        {
            return MLINK_FUNC(bool, 0x034AFF8C, NetworkPlayerNintendo *)(this);
        }

        int GetUserIndex()
        {
            return MLINK_FUNC(int, 0x034AFF94, NetworkPlayerNintendo *)(this);
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

        void SetUID(PlayerUID uid)
        {
            MLINK_FUNC(void, 0x034B0908, NetworkPlayerNintendo *, PlayerUID)(this, uid);
        }

        void SentChunkPacket()
        {
            MLINK_FUNC(void, 0x034B0968, NetworkPlayerNintendo *)(this);
        }

        int GetTimeSinceLastChunkPacket_ms()
        {
            return MLINK_FUNC(int, 0x034B09A8, NetworkPlayerNintendo *)(this);
        }

        bool isFake()
        {
            return MLINK_FUNC(bool, 0x034B0A14, NetworkPlayerNintendo *)(this);
        }

        int GetSinglePlayerOutstandingAckCount()
        {
            return MLINK_FUNC(int, 0x034B0AB8, NetworkPlayerNintendo *)(this);
        }

        void DecrementAcksOutstanding()
        {
            MLINK_FUNC(void, 0x034B0AC0, NetworkPlayerNintendo *)(this);
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
