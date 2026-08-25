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
        uint32_t field_0x160;
        uint32_t field_0x164;
        uint32_t field_0x168;
        uint32_t field_0x16C;
        uint32_t field_0x170;
        uint32_t field_0x174;
        uint32_t field_0x178;
        uint32_t field_0x17C;
        uint32_t field_0x180;
        uint32_t field_0x184;
        uint32_t field_0x188;
        uint32_t field_0x18C;
        uint32_t field_0x190;
        uint32_t field_0x194;
        uint32_t field_0x198;
        uint32_t field_0x19C;
        uint32_t field_0x1A0;
        uint32_t field_0x1A4;
        uint32_t field_0x1A8;
        uint32_t field_0x1AC;
        uint32_t field_0x1B0;
        uint32_t field_0x1B4;
        uint32_t field_0x1B8;
        uint32_t field_0x1BC;
        uint32_t field_0x1C0;
        uint32_t field_0x1C4;
        uint32_t field_0x1C8;
        uint32_t field_0x1CC;
        uint32_t field_0x1D0;
        uint32_t field_0x1D4;
        uint32_t field_0x1D8;
        uint32_t field_0x1DC;
        uint32_t field_0x1E0;
        uint32_t field_0x1E4;
        uint32_t field_0x1E8;
        uint32_t field_0x1EC;
        uint32_t field_0x1F0;
        uint32_t field_0x1F4;
        uint32_t field_0x1F8;
        uint32_t field_0x1FC;
        uint32_t field_0x200;
        uint32_t field_0x204;
        uint32_t field_0x208;
        uint32_t field_0x20C;
        uint32_t field_0x210;
        uint32_t field_0x214;
        uint32_t field_0x218;
        uint32_t field_0x21C;
        uint32_t field_0x220;
        uint32_t field_0x224;
        uint32_t field_0x228;
        uint32_t field_0x22C;
        uint32_t field_0x230;
        uint32_t field_0x234;
        uint32_t field_0x238;
        uint32_t field_0x23C;
        uint32_t field_0x240;
        uint32_t field_0x244;
        uint32_t field_0x248;
        uint32_t field_0x24C;
        uint32_t field_0x250;
        uint32_t field_0x254;
        uint32_t field_0x258;
        uint32_t field_0x25C;
        uint32_t field_0x260;
        uint32_t field_0x264;
        uint32_t field_0x268;
        uint32_t field_0x26C;
        uint32_t field_0x270;
        uint32_t field_0x274;
        uint32_t field_0x278;
        uint32_t field_0x27C;
        uint32_t field_0x280;
        uint32_t field_0x284;
        uint32_t field_0x288;
        uint32_t field_0x28C;
        uint32_t field_0x290;
        uint32_t field_0x294;
        uint32_t field_0x298;
        uint32_t field_0x29C;
        uint32_t field_0x2A0;
        uint32_t field_0x2A4;
        uint32_t field_0x2A8;
        uint32_t field_0x2AC;
        uint32_t field_0x2B0;
        uint32_t field_0x2B4;
        uint32_t field_0x2B8;
        uint32_t field_0x2BC;
        uint32_t field_0x2C0;
        uint32_t field_0x2C4;
        uint32_t field_0x2C8;
        uint32_t field_0x2CC;
        uint32_t field_0x2D0;
        uint32_t field_0x2D4;
        uint32_t field_0x2D8;
        uint32_t field_0x2DC;
        uint32_t field_0x2E0;
        uint32_t field_0x2E4;
        uint32_t field_0x2E8;
        uint32_t field_0x2EC;
        uint32_t field_0x2F0;
        uint32_t field_0x2F4;
        uint32_t field_0x2F8;
        uint32_t field_0x2FC;
        uint32_t field_0x300;
        uint32_t field_0x304;
        uint32_t field_0x308;
        uint32_t field_0x30C;
        uint32_t field_0x310;
        uint32_t field_0x314;
        uint32_t field_0x318;
        uint32_t field_0x31C;
        uint32_t field_0x320;
        uint32_t field_0x324;
        uint32_t field_0x328;
        uint32_t field_0x32C;
        uint32_t field_0x330;
        uint32_t field_0x334;
        uint32_t field_0x338;
        uint32_t field_0x33C;
        uint32_t field_0x340;
        uint32_t field_0x344;
        uint32_t field_0x348;
        uint32_t field_0x34C;
        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
        uint32_t field_0x370;
        uint32_t field_0x374;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
        uint32_t field_0x388;
        uint32_t field_0x38C;
        uint32_t field_0x390;
        uint32_t field_0x394;
        uint32_t field_0x398;
        uint32_t field_0x39C;
        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
        uint32_t field_0x3B8;
        uint32_t field_0x3BC;
        uint32_t field_0x3C0;
        uint32_t field_0x3C4;
        uint32_t field_0x3C8;
        uint32_t field_0x3CC;
        uint32_t field_0x3D0;
        uint32_t field_0x3D4;
        uint32_t field_0x3D8;
        uint32_t field_0x3DC;
        uint32_t field_0x3E0;
        uint32_t field_0x3E4;
        uint32_t field_0x3E8;
        uint32_t field_0x3EC;
        uint32_t field_0x3F0;
        uint32_t field_0x3F4;
        uint32_t field_0x3F8;
        uint32_t field_0x3FC;
        uint32_t field_0x400;
        uint32_t field_0x404;
        uint32_t field_0x408;
        uint32_t field_0x40C;
        uint32_t field_0x410;
        uint32_t field_0x414;
        uint32_t field_0x418;
        uint32_t field_0x41C;
        uint32_t field_0x420;
        uint32_t field_0x424;
        uint32_t field_0x428;
        uint32_t field_0x42C;
        uint32_t field_0x430;
        uint32_t field_0x434;
        uint32_t field_0x438;
        uint32_t field_0x43C;
        uint32_t field_0x440;
        uint32_t field_0x444;
        uint32_t field_0x448;
        uint32_t field_0x44C;
        uint32_t field_0x450;
        uint32_t field_0x454;
        uint32_t field_0x458;
        uint32_t field_0x45C;
        uint32_t field_0x460;
        uint32_t field_0x464;
        uint32_t field_0x468;
        uint32_t field_0x46C;
        uint32_t field_0x470;
        uint32_t field_0x474;
        uint32_t field_0x478;
        uint32_t field_0x47C;
        uint32_t field_0x480;
        uint32_t field_0x484;
        uint32_t field_0x488;
        uint32_t field_0x48C;
        uint32_t field_0x490;
        uint32_t field_0x494;
        uint32_t field_0x498;
        uint32_t field_0x49C;
        uint32_t field_0x4A0;
        uint32_t field_0x4A4;
        uint32_t field_0x4A8;
        uint32_t field_0x4AC;
        uint32_t field_0x4B0;
        uint32_t field_0x4B4;
        uint32_t field_0x4B8;
        uint32_t field_0x4BC;
        uint32_t field_0x4C0;
        uint32_t field_0x4C4;
        uint32_t field_0x4C8;
        uint32_t field_0x4CC;
        uint32_t field_0x4D0;
        uint32_t field_0x4D4;
        uint32_t field_0x4D8;
        uint32_t field_0x4DC;
        uint32_t field_0x4E0;
        uint32_t field_0x4E4;
        uint32_t field_0x4E8;
        uint32_t field_0x4EC;
        uint32_t field_0x4F0;
        uint32_t field_0x4F4;
        uint32_t field_0x4F8;
        uint32_t field_0x4FC;
        uint32_t field_0x500;
        uint32_t field_0x504;
        uint32_t field_0x508;
        uint32_t field_0x50C;
        uint32_t field_0x510;
        uint32_t field_0x514;
        uint32_t field_0x518;
        uint32_t field_0x51C;
        uint32_t field_0x520;
        uint32_t field_0x524;
        uint32_t field_0x528;
        uint32_t field_0x52C;
        uint32_t field_0x530;
        uint32_t field_0x534;
        uint32_t field_0x538;
        uint32_t field_0x53C;
        uint32_t field_0x540;
        uint32_t field_0x544;
        uint32_t field_0x548;
        uint32_t field_0x54C;
        uint32_t field_0x550;
        uint32_t field_0x554;
        uint32_t field_0x558;
        uint32_t field_0x55C;
        uint32_t field_0x560;
        uint32_t field_0x564;
        uint32_t field_0x568;
        uint32_t field_0x56C;
        uint32_t field_0x570;
        uint32_t field_0x574;
        uint32_t field_0x578;
        uint32_t field_0x57C;
        uint32_t field_0x580;
        uint32_t field_0x584;
        uint32_t field_0x588;
        uint32_t field_0x58C;
        uint32_t field_0x590;
        uint32_t field_0x594;
        uint32_t field_0x598;
        uint32_t field_0x59C;
        uint32_t field_0x5A0;
        uint32_t field_0x5A4;
        uint32_t field_0x5A8;
        uint32_t field_0x5AC;
        uint32_t field_0x5B0;
        uint32_t field_0x5B4;
        uint32_t field_0x5B8;
        uint32_t field_0x5BC;
        uint32_t field_0x5C0;
        uint32_t field_0x5C4;
        uint32_t field_0x5C8;
        uint32_t field_0x5CC;
        uint32_t field_0x5D0;
        uint32_t field_0x5D4;
        uint32_t field_0x5D8;
        uint32_t field_0x5DC;
        uint32_t field_0x5E0;
        uint32_t field_0x5E4;
        uint32_t field_0x5E8;
        uint32_t field_0x5EC;
        uint32_t field_0x5F0;
        uint32_t field_0x5F4;
        uint32_t field_0x5F8;
        uint32_t field_0x5FC;
        uint32_t field_0x600;
        uint32_t field_0x604;
        uint32_t field_0x608;
        uint32_t field_0x60C;
        uint32_t field_0x610;
        uint32_t field_0x614;
        uint32_t field_0x618;
        uint32_t field_0x61C;
        uint32_t field_0x620;
        uint32_t field_0x624;
        uint32_t field_0x628;
        uint32_t field_0x62C;
        uint32_t field_0x630;
        uint32_t field_0x634;
        uint32_t field_0x638;
        uint32_t field_0x63C;
        uint32_t field_0x640;
        uint32_t field_0x644;
        uint32_t field_0x648;
        uint32_t field_0x64C;
        uint32_t field_0x650;
        uint32_t field_0x654;
        uint32_t field_0x658;
        uint32_t field_0x65C;
        uint32_t field_0x660;
        uint32_t field_0x664;
        uint32_t field_0x668;
        uint32_t field_0x66C;
        uint32_t field_0x670;
        uint32_t field_0x674;
        uint32_t field_0x678;
        uint32_t field_0x67C;
        uint32_t field_0x680;
        uint32_t field_0x684;
        uint32_t field_0x688;
        uint32_t field_0x68C;
        uint32_t field_0x690;
        uint32_t field_0x694;
        uint32_t field_0x698;
        uint32_t field_0x69C;
        uint32_t field_0x6A0;
        uint32_t field_0x6A4;
        uint32_t field_0x6A8;
        uint32_t field_0x6AC;
        uint32_t field_0x6B0;
        uint32_t field_0x6B4;
        uint32_t field_0x6B8;
        uint32_t field_0x6BC;
        uint32_t field_0x6C0;
        uint32_t field_0x6C4;
        uint32_t field_0x6C8;
        uint32_t field_0x6CC;
        uint32_t field_0x6D0;
        uint32_t field_0x6D4;
        uint32_t field_0x6D8;
        uint32_t field_0x6DC;
        uint32_t field_0x6E0;
        uint32_t field_0x6E4;
        uint32_t field_0x6E8;
        uint32_t field_0x6EC;
        uint32_t field_0x6F0;
        uint32_t field_0x6F4;
        uint32_t field_0x6F8;
        uint32_t field_0x6FC;
        uint32_t field_0x700;
        uint32_t field_0x704;
        uint32_t field_0x708;
        uint32_t field_0x70C;
        uint32_t field_0x710;
        uint32_t field_0x714;
        uint32_t field_0x718;
        uint32_t field_0x71C;
        uint32_t field_0x720;
        uint32_t field_0x724;
        uint32_t field_0x728;
        uint32_t field_0x72C;
        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
        uint32_t field_0x758;
        uint32_t field_0x75C;
        uint32_t field_0x760;
        uint32_t field_0x764;
        uint32_t field_0x768;
        uint32_t field_0x76C;
        uint32_t field_0x770;
        uint32_t field_0x774;
        uint32_t field_0x778;
        uint32_t field_0x77C;
        uint32_t field_0x780;
        uint32_t field_0x784;
        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint32_t field_0x790;
        uint32_t field_0x794;
        uint32_t field_0x798;
        uint32_t field_0x79C;
        uint32_t field_0x7A0;
        uint32_t field_0x7A4;
        uint32_t field_0x7A8;
        uint32_t field_0x7AC;
        uint32_t field_0x7B0;
        uint32_t field_0x7B4;
        uint32_t field_0x7B8;
        uint32_t field_0x7BC;
        uint32_t field_0x7C0;
        uint32_t field_0x7C4;
        uint32_t field_0x7C8;
        uint32_t field_0x7CC;
        uint32_t field_0x7D0;
        uint32_t field_0x7D4;
        uint32_t field_0x7D8;
        uint32_t field_0x7DC;
        uint32_t field_0x7E0;
        uint32_t field_0x7E4;
        uint32_t field_0x7E8;
        uint32_t field_0x7EC;
        uint32_t field_0x7F0;
        uint32_t field_0x7F4;
        uint32_t field_0x7F8;
        uint32_t field_0x7FC;
        uint32_t field_0x800;
        uint32_t field_0x804;
        uint32_t field_0x808;
        uint32_t field_0x80C;
        uint32_t field_0x810;
        uint32_t field_0x814;
        uint32_t field_0x818;
        uint32_t field_0x81C;
        uint32_t field_0x820;
        uint32_t field_0x824;
        uint32_t field_0x828;
        uint32_t field_0x82C;
        uint32_t field_0x830;
        uint32_t field_0x834;
        uint32_t field_0x838;
        uint32_t field_0x83C;
        uint32_t field_0x840;
        uint32_t field_0x844;
        uint32_t field_0x848;
        uint32_t field_0x84C;
        uint32_t field_0x850;
        uint32_t field_0x854;
        uint32_t field_0x858;
        uint32_t field_0x85C;
        uint32_t field_0x860;
        uint32_t field_0x864;
        uint32_t field_0x868;
        uint32_t field_0x86C;
        uint32_t field_0x870;
        uint32_t field_0x874;
        uint32_t field_0x878;
        uint32_t field_0x87C;
        uint32_t field_0x880;
        uint32_t field_0x884;
        uint32_t field_0x888;
        uint32_t field_0x88C;
        uint32_t field_0x890;
        uint32_t field_0x894;
        uint32_t field_0x898;
        uint32_t field_0x89C;
        uint32_t field_0x8A0;
        uint32_t field_0x8A4;
        uint32_t field_0x8A8;
        uint32_t field_0x8AC;
        uint32_t field_0x8B0;
        uint32_t field_0x8B4;
        uint32_t field_0x8B8;
        uint32_t field_0x8BC;
        uint32_t field_0x8C0;
        uint32_t field_0x8C4;
        uint32_t field_0x8C8;
        uint32_t field_0x8CC;
        uint32_t field_0x8D0;
        uint32_t field_0x8D4;
        uint32_t field_0x8D8;
        uint32_t field_0x8DC;
        uint32_t field_0x8E0;
        uint32_t field_0x8E4;
        uint32_t field_0x8E8;
        uint32_t field_0x8EC;
        uint32_t field_0x8F0;
        uint32_t field_0x8F4;
        uint32_t field_0x8F8;
        uint32_t field_0x8FC;
        uint32_t field_0x900;
        uint32_t field_0x904;
        uint32_t field_0x908;
        uint32_t field_0x90C;
        uint32_t field_0x910;
        uint32_t field_0x914;
        uint32_t field_0x918;
        uint32_t field_0x91C;
        uint32_t field_0x920;
        uint32_t field_0x924;
        uint32_t field_0x928;
        uint32_t field_0x92C;
        uint32_t field_0x930;
        uint32_t field_0x934;
        uint32_t field_0x938;
        uint32_t field_0x93C;
        uint32_t field_0x940;
        uint32_t field_0x944;
        uint32_t field_0x948;
        uint32_t field_0x94C;
        uint32_t field_0x950;
        uint32_t field_0x954;
        uint32_t field_0x958;
        uint32_t field_0x95C;
        uint32_t field_0x960;
        uint32_t field_0x964;
        uint32_t field_0x968;
        uint32_t field_0x96C;
        uint32_t field_0x970;
        uint32_t field_0x974;
        uint32_t field_0x978;
        uint32_t field_0x97C;
        uint32_t field_0x980;
        uint32_t field_0x984;
        uint32_t field_0x988;
        uint32_t field_0x98C;
        uint32_t field_0x990;
        uint32_t field_0x994;
        uint32_t field_0x998;
        uint32_t field_0x99C;
        uint32_t field_0x9A0;
        uint32_t field_0x9A4;
        uint32_t field_0x9A8;
        uint32_t field_0x9AC;
        uint32_t field_0x9B0;
        uint32_t field_0x9B4;
        uint32_t field_0x9B8;
        uint32_t field_0x9BC;
        uint32_t field_0x9C0;
        uint32_t field_0x9C4;
        uint32_t field_0x9C8;
        uint32_t field_0x9CC;
        uint32_t field_0x9D0;
        uint32_t field_0x9D4;
        uint32_t field_0x9D8;
        uint32_t field_0x9DC;
        uint32_t field_0x9E0;
        uint32_t field_0x9E4;
        uint32_t field_0x9E8;
        uint32_t field_0x9EC;
        uint32_t field_0x9F0;
        uint32_t field_0x9F4;
        uint32_t field_0x9F8;
        uint32_t field_0x9FC;
        uint32_t field_0xA00;
        uint32_t field_0xA04;
        uint32_t field_0xA08;
        uint32_t field_0xA0C;
        uint32_t field_0xA10;
        uint32_t field_0xA14;
        uint32_t field_0xA18;
        uint32_t field_0xA1C;
        uint32_t field_0xA20;
        uint32_t field_0xA24;
        uint32_t field_0xA28;
        uint32_t field_0xA2C;
        uint32_t field_0xA30;
        uint32_t field_0xA34;
        uint32_t field_0xA38;
        uint32_t field_0xA3C;
        uint32_t field_0xA40;
        uint32_t field_0xA44;
        uint32_t field_0xA48;
        uint32_t field_0xA4C;
        uint32_t field_0xA50;
        uint32_t field_0xA54;
        uint32_t field_0xA58;
        uint32_t field_0xA5C;
        uint32_t field_0xA60;
        uint32_t field_0xA64;
        uint32_t field_0xA68;
        uint32_t field_0xA6C;
        uint32_t field_0xA70;
        uint32_t field_0xA74;
        uint32_t field_0xA78;
        uint32_t field_0xA7C;
        uint32_t field_0xA80;
        uint32_t field_0xA84;
        uint32_t field_0xA88;
        uint32_t field_0xA8C;
        uint32_t field_0xA90;
        uint32_t field_0xA94;
        uint32_t field_0xA98;
        uint32_t field_0xA9C;
        uint32_t field_0xAA0;
        uint32_t field_0xAA4;
        uint32_t field_0xAA8;
        uint32_t field_0xAAC;
        uint32_t field_0xAB0;
        uint32_t field_0xAB4;
        uint32_t field_0xAB8;
        uint32_t field_0xABC;
        uint32_t field_0xAC0;
        uint32_t field_0xAC4;
        uint32_t field_0xAC8;
        uint32_t field_0xACC;
        uint32_t field_0xAD0;
        uint32_t field_0xAD4;
        uint32_t field_0xAD8;
        uint32_t field_0xADC;
        uint32_t field_0xAE0;
        uint32_t field_0xAE4;
        uint32_t field_0xAE8;
        uint32_t field_0xAEC;
        uint32_t field_0xAF0;
        uint32_t field_0xAF4;
        uint32_t field_0xAF8;
        uint32_t field_0xAFC;
        uint32_t field_0xB00;
        uint32_t field_0xB04;
        uint32_t field_0xB08;
        uint32_t field_0xB0C;
        uint32_t field_0xB10;
        uint32_t field_0xB14;
        uint32_t field_0xB18;
        uint32_t field_0xB1C;
        uint32_t field_0xB20;
        uint32_t field_0xB24;
        uint32_t field_0xB28;
        uint32_t field_0xB2C;
        uint32_t field_0xB30;
        uint32_t field_0xB34;
        uint32_t field_0xB38;
        uint32_t field_0xB3C;
        uint32_t field_0xB40;
        uint32_t field_0xB44;
        uint32_t field_0xB48;
        uint32_t field_0xB4C;
        uint32_t field_0xB50;
        uint32_t field_0xB54;
        uint32_t field_0xB58;
        uint32_t field_0xB5C;
        uint32_t field_0xB60;
        uint32_t field_0xB64;
        uint32_t field_0xB68;
        uint32_t field_0xB6C;
        uint32_t field_0xB70;
        uint32_t field_0xB74;
        uint32_t field_0xB78;
        uint32_t field_0xB7C;
        uint32_t field_0xB80;
        uint32_t field_0xB84;
        uint32_t field_0xB88;
        uint32_t field_0xB8C;
        uint32_t field_0xB90;
        uint32_t field_0xB94;
        uint32_t field_0xB98;
        uint32_t field_0xB9C;
        uint32_t field_0xBA0;
        uint32_t field_0xBA4;
        uint32_t field_0xBA8;
        uint32_t field_0xBAC;
        uint32_t field_0xBB0;
        uint32_t field_0xBB4;
        uint32_t field_0xBB8;
        uint32_t field_0xBBC;
        uint32_t field_0xBC0;
        uint32_t field_0xBC4;
        uint32_t field_0xBC8;
        uint32_t field_0xBCC;
        uint32_t field_0xBD0;
        uint32_t field_0xBD4;
        uint32_t field_0xBD8;
        uint32_t field_0xBDC;
        uint32_t field_0xBE0;
        uint32_t field_0xBE4;
        uint32_t field_0xBE8;
        uint32_t field_0xBEC;
        uint32_t field_0xBF0;
        uint32_t field_0xBF4;
        uint32_t field_0xBF8;
        uint32_t field_0xBFC;
        uint32_t field_0xC00;
        uint32_t field_0xC04;
        uint32_t field_0xC08;
        uint32_t field_0xC0C;
        uint32_t field_0xC10;
        uint32_t field_0xC14;
        uint32_t field_0xC18;
        uint32_t field_0xC1C;
        uint32_t field_0xC20;
        uint32_t field_0xC24;
        uint32_t field_0xC28;
        uint32_t field_0xC2C;
        uint32_t field_0xC30;
        uint32_t field_0xC34;
        uint32_t field_0xC38;
        uint32_t field_0xC3C;
        uint32_t field_0xC40;
        uint32_t field_0xC44;
        uint32_t field_0xC48;
        uint32_t field_0xC4C;
        uint32_t field_0xC50;
        uint32_t field_0xC54;
        uint32_t field_0xC58;
        uint32_t field_0xC5C;
        uint32_t field_0xC60;
        uint32_t field_0xC64;
        uint32_t field_0xC68;
        uint32_t field_0xC6C;
        uint32_t field_0xC70;
        uint32_t field_0xC74;
        uint32_t field_0xC78;
        uint32_t field_0xC7C;
        uint32_t field_0xC80;
        uint32_t field_0xC84;
        uint32_t field_0xC88;
        uint32_t field_0xC8C;
        uint32_t field_0xC90;
        uint32_t field_0xC94;
        uint32_t field_0xC98;
        uint32_t field_0xC9C;
        uint32_t field_0xCA0;
        uint32_t field_0xCA4;
        uint32_t field_0xCA8;
        uint32_t field_0xCAC;
        uint32_t field_0xCB0;
        uint32_t field_0xCB4;
        uint32_t field_0xCB8;
        uint32_t field_0xCBC;
        uint32_t field_0xCC0;
        uint32_t field_0xCC4;
        uint32_t field_0xCC8;
        uint32_t field_0xCCC;
        uint32_t field_0xCD0;
        uint32_t field_0xCD4;
        uint32_t field_0xCD8;
        uint32_t field_0xCDC;
        uint32_t field_0xCE0;
        uint32_t field_0xCE4;
        uint32_t field_0xCE8;
        uint32_t field_0xCEC;
        uint32_t field_0xCF0;
        uint32_t field_0xCF4;
        uint32_t field_0xCF8;
        uint32_t field_0xCFC;
        uint32_t field_0xD00;
        uint32_t field_0xD04;
        uint32_t field_0xD08;
        uint32_t field_0xD0C;
        uint32_t field_0xD10;
        uint32_t field_0xD14;
        uint32_t field_0xD18;
        uint32_t field_0xD1C;
        uint32_t field_0xD20;
        uint32_t field_0xD24;
        uint32_t field_0xD28;
        uint32_t field_0xD2C;
        uint32_t field_0xD30;
        uint32_t field_0xD34;
        uint32_t field_0xD38;
        uint32_t field_0xD3C;
        uint32_t field_0xD40;
        uint32_t field_0xD44;
        uint32_t field_0xD48;
        uint32_t field_0xD4C;
        uint32_t field_0xD50;
        uint32_t field_0xD54;
        uint32_t field_0xD58;
        uint32_t field_0xD5C;
        uint32_t field_0xD60;
        uint32_t field_0xD64;
        uint32_t field_0xD68;
        uint32_t field_0xD6C;
        uint32_t field_0xD70;
        uint32_t field_0xD74;
        uint32_t field_0xD78;
        uint32_t field_0xD7C;
        uint32_t field_0xD80;
        uint32_t field_0xD84;
        uint32_t field_0xD88;
        uint32_t field_0xD8C;
        uint32_t field_0xD90;
        uint32_t field_0xD94;
        uint32_t field_0xD98;
        uint32_t field_0xD9C;
        uint32_t field_0xDA0;
        uint32_t field_0xDA4;
        uint32_t field_0xDA8;
        uint32_t field_0xDAC;
        uint32_t field_0xDB0;
        uint32_t field_0xDB4;
        uint32_t field_0xDB8;
        uint32_t field_0xDBC;
        uint32_t field_0xDC0;
        uint32_t field_0xDC4;
        uint32_t field_0xDC8;
        uint32_t field_0xDCC;
        uint32_t field_0xDD0;
        uint32_t field_0xDD4;
        uint32_t field_0xDD8;
        uint32_t field_0xDDC;
        uint32_t field_0xDE0;
        uint32_t field_0xDE4;
        uint32_t field_0xDE8;
        uint32_t field_0xDEC;
        uint32_t field_0xDF0;
        uint32_t field_0xDF4;
        uint32_t field_0xDF8;
        uint32_t field_0xDFC;
        uint32_t field_0xE00;
        uint32_t field_0xE04;
        uint32_t field_0xE08;
        uint32_t field_0xE0C;
        uint32_t field_0xE10;
        uint32_t field_0xE14;
        uint32_t field_0xE18;
        uint32_t field_0xE1C;
        uint32_t field_0xE20;
        uint32_t field_0xE24;
        uint32_t field_0xE28;
        uint32_t field_0xE2C;
        uint32_t field_0xE30;
        uint32_t field_0xE34;
        uint32_t field_0xE38;
        uint32_t field_0xE3C;
        uint32_t field_0xE40;
        uint32_t field_0xE44;
        uint32_t field_0xE48;
        uint32_t field_0xE4C;
        uint32_t field_0xE50;
        uint32_t field_0xE54;
        uint32_t field_0xE58;
        uint32_t field_0xE5C;
        uint32_t field_0xE60;
        uint32_t field_0xE64;
        uint32_t field_0xE68;
        uint32_t field_0xE6C;
        uint32_t field_0xE70;
        uint32_t field_0xE74;
        uint32_t field_0xE78;
        uint32_t field_0xE7C;
        uint32_t field_0xE80;
        uint32_t field_0xE84;
        uint32_t field_0xE88;
        uint32_t field_0xE8C;
        uint32_t field_0xE90;
        uint32_t field_0xE94;
        uint32_t field_0xE98;
        uint32_t field_0xE9C;
        uint32_t field_0xEA0;
        uint32_t field_0xEA4;
        uint32_t field_0xEA8;
        uint32_t field_0xEAC;
        uint32_t field_0xEB0;
        uint32_t field_0xEB4;
        uint32_t field_0xEB8;
        uint32_t field_0xEBC;
        uint32_t field_0xEC0;
        uint32_t field_0xEC4;
        uint32_t field_0xEC8;
        uint32_t field_0xECC;
        uint32_t field_0xED0;
        uint32_t field_0xED4;
        uint32_t field_0xED8;
        uint32_t field_0xEDC;
        uint32_t field_0xEE0;
        uint32_t field_0xEE4;
        uint32_t field_0xEE8;
        uint32_t field_0xEEC;
        uint32_t field_0xEF0;
        uint32_t field_0xEF4;
        uint32_t field_0xEF8;
        uint32_t field_0xEFC;
        uint32_t field_0xF00;
        uint32_t field_0xF04;
        uint32_t field_0xF08;
        uint32_t field_0xF0C;
        uint32_t field_0xF10;
        uint32_t field_0xF14;
        uint32_t field_0xF18;
        uint32_t field_0xF1C;
        uint32_t field_0xF20;
        uint32_t field_0xF24;
        uint32_t field_0xF28;
        uint32_t field_0xF2C;
        uint32_t field_0xF30;
        uint32_t field_0xF34;
        uint32_t field_0xF38;
        uint32_t field_0xF3C;
        uint32_t field_0xF40;
        uint32_t field_0xF44;
        uint32_t field_0xF48;
        uint32_t field_0xF4C;
        uint32_t field_0xF50;
        uint32_t field_0xF54;
        uint32_t field_0xF58;
        uint32_t field_0xF5C;
        uint32_t field_0xF60;
        uint32_t field_0xF64;
        uint32_t field_0xF68;
        uint32_t field_0xF6C;
        uint32_t field_0xF70;
        uint32_t field_0xF74;
        uint32_t field_0xF78;
        uint32_t field_0xF7C;
        uint32_t field_0xF80;
        uint32_t field_0xF84;
        uint32_t field_0xF88;
        uint32_t field_0xF8C;
        uint32_t field_0xF90;
        uint32_t field_0xF94;
        uint32_t field_0xF98;
        uint32_t field_0xF9C;
        uint32_t field_0xFA0;
        uint32_t field_0xFA4;
        uint32_t field_0xFA8;
        uint32_t field_0xFAC;
        uint32_t field_0xFB0;
        uint32_t field_0xFB4;
        uint32_t field_0xFB8;
        uint32_t field_0xFBC;
        uint32_t field_0xFC0;
        uint32_t field_0xFC4;
        uint32_t field_0xFC8;
        uint32_t field_0xFCC;
        uint32_t field_0xFD0;
        uint32_t field_0xFD4;
        uint32_t field_0xFD8;
        uint32_t field_0xFDC;
        uint32_t field_0xFE0;
        uint32_t field_0xFE4;
        uint32_t field_0xFE8;
        uint32_t field_0xFEC;
        uint32_t field_0xFF0;
        uint32_t field_0xFF4;
        uint32_t field_0xFF8;
    };
    MC_CHECK_SIZE(NQRNetworkManager_Lan_WiiU, 0xFFC);
} // namespace mc
