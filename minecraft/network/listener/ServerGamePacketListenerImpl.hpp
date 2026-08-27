#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "PacketListener.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/DisconnectPacket.hpp"
#include "network/packet/Packet.hpp"
#include "network/packet/clientbound/ClientboundChatPacket.hpp"
#include "network/packet/clientbound/ClientboundSoundPacket.hpp"
#include "network/packet/serverbound/ServerboundContainerClickPacket.hpp"
#include "network/packet/serverbound/ServerboundCustomPayloadPacket.hpp"
#include "network/packet/serverbound/ServerboundMovePlayerPacket.hpp"
#include "network/packet/serverbound/ServerboundPlayerAbilitiesPacket.hpp"
#include "network/packet/serverbound/ServerboundPlayerActionPacket.hpp"
#include "network/packet/serverbound/ServerboundUseItemOnPacket.hpp"
#include "network/player/NetworkPlayerNintendo.hpp"
#include "network/server/MinecraftServer.hpp"
#include "network/server/PlayerList.hpp"
#include "utils/Vec3.hpp"

namespace mc
{
    class PlayerInfoPacket;
    class Connection;
    class MinecraftServer;
    class ServerPlayer;

    class ServerGamePacketListenerImpl : public PacketListener
    {
    public:
        ServerGamePacketListenerImpl(MinecraftServer *_server, Connection *_connection, const mboost::shared_ptr<ServerPlayer> &_player)
        {
            MLINK_FUNC(void, 0x0328C4B8, ServerGamePacketListenerImpl *, MinecraftServer *, Connection *,
                       mboost::shared_ptr<ServerPlayer>)(this, _server, _connection, _player);
        }

        void disconnect(DisconnectPacket::eDisconnectReason reason)
        {
            MLINK_FUNC(void, 0x03288878, ServerGamePacketListenerImpl *, DisconnectPacket::eDisconnectReason)(this, reason);
        }

        NetworkPlayerNintendo *getNetworkPlayer()
        {
            return MLINK_FUNC(NetworkPlayerNintendo *, 0x0324A68C, ServerGamePacketListenerImpl *)(this);
        }

        void handleChat(const mboost::shared_ptr<ClientboundChatPacket> &packet)
        {
            MLINK_FUNC(void, 0x032E68A4, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ClientboundChatPacket> &)(this, packet);
        }

        void handleContainerClick(const mboost::shared_ptr<ServerboundContainerClickPacket> &packet)
        {
            MLINK_FUNC(void, 0x032E9B10, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ServerboundContainerClickPacket> &)(this, packet);
        }

        void handleMovePlayer(const mboost::shared_ptr<ServerboundMovePlayerPacket> &packet)
        {
            MLINK_FUNC(void, 0x032DC90C, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ServerboundMovePlayerPacket> &)(this, packet);
        }

        void handlePlayerAbilities(const mboost::shared_ptr<ServerboundPlayerAbilitiesPacket> &packet)
        {
            MLINK_FUNC(void, 0x032EF2A4, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ServerboundPlayerAbilitiesPacket> &)(this, packet);
        }

        void NameItemOnAnvil(const mboost::shared_ptr<ServerboundCustomPayloadPacket> &packet, bool value)
        {
            MLINK_FUNC(void, 0x032EF3E8, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ServerboundCustomPayloadPacket> &,
                       bool)(this, packet, value);
        }

        void handleCustomPayload(mboost::shared_ptr<ServerboundCustomPayloadPacket> packet)
        {
            MLINK_FUNC(void, 0x032EF71C, ServerGamePacketListenerImpl *, mboost::shared_ptr<ServerboundCustomPayloadPacket>)(this, packet);
        }

        void handlePlayerAction(const mboost::shared_ptr<ServerboundPlayerActionPacket> &packet)
        {
            MLINK_FUNC(void, 0x032DFF9C, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ServerboundPlayerActionPacket> &)(this, packet);
        }

        void handleSoundEvent(const mboost::shared_ptr<ClientboundSoundPacket> &packet)
        {
            MLINK_FUNC(void, 0x032F9D3C, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ClientboundSoundPacket> &)(this, packet);
        }

        void handleUseItemOn(const mboost::shared_ptr<ServerboundUseItemOnPacket> &packet)
        {
            MLINK_FUNC(void, 0x032E2C64, ServerGamePacketListenerImpl *, const mboost::shared_ptr<ServerboundUseItemOnPacket> &)(this, packet);
        }

        void send(const mboost::shared_ptr<Packet> &packet)
        {
            MLINK_FUNC(void, 0x03249FB4, ServerGamePacketListenerImpl *, mboost::shared_ptr<Packet>)(this, packet);
        }

        void teleport(double x, double y, double z, float yaw, float pitch, bool sendPacket, bool includeRotation)
        {
            MLINK_FUNC(void, 0x03293E88, ServerGamePacketListenerImpl *, double, double, double, float, float, bool,
                       bool)(this, x, y, z, yaw, pitch, sendPacket, includeRotation);
        }

        uint32_t field_0x4;
        Connection *connection;
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
        MinecraftServer *server;
        mboost::shared_ptr<ServerPlayer> player;
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
        Vec3 *pendingTeleportPosition;
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
        bool kickFlag;
        uint8_t field_0x151;
        uint8_t field_0x152;
        uint8_t field_0x153;
        uint32_t field_0x154;
    };
    MC_CHECK_SIZE(ServerGamePacketListenerImpl, 0x158);
} // namespace mc
