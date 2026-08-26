#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"
#include "world/chunk/LevelChunk.hpp"

namespace mc
{
    class ServerLevel;
    class ServerPlayer;

    class PlayerChunkMap
    {
    public:
        PlayerChunkMap(ServerLevel *level, int viewDistance, int radius)
        {
            MLINK_FUNC(void, 0x03279D38, PlayerChunkMap *, ServerLevel *, int, int)(this, level, viewDistance, radius);
        }

        ~PlayerChunkMap()
        {
            MLINK_FUNC(void, 0x0327A208, PlayerChunkMap *, uint32_t)(this, 0);
        }

        void flagEntitiesToBeRemoved(uint32_t *entityIds, bool *removed)
        {
            MLINK_FUNC(void, 0x03273D54, PlayerChunkMap *, uint32_t *, bool *)(this, entityIds, removed);
        }

        ServerLevel *getLevel()
        {
            return MLINK_FUNC(ServerLevel *, 0x03274A58, PlayerChunkMap *)(this);
        }

        void tickAddRequests(mboost::shared_ptr<ServerPlayer> player, bool force)
        {
            MLINK_FUNC(void, 0x03276B7C, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>, bool)(this, player, force);
        }

        bool chunkInRange(int x, int z, int playerChunkX, int playerChunkZ)
        {
            return MLINK_FUNC(bool, 0x032779C8, PlayerChunkMap *, int, int, int, int)(this, x, z, playerChunkX, playerChunkZ);
        }

        bool shouldActuallyDropChunks()
        {
            return MLINK_FUNC(bool, 0x03278524, PlayerChunkMap *)(this);
        }

        void setViewDistance(int distance)
        {
            MLINK_FUNC(void, 0x03279278, PlayerChunkMap *, int)(this, distance);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0327C9DC, PlayerChunkMap *)(this);
        }

        LevelChunk *getChunkIfLoaded(int x, int z)
        {
            return MLINK_FUNC(LevelChunk *, 0x0327CE9C, PlayerChunkMap *, int, int)(this, x, z);
        }

        LevelChunk *getOrCreateChunk(int x, int z)
        {
            return MLINK_FUNC(LevelChunk *, 0x0327E0B4, PlayerChunkMap *, int, int)(this, x, z);
        }

        void getChunkAndAddPlayer(int x, int z, mboost::shared_ptr<ServerPlayer> player, bool force)
        {
            MLINK_FUNC(void, 0x0327EEA8, PlayerChunkMap *, int, int, mboost::shared_ptr<ServerPlayer>, bool)(this, x, z, player, force);
        }

        void getChunkAndRemovePlayer(int x, int z, mboost::shared_ptr<ServerPlayer> player, bool force)
        {
            MLINK_FUNC(void, 0x0327F1F4, PlayerChunkMap *, int, int, mboost::shared_ptr<ServerPlayer>, bool)(this, x, z, player, force);
        }

        void broadcastBlockUpdate(mboost::shared_ptr<Packet> packet, int x, int y, int z)
        {
            MLINK_FUNC(void, 0x0327F558, PlayerChunkMap *, mboost::shared_ptr<Packet>, int, int, int)(this, packet, x, y, z);
        }

        void blockChanged(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x0327F860, PlayerChunkMap *, const BlockPos &)(this, pos);
        }

        bool isTrackingBlock(int x, int y, int z)
        {
            return MLINK_FUNC(bool, 0x0327F938, PlayerChunkMap *, int, int, int)(this, x, y, z);
        }

        void prioritiseBlockChanges(int x, int y, int z)
        {
            MLINK_FUNC(void, 0x0327F980, PlayerChunkMap *, int, int, int)(this, x, y, z);
        }

        void add(mboost::shared_ptr<ServerPlayer> player)
        {
            MLINK_FUNC(void, 0x0327F9CC, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        void remove(mboost::shared_ptr<ServerPlayer> player)
        {
            MLINK_FUNC(void, 0x032807A4, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        void removeOutsideArea(mboost::shared_ptr<ServerPlayer> player, int minX, int minZ, int maxX, int maxZ)
        {
            MLINK_FUNC(void, 0x03280DE8, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>, int, int, int, int)(this, player, minX, minZ, maxX,
                                                                                                                 maxZ);
        }

        void move(mboost::shared_ptr<ServerPlayer> player)
        {
            MLINK_FUNC(void, 0x03282478, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        bool isPlayerIn(mboost::shared_ptr<ServerPlayer> player, int x, int z)
        {
            return MLINK_FUNC(bool, 0x032836D4, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>, int, int)(this, player, x, z);
        }

        void setRadius(int radius)
        {
            MLINK_FUNC(void, 0x03283924, PlayerChunkMap *, int)(this, radius);
        }

        void removeOutsideAreaForAllPlayers(int minX, int minZ, int maxX, int maxZ)
        {
            MLINK_FUNC(void, 0x03284768, PlayerChunkMap *, int, int, int, int)(this, minX, minZ, maxX, maxZ);
        }

        void reloadAllPlayers(int minX, int minZ, int maxX, int maxZ)
        {
            MLINK_FUNC(void, 0x03284FDC, PlayerChunkMap *, int, int, int, int)(this, minX, minZ, maxX, maxZ);
        }

        void pauseBlockUpdatePackets(bool paused)
        {
            MLINK_FUNC(void, 0x032852AC, PlayerChunkMap *, bool)(this, paused);
        }

        void onPlayerJoin(mboost::shared_ptr<ServerPlayer> player)
        {
            MLINK_FUNC(void, 0x0332E75C, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        void onPlayerLeave(mboost::shared_ptr<ServerPlayer> player)
        {
            MLINK_FUNC(void, 0x0332E760, PlayerChunkMap *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        uint32_t field_0x0;
        uint32_t *field_0x4;
        uint32_t *field_0x8;
        uint32_t field_0xC;
        bool field_0x10;
        uint8_t field_0x11;
        uint8_t field_0x12;
        uint8_t field_0x13;
        int viewDistance;
        int radius;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        int field_0x24;
        bool field_0x28;
        uint8_t field_0x29;
        uint8_t field_0x2A;
        uint8_t field_0x2B;
        int field_0x2C;
        int field_0x30;
        uint32_t field_0x34;
        bool field_0x38;
        uint8_t field_0x39;
        uint8_t field_0x3A;
        uint8_t field_0x3B;
        int field_0x3C;
        int field_0x40;
        uint32_t field_0x44;
        bool field_0x48;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        uint32_t *field_0x4C;
        uint32_t *field_0x50;
        uint32_t field_0x54;
        int field_0x58;
        ServerLevel *level;
        int field_0x60;
        uint32_t field_0x64;
        int field_0x68;
        int field_0x6C;
        bool field_0x70;
        bool field_0x71;
        uint8_t field_0x72;
        uint8_t field_0x73;
        uint32_t vtable;
    };
    MC_CHECK_SIZE(PlayerChunkMap, 0x78);
} // namespace mc
