#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/vector.hpp"
#include "network/manager/NQRNetworkManager.hpp"
#include "network/player/INetworkPlayer.hpp"
#include "network/player/NQRNetworkPlayer.hpp"
#include "network/session/FriendSessionInfo.hpp"
#include "network/session/GameSessionData.hpp"

namespace mc
{
    class NetworkPlayerNintendo;

    class CPlatformNetworkManagerNintendo
    {
    public:
        struct FriendSessionEntry
        {
            uint32_t sessionId;
            uint32_t field_0x4;
            uint32_t field_0x8;
            uint32_t field_0xC;
            uint32_t field_0x10;
            uint32_t field_0x14;
            uint32_t field_0x18;
            uint32_t field_0x1C;
            GameSessionData *sessionData;
        };

        static CPlatformNetworkManagerNintendo *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<CPlatformNetworkManagerNintendo>(0x104C6FE4);
        }

        NetworkPlayerNintendo *addNetworkPlayer(NQRNetworkPlayer *player)
        {
            return MLINK_FUNC(NetworkPlayerNintendo *, 0x03468D14, CPlatformNetworkManagerNintendo *, NQRNetworkPlayer *)(this, player);
        }

        void ClearFriendsSessions()
        {
            MLINK_FUNC(void, 0x0346E094, CPlatformNetworkManagerNintendo *)(this);
        }

        void ForceFriendsSessionRefresh()
        {
            MLINK_FUNC(void, 0x0346E040, CPlatformNetworkManagerNintendo *)(this);
        }

        void GetFullFriendSessionInfo(FriendSessionInfo *friendSessionInfo, void (*callback)(bool success, void *data), void *data)
        {
            MLINK_FUNC(void, 0x0346E01C, CPlatformNetworkManagerNintendo *, FriendSessionInfo *, void (*)(bool, void *),
                       void *)(this, friendSessionInfo, callback, data);
        }

        NetworkPlayerNintendo *GetPlayerBySmallId(unsigned char smallId)
        {
            return MLINK_FUNC(NetworkPlayerNintendo *, 0x0346B980, CPlatformNetworkManagerNintendo *, unsigned char)(this, smallId);
        }

        int GetPlayerCount()
        {
            return MLINK_FUNC(int, 0x0346B650, CPlatformNetworkManagerNintendo *)(this);
        }

        void HandlePlayerJoined(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x03469334, CPlatformNetworkManagerNintendo *, NQRNetworkPlayer *)(this, player);
        }

        void HandlePlayerLeaving(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x0346992C, CPlatformNetworkManagerNintendo *, NQRNetworkPlayer *)(this, player);
        }

        void SystemFlagAddPlayer(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x0346D070, CPlatformNetworkManagerNintendo *, INetworkPlayer *)(this, player);
        }

        void UpdateAndSetGameSessionData(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x0346C88C, CPlatformNetworkManagerNintendo *, INetworkPlayer *)(this, player);
        }

        void (*sessionsUpdatedCallback)(void *data);

        MC_CHECK_SIZE(FriendSessionEntry, 0x24);
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        NQRNetworkManager_WiiU *onlineNetworkManager;
        NQRNetworkManager *networkManager;
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
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        uint32_t field_0x14C;
        uint32_t field_0x150;
        uint32_t field_0x154;
        uint32_t field_0x158;
        uint32_t field_0x15C;
        mstd::vector<FriendSessionInfo *> friendSessions;
        uint32_t friendRefreshTime;
        int friendSessionEntryCount;
        FriendSessionEntry *friendSessionEntries;
        uint32_t field_0x17C;
        uint32_t field_0x180;
        void *sessionsUpdatedCallbackData;
        uint32_t field_0x18C;
        mstd::vector<NetworkPlayerNintendo *> players;
    };
    MC_CHECK_SIZE(CPlatformNetworkManagerNintendo, 0x1A0);
} // namespace mc
