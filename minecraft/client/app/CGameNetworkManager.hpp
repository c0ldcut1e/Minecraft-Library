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
        CGameNetworkManager()
        {
            MLINK_FUNC(void, 0x02D53CC0, CGameNetworkManager *)(this);
        }

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

        void RemoveLocalPlayerByUserIndex(int userIndex)
        {
            MLINK_FUNC(void, 0x02D5703C, CGameNetworkManager *, int)(this, userIndex);
        }

        void Initialise()
        {
            MLINK_FUNC(void, 0x02D53E90, CGameNetworkManager *)(this);
        }

        void Terminate()
        {
            MLINK_FUNC(void, 0x02D53F44, CGameNetworkManager *)(this);
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

        int GetOnlinePlayerCount()
        {
            return MLINK_FUNC(int, 0x02D5700C, CGameNetworkManager *)(this);
        }

        int GetJoiningReadyPercentage()
        {
            return MLINK_FUNC(int, 0x02D54F9C, CGameNetworkManager *)(this);
        }

        INetworkPlayer *GetHostPlayer()
        {
            return MLINK_FUNC(INetworkPlayer *, 0x02D57198, CGameNetworkManager *)(this);
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

        bool IsInSession()
        {
            return MLINK_FUNC(bool, 0x02D53F84, CGameNetworkManager *)(this);
        }

        bool IsReadyToPlayOrIdle()
        {
            return MLINK_FUNC(bool, 0x02D54F6C, CGameNetworkManager *)(this);
        }

        bool IsLeavingGame()
        {
            return MLINK_FUNC(bool, 0x02D54FB4, CGameNetworkManager *)(this);
        }

        bool IsInPublicJoinableGame()
        {
            return MLINK_FUNC(bool, 0x02D5731C, CGameNetworkManager *)(this);
        }

        bool IsLocalGame()
        {
            return MLINK_FUNC(bool, 0x02D54FE4, CGameNetworkManager *)(this);
        }

        bool IsPrivateGame()
        {
            return MLINK_FUNC(bool, 0x02D57240, CGameNetworkManager *)(this);
        }

        bool IsInStatsEnabledSession()
        {
            return MLINK_FUNC(bool, 0x02D572EC, CGameNetworkManager *)(this);
        }

        bool IsMatchmakingEnabled()
        {
            return MLINK_FUNC(bool, 0x02D57304, CGameNetworkManager *)(this);
        }

        bool SessionHasSpace(uint32_t playerCount)
        {
            return MLINK_FUNC(bool, 0x02D57498, CGameNetworkManager *, uint32_t)(this, playerCount);
        }

        bool SessionHasMii(int userIndex)
        {
            return MLINK_FUNC(bool, 0x02D574B0, CGameNetworkManager *, int)(this, userIndex);
        }

        int JoinGame(FriendSessionInfo *fsInfo, int localUsersMask, bool joinFromInvite)
        {
            return MLINK_FUNC(int, 0x02D57558, CGameNetworkManager *, FriendSessionInfo *, int, bool)(this, fsInfo, localUsersMask, joinFromInvite);
        }

        void LeaveGame(bool keepSession)
        {
            MLINK_FUNC(void, 0x02D578C8, CGameNetworkManager *, bool)(this, keepSession);
        }

        void PlayerJoining(INetworkPlayer *pNetworkPlayer)
        {
            MLINK_FUNC(void, 0x02D5A4F4, CGameNetworkManager *, INetworkPlayer *)(this, pNetworkPlayer);
        }

        void PlayerLeaving(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x02D5AA00, CGameNetworkManager *, INetworkPlayer *)(this, player);
        }

        void HostChanged()
        {
            MLINK_FUNC(void, 0x02D5AAE4, CGameNetworkManager *)(this);
        }

        void ResetLeavingGame()
        {
            MLINK_FUNC(void, 0x02D57A14, CGameNetworkManager *)(this);
        }

        void SetLocalGame(bool value)
        {
            MLINK_FUNC(void, 0x02D54038, CGameNetworkManager *, bool)(this, value);
        }

        void SetPrivateGame(bool value)
        {
            MLINK_FUNC(void, 0x02D57228, CGameNetworkManager *, bool)(this, value);
        }

        void SetIsInPublicJoinableGame(bool value)
        {
            MLINK_FUNC(void, 0x02D573A0, CGameNetworkManager *, bool)(this, value);
        }

        void ForceFriendsSessionRefresh()
        {
            MLINK_FUNC(void, 0x02D57528, CGameNetworkManager *)(this);
        }

        void ClearFriendsSessions()
        {
            MLINK_FUNC(void, 0x02D57540, CGameNetworkManager *)(this);
        }

        void HandleSignInChange()
        {
            MLINK_FUNC(void, 0x02D571E0, CGameNetworkManager *)(this);
        }

        void HandleDisconnect(bool local)
        {
            MLINK_FUNC(void, 0x02D5AC38, CGameNetworkManager *, bool)(this, local);
        }

        void DoWork()
        {
            MLINK_FUNC(void, 0x02D54B78, CGameNetworkManager *)(this);
        }

        bool usingLanMode()
        {
            return MLINK_FUNC(bool, 0x02D592B8, CGameNetworkManager *)(this);
        }

        void setLanMode(bool enabled)
        {
            MLINK_FUNC(void, 0x02D592D0, CGameNetworkManager *, bool)(this, enabled);
        }

        bool isLanConnected()
        {
            return MLINK_FUNC(bool, 0x02D592E8, CGameNetworkManager *)(this);
        }

        bool isLanModeChangeInProgress()
        {
            return MLINK_FUNC(bool, 0x02D59300, CGameNetworkManager *)(this);
        }

        void GatherStats()
        {
            MLINK_FUNC(void, 0x02D59318, CGameNetworkManager *)(this);
        }

        void SystemFlagSet(INetworkPlayer *player, int flag)
        {
            MLINK_FUNC(void, 0x02D58FF0, CGameNetworkManager *, INetworkPlayer *, int)(this, player, flag);
        }

        int SystemFlagGet(INetworkPlayer *player, int flag)
        {
            return MLINK_FUNC(int, 0x02D59008, CGameNetworkManager *, INetworkPlayer *, int)(this, player, flag);
        }

        void SystemFlagClearAll(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x02D59020, CGameNetworkManager *, INetworkPlayer *)(this, player);
        }

        void ServerStoppedCreate(bool value)
        {
            MLINK_FUNC(void, 0x02D53DF0, CGameNetworkManager *, bool)(this, value);
        }

        void ServerReadyCreate(bool value)
        {
            MLINK_FUNC(void, 0x02D53E40, CGameNetworkManager *, bool)(this, value);
        }

        void TickInvitePending()
        {
            MLINK_FUNC(void, 0x02D54B00, CGameNetworkManager *)(this);
        }

        void ServerReadyWait()
        {
            MLINK_FUNC(void, 0x02D54F04, CGameNetworkManager *)(this);
        }

        void ServerReadyDestroy()
        {
            MLINK_FUNC(void, 0x02D54F1C, CGameNetworkManager *)(this);
        }

        void CorrectErrorIDS(int errorId)
        {
            MLINK_FUNC(void, 0x02D54F84, CGameNetworkManager *, int)(this, errorId);
        }

        void RegisterPlayerChangedCallback(int index, void *(*callback)(void *, INetworkPlayer *, bool), void *data)
        {
            MLINK_FUNC(void, 0x02D571B0, CGameNetworkManager *, int, void *(*) (void *, INetworkPlayer *, bool), void *)(this, index, callback, data);
        }

        void UnRegisterPlayerChangedCallback(int index, void *(*callback)(void *, INetworkPlayer *, bool), void *data)
        {
            MLINK_FUNC(void, 0x02D571C8, CGameNetworkManager *, int, void *(*) (void *, INetworkPlayer *, bool), void *)(this, index, callback, data);
        }

        bool ShouldMessageForFullSession()
        {
            return MLINK_FUNC(bool, 0x02D571F8, CGameNetworkManager *)(this);
        }

        bool IsInActiveCoopOrCompetitive(int userIndex)
        {
            return MLINK_FUNC(bool, 0x02D573A8, CGameNetworkManager *, int)(this, userIndex);
        }

        void UpdateAndSetGameSessionData(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x02D57934, CGameNetworkManager *, INetworkPlayer *)(this, player);
        }

        void SendInviteGUI(int userIndex)
        {
            MLINK_FUNC(void, 0x02D579FC, CGameNetworkManager *, int)(this, userIndex);
        }

        bool IsNetworkThreadRunning()
        {
            return MLINK_FUNC(bool, 0x02D57A44, CGameNetworkManager *)(this);
        }

        void renderQueueMeter()
        {
            MLINK_FUNC(void, 0x02D59330, CGameNetworkManager *)(this);
        }

        void SetSessionGameModeId(int gameModeId)
        {
            MLINK_FUNC(void, 0x02D5934C, CGameNetworkManager *, int)(this, gameModeId);
        }

        void CloseConnection(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x02D5A470, CGameNetworkManager *, INetworkPlayer *)(this, player);
        }

        void WriteStats(INetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x02D5AB3C, CGameNetworkManager *, INetworkPlayer *)(this, player);
        }

        void AddLocalPlayerFailed(int userIndex, bool showError)
        {
            MLINK_FUNC(void, 0x02D5AB9C, CGameNetworkManager *, int, bool)(this, userIndex, showError);
        }

        void ServerReady()
        {
            MLINK_FUNC(void, 0x02D59038, CGameNetworkManager *)(this);
        }

        void ServerStopped()
        {
            MLINK_FUNC(void, 0x02D5904C, CGameNetworkManager *)(this);
        }

        void ServerStoppedWait()
        {
            MLINK_FUNC(void, 0x02D59060, CGameNetworkManager *)(this);
        }

        void ServerStoppedDestroy()
        {
            MLINK_FUNC(void, 0x02D591A4, CGameNetworkManager *)(this);
        }

        bool ServerStoppedValid()
        {
            return MLINK_FUNC(bool, 0x02D591F4, CGameNetworkManager *)(this);
        }
    };
} // namespace mc
