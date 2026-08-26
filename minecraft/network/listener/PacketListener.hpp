#pragma once

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/ChunkVisibilityAreaPacket.hpp"
#include "network/packet/ChunkVisibilityPacket.hpp"
#include "network/packet/DisconnectPacket.hpp"
#include "network/packet/GameModePacket.hpp"
#include "network/packet/Packet.hpp"
#include "network/packet/ServerSettingsChangedPacket.hpp"
#include "network/packet/clientbound/ClientboundChatPacket.hpp"
#include "network/packet/clientbound/ClientboundKeepAlivePacket.hpp"
#include "network/packet/clientbound/ClientboundLoginPacket.hpp"
#include "network/packet/clientbound/ClientboundPlayerAbilitiesPacket.hpp"
#include "network/packet/clientbound/ClientboundPlayerPositionPacket.hpp"
#include "network/packet/clientbound/ClientboundPreLoginPacket.hpp"
#include "network/packet/clientbound/ClientboundRespawnPacket.hpp"
#include "network/packet/clientbound/ClientboundSetEntityDataPacket.hpp"
#include "network/packet/clientbound/ClientboundSetHealthPacket.hpp"
#include "network/packet/serverbound/ServerboundKeepAlivePacket.hpp"
#include "network/packet/serverbound/ServerboundMovePlayerPacket.hpp"
#include "utils/Common.hpp"

namespace mc
{
    class ClientboundSoundPacket;
    class PlayerInfoPacket;
    class VTable_PacketListener;

    class PacketListener
    {
    public:
        VTable_PacketListener *vtable;
    };
    MC_CHECK_SIZE(PacketListener, 0x4);

    class VTable_PacketListener : public VTable
    {
    public:
        MC_VFUNC(void, PacketListener, Dtor);
        MC_VFUNC(void, PacketListener, onUnhandledPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, onDisconnect, DisconnectPacket::eDisconnectReason, void *);
        MC_VFUNC(bool, PacketListener, canHandleAsyncPackets);
        MC_VFUNC(void, PacketListener, handleAcceptedLogin, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleGetInfo, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAddEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAddExperienceOrb, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAddGlobalEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAddMob, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAddPainting, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAddPlayer, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAnimate1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAnimate2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAwardStat, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBlockDestruction, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBlockCollectionDestruction, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleOpenSignEditor, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBlockEntityData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBlockEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBlockUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBlockRegionUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleChat1, mboost::shared_ptr<ClientboundChatPacket>);
        MC_VFUNC(void, PacketListener, handleChat2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleChatAutoComplete1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleChatAutoComplete2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleChunkBlocksUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleChunkVisibility, mboost::shared_ptr<ChunkVisibilityPacket>);
        MC_VFUNC(void, PacketListener, handleChunkVisibilityArea, mboost::shared_ptr<ChunkVisibilityAreaPacket>);
        MC_VFUNC(void, PacketListener, handleMapItemData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerAck1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerAck2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerClose1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerClose2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerContent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerOpen, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerSetData, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerSetSlot, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleCustomPayload1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleCustomPayload2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleDisconnect, mboost::shared_ptr<DisconnectPacket>);
        MC_VFUNC(void, PacketListener, handleEntityActionAtPosition, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleEntityEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleEntityLinkPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetEntityPassengersPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleExplosion, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleGameEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleKeepAlive1, mboost::shared_ptr<ClientboundKeepAlivePacket>);
        MC_VFUNC(void, PacketListener, handleKeepAlive2, mboost::shared_ptr<ServerboundKeepAlivePacket>);
        MC_VFUNC(void, PacketListener, handleLevelEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleLogin, mboost::shared_ptr<ClientboundLoginPacket>);
        MC_VFUNC(void, PacketListener, handleMoveEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleMoveEntitySmall, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleMovePlayer1, mboost::shared_ptr<ClientboundPlayerPositionPacket>);
        MC_VFUNC(void, PacketListener, handleMovePlayer2, mboost::shared_ptr<ServerboundMovePlayerPacket>);
        MC_VFUNC(void, PacketListener, handleParticleEvent, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerAbilities1, mboost::shared_ptr<ClientboundPlayerAbilitiesPacket>);
        MC_VFUNC(void, PacketListener, handlePlayerAbilities2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerInfo, mboost::shared_ptr<PlayerInfoPacket>);
        MC_VFUNC(void, PacketListener, handlePreLogin1, mboost::shared_ptr<ClientboundPreLoginPacket>);
        MC_VFUNC(void, PacketListener, handlePreLogin2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleRemoveEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleRemoveMobEffect, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleRespawn, mboost::shared_ptr<ClientboundRespawnPacket>);
        MC_VFUNC(void, PacketListener, handleRotateMob, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetCarriedItem1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetCarriedItem2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetEntityData, mboost::shared_ptr<ClientboundSetEntityDataPacket>);
        MC_VFUNC(void, PacketListener, handleSetEntityMotion, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetEquippedItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetExperience, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetHealth, mboost::shared_ptr<ClientboundSetHealthPacket>);
        MC_VFUNC(void, PacketListener, handleSetPlayerTeamPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetSpawn, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetTime, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSoundEvent, mboost::shared_ptr<ClientboundSoundPacket>);
        MC_VFUNC(void, PacketListener, handleTakeItemEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTeleportEntity, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleUpdateAttributes, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleUpdateMobEffect, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerCombat, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleChangeDifficulty, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetCamera, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetBorder, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetTitles, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTabListCustomisation, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleResourcePack, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleBossUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleItemCooldown, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleMoveVehicle1, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleMoveVehicle2, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleServerSettingsChanged, mboost::shared_ptr<ServerSettingsChangedPacket>);
        MC_VFUNC(void, PacketListener, handleTexture, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTextureAndGeometry, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleUpdateProgress, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTextureChange, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTextureAndGeometryChange, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleUpdateGameRuleProgressPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleXZ, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleScoreboardPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleGameMode, mboost::shared_ptr<GameModePacket>);
        MC_VFUNC(void, PacketListener, handleMapSelectInfo, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerReady, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePowerup, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleDamageIndicator, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleMiniGamePlayerSettingsUpdatePacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleClientCommand, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleClientInformation, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerButtonClick, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleContainerClick, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleInteract, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerAction, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerCommand, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePlayerInput, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSetCreativeModeSlot, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleSignUpdate, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleUseItemOn, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleUseItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTeleportToEntityPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleResourcePackResponse, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handlePaddleBoat, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleAcceptTeleportPacket, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleCraftItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleTradeItem, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleDebugOptions, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleKickPlayer, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleGameCommand, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleVote, mboost::shared_ptr<Packet>);
        MC_VFUNC(void, PacketListener, handleClientboundSetPlayerTeam, mboost::shared_ptr<Packet>);
        MC_VFUNC(bool, PacketListener, isServerPacketListener);
    };
} // namespace mc
