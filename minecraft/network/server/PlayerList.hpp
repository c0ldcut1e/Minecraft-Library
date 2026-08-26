#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "MinecraftServer.hpp"
#include "entity/player/PlayerUID.hpp"
#include "entity/player/ServerPlayer.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "nbt/CompoundTag.hpp"
#include "network/listener/Connection.hpp"
#include "network/packet/Packet.hpp"
#include "network/packet/clientbound/ClientboundLoginPacket.hpp"

namespace mc
{
    class Connection;
    class MinecraftServer;
    class ServerConnection;
    class ServerPlayer;

    class PlayerList
    {
    public:
        void add(const mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x0328E7CC, PlayerList *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        int addPlayerToReceiving(const mboost::shared_ptr<ServerPlayer> &player, bool param_2)
        {
            return MLINK_FUNC(int, 0x03286224, PlayerList *, mboost::shared_ptr<ServerPlayer>, bool)(this, player, param_2);
        }

        void broadcastAll(const mboost::shared_ptr<Packet> &packet)
        {
            MLINK_FUNC(void, 0x03286804, PlayerList *, const mboost::shared_ptr<Packet> &)(this, packet);
        }

        void closeServerGamePacketListenerImplBySmallId(uint8_t smallId)
        {
            MLINK_FUNC(void, 0x032A8C50, PlayerList *, uint8_t)(this, smallId);
        }

        int getMaxPlayers()
        {
            return MLINK_FUNC(int, 0x0328CAF8, PlayerList *)(this);
        }

        int getPlayerCount()
        {
            return MLINK_FUNC(int, 0x032A868C, PlayerList *)(this);
        }

        void getPlayerForLogin(mboost::shared_ptr<ServerPlayer> *out, ServerConnection *listener, const mstd::basic_string<wchar_t> &name,
                               const PlayerUID &uid1, const PlayerUID &uid2)
        {
            MLINK_FUNC(void, 0x0329AAC0, PlayerList *, mboost::shared_ptr<ServerPlayer> *, ServerConnection *, const mstd::basic_string<wchar_t> &,
                       const PlayerUID &, const PlayerUID &)
            (this, out, listener, name, uid1, uid2);
        }

        void kickPlayerByShortId(int shortId)
        {
            MLINK_FUNC(void, 0x032A8BE4, PlayerList *, int)(this, shortId);
        }

        CompoundTag *load(const mboost::shared_ptr<ServerPlayer> &player)
        {
            return MLINK_FUNC(CompoundTag *, 0x0328AE30, PlayerList *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        void placeNewPlayer(Connection *connection, const mboost::shared_ptr<ServerPlayer> &player,
                            const mboost::shared_ptr<ClientboundLoginPacket> &packet)
        {
            MLINK_FUNC(void, 0x03294B54, PlayerList *, Connection *, mboost::shared_ptr<ServerPlayer>,
                       mboost::shared_ptr<ClientboundLoginPacket>)(this, connection, player, packet);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x032A53FC, PlayerList *)(this);
        }

        void validatePlayerSpawnPosition(const mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x0328AF40, PlayerList *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        mstd::vector<mboost::shared_ptr<ServerPlayer>> players;
        MinecraftServer *server;
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
    };
    MC_CHECK_SIZE(PlayerList, 0xF4);
} // namespace mc
