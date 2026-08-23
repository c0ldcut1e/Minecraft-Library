#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/player/PlayerUID.hpp"
#include "network/player/INetworkPlayer.hpp"
#include "network/session/FriendSessionInfo.hpp"

namespace mc
{
    class CGameNetworkManager
    {
    public:
        static void FakeLocalPlayerJoined()
        {
            MLINK_FUNC(void, 0x02D5AD58)();
        }

        static CGameNetworkManager *GetInstance()
        {
            return MLink::PointerFromOffset<CGameNetworkManager>(0x104F61FC);
        }

        static int GetLocalPlayerMask(int unk1)
        {
            return MLINK_FUNC(int, 0x02D53F68, int)(unk1);
        }

        static void SetJoiningMiniGameId(uint32_t miniGameId)
        {
            *MLink::PointerFromAddress<uint32_t>(0x104F6298) = miniGameId;
        }

        void AddLocalPlayerByUserIndex(int userIndex)
        {
            MLINK_FUNC(void, 0x02D57024, CGameNetworkManager *, int)(this, userIndex);
        }

        void CreateSocket(INetworkPlayer *pNetworkPlayer, bool localPlayer)
        {
            MLINK_FUNC(void, 0x02D59C9C, CGameNetworkManager *, INetworkPlayer *, bool)(this, pNetworkPlayer, localPlayer);
        }

        void GatherRTTStats()
        {
            MLINK_FUNC(void, 0x02D59334, CGameNetworkManager *)(this);
        }

        INetworkPlayer *GetLocalPlayerByUserIndex(int userIndex)
        {
            return MLINK_FUNC(INetworkPlayer *, 0x02CF0930, CGameNetworkManager *, int)(this, userIndex);
        }

        INetworkPlayer *GetPlayerByIndex(int playerIndex)
        {
            return MLINK_FUNC(INetworkPlayer *, 0x02D57054, CGameNetworkManager *, int)(this, playerIndex);
        }

        INetworkPlayer *GetPlayerBySmallId(unsigned char smallId)
        {
            return MLINK_FUNC(INetworkPlayer *, 0x02D570D0, CGameNetworkManager *, unsigned char)(this, smallId);
        }

        INetworkPlayer *GetPlayerByXuid(const PlayerUID &uid)
        {
            return MLINK_FUNC(INetworkPlayer *, 0x02D5706C, CGameNetworkManager *, const PlayerUID &)(this, uid);
        }

        int GetPlayerCount()
        {
            return MLINK_FUNC(int, 0x02D54FCC, CGameNetworkManager *)(this);
        }

        int GetPrimaryPad()
        {
            return MLINK_FUNC(int, 0x02D5AC08, CGameNetworkManager *)(this);
        }

        bool IsHost()
        {
            return MLINK_FUNC(bool, 0x02D54BD4, CGameNetworkManager *)(this);
        }

        bool IsInGameplay()
        {
            return MLINK_FUNC(bool, 0x02D57210, CGameNetworkManager *)(this);
        }

        bool IsInPublicJoinableGame()
        {
            return MLINK_FUNC(bool, 0x02D5731C, CGameNetworkManager *)(this);
        }

        bool IsLocalGame()
        {
            return MLINK_FUNC(bool, 0x02D54FE4, CGameNetworkManager *)(this);
        }

        int JoinGame(FriendSessionInfo *fsInfo, int localUsersMask, bool joinFromInvite)
        {
            return MLINK_FUNC(int, 0x02D57558, CGameNetworkManager *, FriendSessionInfo *, int, bool)(this, fsInfo, localUsersMask, joinFromInvite);
        }

        void LeaveGame(unsigned int unk1)
        {
            MLINK_FUNC(void, 0x02D578C8, CGameNetworkManager *, unsigned int)(this, unk1);
        }

        void PlayerJoining(INetworkPlayer *pNetworkPlayer)
        {
            MLINK_FUNC(void, 0x02D5A4F4, CGameNetworkManager *, INetworkPlayer *)(this, pNetworkPlayer);
        }

        void ResetLeavingGame()
        {
            MLINK_FUNC(void, 0x02D57A14, CGameNetworkManager *)(this);
        }

        void SetLocalGame(bool value)
        {
            MLINK_FUNC(void, 0x02D54038, CGameNetworkManager *, bool)(this, value);
        }
    };
} // namespace mc
