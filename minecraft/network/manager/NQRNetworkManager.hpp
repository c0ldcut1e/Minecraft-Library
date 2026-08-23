#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"

namespace mc
{
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

        MC_CHECK_SIZE(SessionSearchResult, 0x24);
        MC_CHECK_SIZE(PlayerSyncData, 0x50);
        MC_CHECK_SIZE(RoomSyncData, 0x280);
    };
    MC_CHECK_SIZE(NQRNetworkManager, 0x1);
} // namespace mc
