#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"

namespace mc
{
    class NQRNetworkPlayer;

    class NQRNetworkManager
    {
    public:
        enum class eNQRNetworkManagerInternalState : uint32_t
        {
            Uninitialized               = 0,
            InitializationFailed        = 1,
            Idle                        = 2,
            LoggingIn                   = 3,
            WaitingToCreateSession      = 4,
            CreatingSession             = 5,
            SessionCreated              = 6,
            CreateSessionFailed         = 7,
            HostingSession              = 8,
            WaitingToJoinSession        = 9,
            JoinRequested               = 10,
            JoiningSession              = 11,
            JoinSessionFailed           = 12,
            JoinedSession               = 13,
            BrowsingMatchmakingSessions = 14,
            NoMatchmakingSessionsFound  = 15,
            JoiningMatchmakingSession   = 16,
            MatchmakingJoinFailed       = 17,
            Unknown18                   = 18,
            StartingGame                = 19,
            InGame                      = 20,
            LeavingSession              = 21,
            LeaveSessionFailed          = 22,
            Disconnected                = 23,
        };

        struct SessionSearchResult
        {
            uint32_t sessionId;
            uint32_t field_0x4;
            uint32_t field_0x8;
            uint32_t field_0xC;
            uint32_t field_0x10;
            uint32_t field_0x14;
            uint32_t field_0x18;
            uint32_t field_0x1C;
            void *extensionData;
        };

        class PlayerSyncData
        {
        public:
            PlayerSyncData()
            {
                MLINK_FUNC(void, 0x03486A78, PlayerSyncData *)(this);
            }

            PlayerUID uid;
            uint32_t field_0x14;
            uint64_t stationId;
            char name[0x14];
            uint16_t field_0x34;
            char16_t name16[11];
            uint8_t smallId;
            uint8_t localIdx : 4;
            uint8_t playerCount : 4;
            uint16_t field_0x4E;
        };

        class RoomSyncData
        {
        public:
            int getPlayerCount()
            {
                return players[0].playerCount;
            }

            void setPlayerCount(int count)
            {
                players[0].playerCount = count;
            }

            PlayerSyncData players[8];
        };

        static void SafeToRespondToGameBootInvite(int value)
        {
            MLINK_FUNC(void, 0x034665CC, int)(value);
        }

        int GetOutstandingAckCount(NQRNetworkPlayer *player)
        {
            return MLINK_FUNC(int, 0x034665E4, NQRNetworkManager *, NQRNetworkPlayer *)(this, player);
        }

        int GetSendQueueSizeBytes()
        {
            return MLINK_FUNC(int, 0x0346692C, NQRNetworkManager *)(this);
        }

        int GetSendQueueSizeMessages()
        {
            return MLINK_FUNC(int, 0x03466B98, NQRNetworkManager *)(this);
        }

        MC_CHECK_SIZE(SessionSearchResult, 0x24);
        MC_CHECK_SIZE(PlayerSyncData, 0x50);
        MC_CHECK_SIZE(RoomSyncData, 0x280);
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
    };
    MC_CHECK_SIZE(NQRNetworkManager, 0xB0);
} // namespace mc
