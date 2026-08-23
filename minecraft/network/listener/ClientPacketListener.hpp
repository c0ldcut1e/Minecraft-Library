#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "PacketListener.hpp"
#include "Socket.hpp"
#include "client/Minecraft.hpp"
#include "internal/VTable.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/DisconnectPacket.hpp"
#include "network/packet/Packet.hpp"
#include "network/packet/clientbound/ClientboundSoundPacket.hpp"
#include "utils/Common.hpp"

namespace mc
{
    class Minecraft;

    class ClientboundSoundPacket;

    class ClientPacketListener : public PacketListener
    {
    public:
        ClientPacketListener(Minecraft *minecraft, Socket *socket, int playerIndex)
        {
            MLINK_FUNC(void, 0x0303DB0C, ClientPacketListener *, Minecraft *, Socket *, int)(this, minecraft, socket, playerIndex);
        }

        void handleSoundEvent(const mboost::shared_ptr<ClientboundSoundPacket> &packet)
        {
            MLINK_FUNC(void, 0x0306EB2C, ClientPacketListener *, const mboost::shared_ptr<ClientboundSoundPacket> &)(this, packet);
        }

        void send(const mboost::shared_ptr<Packet> &packet)
        {
            MLINK_FUNC(void, 0x0304A5D8, ClientPacketListener *, mboost::shared_ptr<Packet>)(this, packet);
        }

        void sendCommand(uint32_t commandAddr = 0x10303000)
        {
            MLINK_FUNC(void, 0x0304A5D8, ClientPacketListener *, uint32_t)(this, commandAddr);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0303DE10, ClientPacketListener *)(this);
        }

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
    };
    MC_CHECK_SIZE(ClientPacketListener, 0x98);

    class VTable_ClientPacketListener : public VTable
    {
    public:
        MC_VFUNC(void, ClientPacketListener, Dtor);
        MC_VFUNC(void, ClientPacketListener, onUnhandledPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, onDisconnect, DisconnectPacket::eDisconnectReason, void *);
        MC_VFUNC(bool, ClientPacketListener, canHandleAsyncPackets);
        MC_VFUNC(void, ClientPacketListener, handleAcceptedLogin, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleGetInfo, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAddEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAddExperienceOrb, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAddGlobalEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAddMob, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAddPainting, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAddPlayer, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAnimate1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAnimate2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAwardStat, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBlockDestruction, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBlockCollectionDestruction, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleOpenSignEditor, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBlockEntityData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBlockEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBlockUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBlockRegionUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChat1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChat2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChatAutoComplete1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChatAutoComplete2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChunkBlocksUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChunkVisibility, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChunkVisibilityArea, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMapItemData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerAck1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerAck2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerClose1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerClose2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerContent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerOpen, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerSetData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerSetSlot, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleCustomPayload1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleCustomPayload2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleDisconnect, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleEntityActionAtPosition, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleEntityEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleEntityLinkPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetEntityPassengersPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleExplosion, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleGameEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleKeepAlive1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleKeepAlive2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleLevelEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleLogin, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMoveEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMoveEntitySmall, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMovePlayer1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMovePlayer2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleParticleEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerAbilities1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerAbilities2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerInfo, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePreLogin1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePreLogin2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleRemoveEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleRemoveMobEffect, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleRespawn, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleRotateMob, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetCarriedItem1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetCarriedItem2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetEntityData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetEntityMotion, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetEquippedItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetExperience, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetHealth, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetPlayerTeamPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetSpawn, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetTime, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSoundEvent, const mboost::shared_ptr<ClientboundSoundPacket> &);
        MC_VFUNC(void, ClientPacketListener, handleTakeItemEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTeleportEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleUpdateAttributes, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleUpdateMobEffect, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerCombat, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleChangeDifficulty, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetCamera, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetBorder, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetTitles, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTabListCustomisation, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleResourcePack, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleBossUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleItemCooldown, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMoveVehicle1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMoveVehicle2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleServerSettingsChanged, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTexture, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTextureAndGeometry, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleUpdateProgress, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTextureChange, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTextureAndGeometryChange, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleUpdateGameRuleProgressPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleXZ, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleScoreboardPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleGameMode, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMapSelectInfo, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerReady, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePowerup, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleDamageIndicator, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleMiniGamePlayerSettingsUpdatePacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleClientCommand, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleClientInformation, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerButtonClick, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleContainerClick, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleInteract, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerAction, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerCommand, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePlayerInput, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSetCreativeModeSlot, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleSignUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleUseItemOn, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleUseItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTeleportToEntityPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleResourcePackResponse, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handlePaddleBoat, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleAcceptTeleportPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleCraftItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleTradeItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleDebugOptions, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleKickPlayer, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleGameCommand, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleVote, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, ClientPacketListener, handleClientboundSetPlayerTeamPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(bool, ClientPacketListener, isServerPacketListener);
    };
} // namespace mc
