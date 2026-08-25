#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "INQRNetworkManagerListener.hpp"
#include "MinecraftLib.hpp"
#include "NQRNetworkManager.hpp"
#include "entity/player/PlayerUID.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/player/NQRNetworkPlayer.hpp"

namespace mc
{
    class NQRNetworkManager_Lan_WiiU : public NQRNetworkManager
    {
    public:
        enum class NetworkType : uint32_t
        {
            Unknown1 = 1,
            Unknown4 = 4,
        };

        enum class EJoinFailedReason : uint32_t
        {
        };

        NQRNetworkManager_Lan_WiiU(INQRNetworkManagerListener *listener)
        {
            MLINK_FUNC(void, 0x03474E70, NQRNetworkManager_Lan_WiiU *, INQRNetworkManagerListener *)(this, listener);
        }

        void Tick()
        {
            MLINK_FUNC(void, 0x03475334, NQRNetworkManager_Lan_WiiU *)(this);
        }

        NQRNetworkPlayer *GetPlayerFromStationIdAndLocalIdx(uint64_t stationId, int localPlayerIndex)
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x0347537C, NQRNetworkManager_Lan_WiiU *, uint64_t, int)(this, stationId, localPlayerIndex);
        }

        void RemoveConnectedStation(uint64_t stationId)
        {
            MLINK_FUNC(void, 0x03475430, NQRNetworkManager_Lan_WiiU *, uint64_t)(this, stationId);
        }

        void RemoveConnectedPlayer(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x03475540, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *)(this, player);
        }

        void NonNetworkPlayerComplete(NQRNetworkPlayer *player, uint8_t smallId)
        {
            MLINK_FUNC(void, 0x03475CCC, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *, uint8_t)(this, player, smallId);
        }

        void AddConnectedPlayer(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x034775E4, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *)(this, player);
        }

        void HandlePlayerJoined(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x034778C4, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *)(this, player);
        }

        void FindOrCreateNonNetworkPlayer(int playerIndex, int playerType, PlayerSyncData *syncData)
        {
            MLINK_FUNC(void, 0x0347794C, NQRNetworkManager_Lan_WiiU *, int, int, PlayerSyncData *)(this, playerIndex, playerType, syncData);
        }

        void NetworkPlayerSmallIdAllocated(NQRNetworkPlayer *player, uint8_t smallId)
        {
            MLINK_FUNC(void, 0x03477BD8, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *, uint8_t)(this, player, smallId);
        }

        void MapRoomSlotPlayers(int roomSlotPlayerCount = -1)
        {
            MLINK_FUNC(void, 0x03477CB8, NQRNetworkManager_Lan_WiiU *, int)(this, roomSlotPlayerCount);
        }

        void UpdateRoomSyncUIDsFromPlayers()
        {
            MLINK_FUNC(void, 0x03478330, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void RemoteDataSend(uint64_t stationId, uint8_t smallId, const void *data, uint32_t size)
        {
            MLINK_FUNC(void, 0x03478850, NQRNetworkManager_Lan_WiiU *, uint64_t, uint8_t, const void *, uint32_t)(this, stationId, smallId, data,
                                                                                                                  size);
        }

        void SyncRoomData()
        {
            MLINK_FUNC(void, 0x03478920, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void RemoveRemotePlayersAndSync(uint64_t stationId, int localPlayerIndex)
        {
            MLINK_FUNC(void, 0x03478990, NQRNetworkManager_Lan_WiiU *, uint64_t, int)(this, stationId, localPlayerIndex);
        }

        void ClearSendQueue()
        {
            MLINK_FUNC(void, 0x03478CB8, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void SetState(eNQRNetworkManagerInternalState state)
        {
            MLINK_FUNC(void, 0x03478D44, NQRNetworkManager_Lan_WiiU *, eNQRNetworkManagerInternalState)(this, state);
        }

        void TickSendQueue()
        {
            MLINK_FUNC(void, 0x03478D74, NQRNetworkManager_Lan_WiiU *)(this);
        }

        int InitialiseNetwork(NetworkType type)
        {
            return MLINK_FUNC(int, 0x03478FCC, NQRNetworkManager_Lan_WiiU *, NetworkType)(this, type);
        }

        void Lan_InitializePiaLan()
        {
            MLINK_FUNC(void, 0x03479240, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Pia_SignalLeaveSession()
        {
            MLINK_FUNC(void, 0x03479D30, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Net_GetLocalAddress(uint32_t *address, uint32_t *port)
        {
            MLINK_FUNC(void, 0x03479F40, NQRNetworkManager_Lan_WiiU *, uint32_t *, uint32_t *)(this, address, port);
        }

        void Lan_StartupPiaLan()
        {
            MLINK_FUNC(void, 0x03479FAC, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void SetLastNetworkError(nn::pia::Result result)
        {
            MLINK_FUNC(void, 0x0347A120, NQRNetworkManager_Lan_WiiU *, nn::pia::Result)(this, result);
        }

        bool Pia_StartupSession()
        {
            return MLINK_FUNC(bool, 0x0347A170, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Session_CleanupSession()
        {
            MLINK_FUNC(void, 0x0347B004, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Lan_CleanupPiaLan()
        {
            MLINK_FUNC(void, 0x0347B138, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Session_FinalizePiaSession()
        {
            MLINK_FUNC(void, 0x0347B18C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Lan_FinalizePiaLan()
        {
            MLINK_FUNC(void, 0x0347B1F8, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Pia_FinalizeCommon()
        {
            MLINK_FUNC(void, 0x0347B234, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Pia_Finalize()
        {
            MLINK_FUNC(void, 0x0347B2D0, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Pia_Shutdown()
        {
            MLINK_FUNC(void, 0x0347B3B0, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void InitialiseAfterOnline()
        {
            MLINK_FUNC(void, 0x0347B574, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void OnlineCheck()
        {
            MLINK_FUNC(void, 0x0347B86C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void FriendSearchTick()
        {
            MLINK_FUNC(void, 0x0347B90C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool IsInitialisedAfterOnline()
        {
            return MLINK_FUNC(bool, 0x0347B9B0, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void UpdateApplicationConnected()
        {
            MLINK_FUNC(void, 0x0347B9BC, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void RemoveAllPlayersOnClient()
        {
            MLINK_FUNC(void, 0x0347C41C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void ResetToIdle()
        {
            MLINK_FUNC(void, 0x0347C5CC, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void TickNexAsyncProcess()
        {
            MLINK_FUNC(void, 0x0347C7A8, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void NetworkPlayerConnectionComplete(NQRNetworkPlayer *player)
        {
            MLINK_FUNC(void, 0x0347D0C4, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *)(this, player);
        }

        void PollUnconnectedStations()
        {
            MLINK_FUNC(void, 0x0347D19C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void SendJoinFailedData(uint64_t stationId, uint32_t localPlayerIndex, EJoinFailedReason reason)
        {
            MLINK_FUNC(void, 0x0347DEF0, NQRNetworkManager_Lan_WiiU *, uint64_t, uint32_t, EJoinFailedReason)(this, stationId, localPlayerIndex,
                                                                                                              reason);
        }

        void SendSaveTransferAckPacket()
        {
            MLINK_FUNC(void, 0x0347DFA8, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void PollReceiveData()
        {
            MLINK_FUNC(void, 0x0347DFCC, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void TickSaveTransferData()
        {
            MLINK_FUNC(void, 0x0347EA74, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void RemoveLocalClientPlayers(int userIndex)
        {
            MLINK_FUNC(void, 0x0347EBEC, NQRNetworkManager_Lan_WiiU *, int)(this, userIndex);
        }

        void ErrorHandlingTick()
        {
            MLINK_FUNC(void, 0x0347ED7C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void TickFromThread()
        {
            MLINK_FUNC(void, 0x0347F0D8, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void RunTickThread()
        {
            MLINK_FUNC(void, 0x0347F618, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Initialise()
        {
            MLINK_FUNC(void, 0x0347F880, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void Terminate()
        {
            MLINK_FUNC(void, 0x0347F948, NQRNetworkManager_Lan_WiiU *)(this);
        }

        eNQRNetworkManagerInternalState GetState()
        {
            return MLINK_FUNC(eNQRNetworkManagerInternalState, 0x0347FA00, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool IsHost()
        {
            return MLINK_FUNC(bool, 0x0347FA08, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool IsReadyToPlayOrIdle()
        {
            return MLINK_FUNC(bool, 0x0347FA10, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool IsInSession()
        {
            return MLINK_FUNC(bool, 0x0347FA3C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool IsMatchmakingEnabled()
        {
            return MLINK_FUNC(bool, 0x0347FA44, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void SetLocalPlayersAndSync()
        {
            MLINK_FUNC(void, 0x0347FA4C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void StartGame()
        {
            MLINK_FUNC(void, 0x03483364, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void ClearRichPresenceCustomData()
        {
            MLINK_FUNC(void, 0x034833B8, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void LeaveRoom(bool keepSession)
        {
            MLINK_FUNC(void, 0x0348343C, NQRNetworkManager_Lan_WiiU *, bool)(this, keepSession);
        }

        void EndGame()
        {
            MLINK_FUNC(void, 0x034836AC, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool SessionHasSpace(int playerCount)
        {
            return MLINK_FUNC(bool, 0x034836B0, NQRNetworkManager_Lan_WiiU *, int)(this, playerCount);
        }

        bool SessionHasMii(int userIndex)
        {
            return MLINK_FUNC(bool, 0x0348370C, NQRNetworkManager_Lan_WiiU *, int)(this, userIndex);
        }

        void UpdateRemotePlay()
        {
            MLINK_FUNC(void, 0x03483800, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void SendJoinData()
        {
            MLINK_FUNC(void, 0x034838E4, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void AddLocalPlayerByUserIndex(int userIndex)
        {
            MLINK_FUNC(void, 0x03483C5C, NQRNetworkManager_Lan_WiiU *, int)(this, userIndex);
        }

        void SendLeaveData(uint32_t userIndex)
        {
            MLINK_FUNC(void, 0x0348437C, NQRNetworkManager_Lan_WiiU *, uint32_t)(this, userIndex);
        }

        void RemoveLocalPlayerByUserIndex(int userIndex)
        {
            MLINK_FUNC(void, 0x034843CC, NQRNetworkManager_Lan_WiiU *, int)(this, userIndex);
        }

        int GetPlayerCount()
        {
            return MLINK_FUNC(int, 0x034846A4, NQRNetworkManager_Lan_WiiU *)(this);
        }

        int GetOnlinePlayerCount()
        {
            return MLINK_FUNC(int, 0x034846B4, NQRNetworkManager_Lan_WiiU *)(this);
        }

        NQRNetworkPlayer *GetPlayerIfReady(NQRNetworkPlayer *player)
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x03484824, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *)(this, player);
        }

        NQRNetworkPlayer *GetPlayerByIndex(int index)
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x03484874, NQRNetworkManager_Lan_WiiU *, int)(this, index);
        }

        NQRNetworkPlayer *GetPlayerBySmallId(int smallId)
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x034848A4, NQRNetworkManager_Lan_WiiU *, int)(this, smallId);
        }

        NQRNetworkPlayer *GetPlayerByXuid(PlayerUID uid)
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x03484994, NQRNetworkManager_Lan_WiiU *, PlayerUID)(this, uid);
        }

        NQRNetworkPlayer *GetLocalPlayerByUserIndex(int userIndex)
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x03485210, NQRNetworkManager_Lan_WiiU *, int)(this, userIndex);
        }

        NQRNetworkPlayer *GetHostPlayer()
        {
            return MLINK_FUNC(NQRNetworkPlayer *, 0x0348532C, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void SignalInitialiseAfterOnline()
        {
            MLINK_FUNC(void, 0x03485384, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void LocalDataSend(NQRNetworkPlayer *sender, NQRNetworkPlayer *receiver, const void *data, uint32_t size)
        {
            MLINK_FUNC(void, 0x03485394, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *, NQRNetworkPlayer *, const void *,
                       uint32_t)(this, sender, receiver, data, size);
        }

        void RemoteDataSend(NQRNetworkPlayer *sender, NQRNetworkPlayer *receiver, const void *data, uint32_t size)
        {
            MLINK_FUNC(void, 0x034853B0, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *, NQRNetworkPlayer *, const void *,
                       uint32_t)(this, sender, receiver, data, size);
        }

        int GetSessionIndex(NQRNetworkPlayer *player)
        {
            return MLINK_FUNC(int, 0x03485438, NQRNetworkManager_Lan_WiiU *, NQRNetworkPlayer *)(this, player);
        }

        int GetJoiningReadyPercentage()
        {
            return MLINK_FUNC(int, 0x03485AB4, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool isAdhocConnected()
        {
            return MLINK_FUNC(bool, 0x03486164, NQRNetworkManager_Lan_WiiU *)(this);
        }

        void connectToAdhoc()
        {
            MLINK_FUNC(void, 0x03486174, NQRNetworkManager_Lan_WiiU *)(this);
        }

        bool isLanConnected()
        {
            return MLINK_FUNC(bool, 0x034861EC, NQRNetworkManager_Lan_WiiU *)(this);
        }

        uint8_t field_0xB0[0xF4C];
    };
    MC_CHECK_SIZE(NQRNetworkManager_Lan_WiiU, 0xFFC);
} // namespace mc
