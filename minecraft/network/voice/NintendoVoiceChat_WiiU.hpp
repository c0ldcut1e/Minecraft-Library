#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "internal/vector.hpp"
#include "network/manager/NQRNetworkManager_WiiU.hpp"
#include "network/player/NQRNetworkPlayer.hpp"

namespace mc
{
    class NintendoVoiceChat_WiiU
    {
    public:
        static void startConference()
        {
            MLINK_FUNC(void, 0x034716F4)();
        }

        static void AddPlayer(uint64_t stationId)
        {
            MLINK_FUNC(void, 0x03471DC4, uint64_t)(stationId);
        }

        static void stopConference()
        {
            MLINK_FUNC(void, 0x03471F10)();
        }

        static void RemovePlayer(uint64_t stationId)
        {
            MLINK_FUNC(void, 0x03472024, uint64_t)(stationId);
        }

        static void RemoveAllPlayers()
        {
            MLINK_FUNC(void, 0x034729D0)();
        }

        static void FlushMessageQueue()
        {
            MLINK_FUNC(void, 0x03472AB8)();
        }

        static void Initialise(NQRNetworkManager_WiiU *manager)
        {
            MLINK_FUNC(void, 0x03472BC0, NQRNetworkManager_WiiU *)(manager);
        }

        static void InitialiseAfterOnline()
        {
            MLINK_FUNC(void, 0x03472BCC)();
        }

        static void Shutdown()
        {
            MLINK_FUNC(void, 0x03472DEC)();
        }

        static void AddPlayer(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x03472EB0, NQRNetworkPlayer *)(player);
        }

        static void addPlayer(NQRNetworkPlayer *player)
        {
            AddPlayer(player);
        }

        static mstd::vector<NQRNetworkPlayer *> getPlayers()
        {
            return {*(uint32_t *) MLink::CorrectPointerOffset(0x10AD2224)};
        }

        static void SetVoiceChatEnabled(bool enabled)
        {
            MLINK_FUNC(void, 0x03472FB4, bool)(enabled);
        }

        static bool IsTalking(NQRNetworkPlayer *player)
        {
            return MLINK_FUNC(bool, 0x03473078, NQRNetworkPlayer *)(player);
        }

        static void Tick()
        {
            MLINK_FUNC(void, 0x0347316C)();
        }

        static void ReleaseCallback()
        {
            MLINK_FUNC(void, 0x0347334C)();
        }

        static void ReleaseForeground()
        {
            MLINK_FUNC(void, 0x03473370)();
        }

        static void AcquiredForeground()
        {
            MLINK_FUNC(void, 0x03473380)();
        }

        static void removePlayer(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x03472774, NQRNetworkPlayer *)(player);
        }
    };
} // namespace mc
