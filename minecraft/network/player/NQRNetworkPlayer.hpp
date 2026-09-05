#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"
#include "network/manager/NQRNetworkManager.hpp"

namespace mc
{
    class NQRNetworkPlayer
    {
    public:
        enum eNQRNetworkPlayerType
        {
            NNP_TYPE_HOST = 0,
            NNP_TYPE_LOCAL,
            NNP_TYPE_REMOTE,
        };

        enum class AckFlags : uint8_t
        {
            Unknown1 = 1,
            Request  = 2,
            Return   = 3,
        };

        NQRNetworkPlayer(NQRNetworkManager *manager, eNQRNetworkPlayerType type, bool isHost, uint64_t stationId, int localPlayerIdx, PlayerUID *uid,
                         const char *name, const wchar_t *wname)
        {
            MLINK_FUNC(void, 0x0346721C, NQRNetworkPlayer *, NQRNetworkManager *, eNQRNetworkPlayerType, bool, uint64_t, int, PlayerUID *,
                       const char *, const wchar_t *)(this, manager, type, isHost, stationId, localPlayerIdx, uid, name, wname);
        }

        ~NQRNetworkPlayer()
        {
            MLINK_FUNC(void, 0x03467558, NQRNetworkPlayer *, uint32_t)(this, 0);
        }

        uint64_t GetStationId() const
        {
            return (static_cast<uint64_t>(stationIdHigh) << 32) | static_cast<uint64_t>(stationIdLow);
        }

        void ConnectionComplete()
        {
            MLINK_FUNC(void, 0x03467650, NQRNetworkPlayer *)(this);
        }

        uint32_t GetCustomDataValue()
        {
            return MLINK_FUNC(uint32_t, 0x034670F4, NQRNetworkPlayer *)(this);
        }

        uint8_t GetSmallId()
        {
            return MLINK_FUNC(uint8_t, 0x03467014, NQRNetworkPlayer *)(this);
        }

        const wchar_t *GetMiiName()
        {
            return MLINK_FUNC(wchar_t *, 0x0346701C, NQRNetworkPlayer *)(this);
        }

        const char *GetNetworkName()
        {
            return MLINK_FUNC(char *, 0x03467024, NQRNetworkPlayer *)(this);
        }

        const wchar_t *GetNetworkNameW()
        {
            return MLINK_FUNC(wchar_t *, 0x0346702C, NQRNetworkPlayer *)(this);
        }

        int GetLocalPlayerIndex()
        {
            return MLINK_FUNC(int, 0x034670B8, NQRNetworkPlayer *)(this);
        }

        PlayerUID GetUID()
        {
            PlayerUID value;
            MLINK_FUNC(void, 0x034675D4, PlayerUID *, NQRNetworkPlayer *)(&value, this);
            return value;
        }

        const wchar_t *getMiiName()
        {
            return GetMiiName();
        }

        int GetSessionIndex()
        {
            return MLINK_FUNC(int, 0x034679EC, NQRNetworkPlayer *)(this);
        }

        bool IsConnectionComplete()
        {
            return MLINK_FUNC(bool, 0x03467644, NQRNetworkPlayer *)(this);
        }

        bool IsHost()
        {
            return MLINK_FUNC(bool, 0x034670A8, NQRNetworkPlayer *)(this);
        }

        bool IsLocal()
        {
            return MLINK_FUNC(bool, 0x03467034, NQRNetworkPlayer *)(this);
        }

        bool IsRemote()
        {
            return MLINK_FUNC(bool, 0x03467074, NQRNetworkPlayer *)(this);
        }

        bool IsSameSystem(NQRNetworkPlayer *other)
        {
            return MLINK_FUNC(bool, 0x034670C0, NQRNetworkPlayer *, NQRNetworkPlayer *)(this, other);
        }

        bool HasVoice()
        {
            return MLINK_FUNC(bool, 0x03467104, NQRNetworkPlayer *)(this);
        }

        bool IsTalking()
        {
            return MLINK_FUNC(bool, 0x03467164, NQRNetworkPlayer *)(this);
        }

        bool IsMutedByLocalUser(int userIndex)
        {
            return MLINK_FUNC(bool, 0x03467214, NQRNetworkPlayer *, int)(this, userIndex);
        }

        bool IsReady()
        {
            return MLINK_FUNC(bool, 0x0346762C, NQRNetworkPlayer *)(this);
        }

        void SetCustomDataValue(uint32_t value)
        {
            MLINK_FUNC(void, 0x034670FC, NQRNetworkPlayer *, uint32_t)(this, value);
        }

        void SetUID(PlayerUID uidValue)
        {
            MLINK_FUNC(void, 0x03467600, NQRNetworkPlayer *, PlayerUID)(this, uidValue);
        }

        void SendInternal(NQRNetworkPlayer *receiver, const void *data, uint32_t size, AckFlags ackFlags)
        {
            MLINK_FUNC(void, 0x03467674, NQRNetworkPlayer *, NQRNetworkPlayer *, const void *, uint32_t, AckFlags)(this, receiver, data, size,
                                                                                                                   ackFlags);
        }

        void SendData(NQRNetworkPlayer *receiver, const void *data, uint32_t size, bool reliable)
        {
            MLINK_FUNC(void, 0x0346775C, NQRNetworkPlayer *, NQRNetworkPlayer *, const void *, uint32_t, bool)(this, receiver, data, size, reliable);
        }

        void WriteAck(NQRNetworkPlayer *receiver)
        {
            MLINK_FUNC(void, 0x034678AC, NQRNetworkPlayer *, NQRNetworkPlayer *)(this, receiver);
        }

        void ReadAckReturn(AckFlags ackFlags)
        {
            MLINK_FUNC(void, 0x034678C8, NQRNetworkPlayer *, AckFlags)(this, ackFlags);
        }

        void ReadAckRequest(AckFlags ackFlags, NQRNetworkPlayer *sender)
        {
            MLINK_FUNC(void, 0x03467924, NQRNetworkPlayer *, AckFlags, NQRNetworkPlayer *)(this, ackFlags, sender);
        }

        int GetOutstandingAckCount()
        {
            return MLINK_FUNC(int, 0x03467940, NQRNetworkPlayer *)(this);
        }

        int GetSendQueueSizeBytes()
        {
            return MLINK_FUNC(int, 0x03467958, NQRNetworkPlayer *)(this);
        }

        int GetSendQueueSizeMessages()
        {
            return MLINK_FUNC(int, 0x0346796C, NQRNetworkPlayer *)(this);
        }

        int GetTotalSendQueueBytes()
        {
            return MLINK_FUNC(int, 0x03467980, NQRNetworkPlayer *)(this);
        }

        int GetTotalSendQueueMessages()
        {
            return MLINK_FUNC(int, 0x03467988, NQRNetworkPlayer *)(this);
        }

        void SmallIdAllocated(uint8_t smallId)
        {
            MLINK_FUNC(void, 0x03467660, NQRNetworkPlayer *, uint8_t)(this, smallId);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t localPlayerIndex;
        uint32_t stationIdHigh;
        uint32_t stationIdLow;
        uint8_t smallId;
        uint8_t field_0x19;
        uint8_t field_0x1A;
        uint8_t field_0x1B;
        PlayerUID uid;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint8_t field_0x48;
        uint8_t field_0x49;
        char networkName[0x15];
        char16_t networkNameW[0x15];
        uint32_t customDataValue;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
    };
    MC_CHECK_SIZE(NQRNetworkPlayer, 0x110);
} // namespace mc
