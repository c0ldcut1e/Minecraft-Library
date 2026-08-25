#pragma once

#include <cstdint>
#include <cstring>

#include "mlink/MLink.hpp"

#include "INetworkPlayer.hpp"
#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/VTable.hpp"
#include "network/listener/Socket.hpp"

namespace mc
{
    inline constexpr uint32_t kFakeNetworkPlayerVtable = 0x10352CA8;

    class FakeNetworkPlayer : public INetworkPlayer
    {
    public:
        FakeNetworkPlayer() : vtable((VTable *) MLink::CorrectPointerOffset(kFakeNetworkPlayerVtable)), nameCapacity(7)
        {
            memset(this, 0, sizeof(FakeNetworkPlayer));
        }

        void Initialize(const wchar_t *nameValue, const PlayerUID &uidValue, uint8_t smallIdValue)
        {
            for (size_t index = 0; index < 7 && (nameValue[index] != 0); index++)
            {
                name[index] = nameValue[index];
                nameLength++;
            }

            uid     = uidValue;
            smallId = smallIdValue;
        }

        void SetSocket(Socket *socketValue)
        {
            MLINK_FUNC(void, 0x02D53B08, FakeNetworkPlayer *, Socket *)(this, socketValue);
        }

        uint8_t GetSmallId()
        {
            return MLINK_FUNC(uint8_t, 0x02D538CC, FakeNetworkPlayer *)(this);
        }

        void SendData(INetworkPlayer *receiver, const void *data, int size, bool reliable, bool immediate)
        {
            MLINK_FUNC(void, 0x02D538D4, FakeNetworkPlayer *, INetworkPlayer *, const void *, int, bool, bool)(this, receiver, data, size, reliable,
                                                                                                               immediate);
        }

        bool IsSameSystem(INetworkPlayer *other)
        {
            return MLINK_FUNC(bool, 0x02D538D8, FakeNetworkPlayer *, INetworkPlayer *)(this, other);
        }

        void UpdateBRUPQueue()
        {
            MLINK_FUNC(void, 0x02D5396C, FakeNetworkPlayer *)(this);
        }

        int GetOutstandingAckCount()
        {
            return MLINK_FUNC(int, 0x02D53A60, FakeNetworkPlayer *)(this);
        }

        int GetSinglePlayerOutstandingAckCount()
        {
            return MLINK_FUNC(int, 0x02D53A9C, FakeNetworkPlayer *)(this);
        }

        void DecrementAcksOutstanding()
        {
            MLINK_FUNC(void, 0x02D53AA4, FakeNetworkPlayer *)(this);
        }

        int GetSendQueueSizeBytes(INetworkPlayer *receiver, bool reliable)
        {
            return MLINK_FUNC(int, 0x02D53AA8, FakeNetworkPlayer *, INetworkPlayer *, bool)(this, receiver, reliable);
        }

        int GetSendQueueSizeMessages(INetworkPlayer *receiver, bool reliable)
        {
            return MLINK_FUNC(int, 0x02D53AB0, FakeNetworkPlayer *, INetworkPlayer *, bool)(this, receiver, reliable);
        }

        int GetCurrentRtt()
        {
            return MLINK_FUNC(int, 0x02D53AB8, FakeNetworkPlayer *)(this);
        }

        bool IsHost()
        {
            return MLINK_FUNC(bool, 0x02D53AC0, FakeNetworkPlayer *)(this);
        }

        bool IsGuest()
        {
            return MLINK_FUNC(bool, 0x02D53AC8, FakeNetworkPlayer *)(this);
        }

        bool IsLocal()
        {
            return MLINK_FUNC(bool, 0x02D53AD0, FakeNetworkPlayer *)(this);
        }

        int GetSessionIndex()
        {
            return MLINK_FUNC(int, 0x02D53AD8, FakeNetworkPlayer *)(this);
        }

        bool IsTalking()
        {
            return MLINK_FUNC(bool, 0x02D53AE0, FakeNetworkPlayer *)(this);
        }

        bool IsMutedByLocalUser(int userIndex)
        {
            return MLINK_FUNC(bool, 0x02D53AE8, FakeNetworkPlayer *, int)(this, userIndex);
        }

        bool HasVoice()
        {
            return MLINK_FUNC(bool, 0x02D53AF0, FakeNetworkPlayer *)(this);
        }

        bool HasCamera()
        {
            return MLINK_FUNC(bool, 0x02D53AF8, FakeNetworkPlayer *)(this);
        }

        int GetUserIndex()
        {
            return MLINK_FUNC(int, 0x02D53B00, FakeNetworkPlayer *)(this);
        }

        Socket *GetSocket()
        {
            return MLINK_FUNC(Socket *, 0x02D53B10, FakeNetworkPlayer *)(this);
        }

        PlayerUID GetUID()
        {
            PlayerUID value;
            MLINK_FUNC(void, 0x02D53BAC, PlayerUID *, FakeNetworkPlayer *)(&value, this);
            return value;
        }

        void SetUID(PlayerUID uidValue)
        {
            MLINK_FUNC(void, 0x02D53BD8, FakeNetworkPlayer *, PlayerUID)(this, uidValue);
        }

        void SentChunkPacket()
        {
            MLINK_FUNC(void, 0x02D53C04, FakeNetworkPlayer *)(this);
        }

        int GetTimeSinceLastChunkPacket_ms()
        {
            return MLINK_FUNC(int, 0x02D53C44, FakeNetworkPlayer *)(this);
        }

        bool isFake()
        {
            return MLINK_FUNC(bool, 0x02D53CB0, FakeNetworkPlayer *)(this);
        }

        VTable *vtable;
        Socket *socket;
        uint32_t field_0x8;
        uint32_t field_0xC;
        PlayerUID uid;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        char16_t name[8];
        uint32_t field_0x4C;
        uint32_t nameLength;
        uint32_t nameCapacity{};
        uint8_t smallId;
        uint8_t field_0x59;
        uint8_t field_0x5A;
        uint8_t field_0x5B;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
    };
    MC_CHECK_SIZE(FakeNetworkPlayer, 0x80);
} // namespace mc
