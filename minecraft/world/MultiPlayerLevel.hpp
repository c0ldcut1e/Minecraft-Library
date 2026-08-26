#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Level.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "entity/vehicle/Minecart.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "network/packet/Packet.hpp"
#include "sound/SoundSource.hpp"
#include "world/chunk/ClientChunkCache.hpp"
#include "world/chunk/LevelChunk.hpp"

namespace mc
{
    class ClientPacketListener;
    class ClientScoreboard;
    class ClientboundBlockEntityDataPacket;
    class CompoundTag;
    class Difficulty;
    class LevelSettings;
    class SoundEvent;

    class MultiPlayerLevel : public Level
    {
    public:
        MultiPlayerLevel(mboost::shared_ptr<MC_UNDEFINED_TYPE(uint32_t, LevelStorage)> levelStorage, ClientPacketListener *packetListener,
                         LevelSettings *settings, int dimensionId, const Difficulty *difficulty, int gameType)
        {
            MLINK_FUNC(void, 0x031F9D44, MultiPlayerLevel *, mboost::shared_ptr<MC_UNDEFINED_TYPE(uint32_t, LevelStorage)>, ClientPacketListener *,
                       LevelSettings *, int, const Difficulty *,
                       int)(this, levelStorage, packetListener, settings, dimensionId, difficulty, gameType);
        }

        MultiPlayerLevel(ClientPacketListener *packetListener, LevelSettings *settings, int dimensionId, const Difficulty *difficulty, int gameType)
        {
            MLINK_FUNC(void, 0x031FA1E4, MultiPlayerLevel *, ClientPacketListener *, LevelSettings *, int, const Difficulty *,
                       int)(this, packetListener, settings, dimensionId, difficulty, gameType);
        }

        ~MultiPlayerLevel()
        {
            MLINK_FUNC(void, 0x031FA900, MultiPlayerLevel *, uint32_t)(this, 0);
        }

        void removeClientPacketListener(ClientPacketListener *packetListener, bool disconnect)
        {
            MLINK_FUNC(void, 0x03190A50, MultiPlayerLevel *, ClientPacketListener *, bool)(this, packetListener, disconnect);
        }

        ClientScoreboard *GetClientScoreboard()
        {
            return MLINK_FUNC(ClientScoreboard *, 0x0319E4E8, MultiPlayerLevel *)(this);
        }

        void animateTick(int x, int y, int z)
        {
            MLINK_FUNC(void, 0x031A3DB0, MultiPlayerLevel *, int, int, int)(this, x, y, z);
        }

        void animateTickDoWork()
        {
            MLINK_FUNC(void, 0x031AA6E4, MultiPlayerLevel *)(this);
        }

        void removeAllPendingEntityRemovals()
        {
            MLINK_FUNC(void, 0x031AED0C, MultiPlayerLevel *)(this);
        }

        void playLocalSound(const BlockPos &pos, const SoundEvent *sound, SoundSource::ESoundSource source, float volume, float pitch, bool delayed,
                            float distance)
        {
            MLINK_FUNC(void, 0x031C8624, MultiPlayerLevel *, const BlockPos &, const SoundEvent *, SoundSource::ESoundSource, float, float, bool,
                       float)(this, pos, sound, source, volume, pitch, delayed, distance);
        }

        void MultiPlayerLevelInit(ClientPacketListener *packetListener, LevelSettings *settings, const Difficulty *difficulty, int gameType)
        {
            MLINK_FUNC(void, 0x031F9B08, MultiPlayerLevel *, ClientPacketListener *, LevelSettings *, const Difficulty *,
                       int)(this, packetListener, settings, difficulty, gameType);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x031FAE5C, MultiPlayerLevel *)(this);
        }

        void clearResetRegion(int minX, int minY, int minZ, int maxX, int maxY, int maxZ)
        {
            MLINK_FUNC(void, 0x031FB81C, MultiPlayerLevel *, int, int, int, int, int, int)(this, minX, minY, minZ, maxX, maxY, maxZ);
        }

        void createChunkSource()
        {
            MLINK_FUNC(void, 0x031FB908, MultiPlayerLevel *)(this);
        }

        ClientChunkCache *getChunkSource()
        {
            return MLINK_FUNC(ClientChunkCache *, 0x031FBA00, MultiPlayerLevel *)(this);
        }

        bool hasChunk(int chunkX, int chunkZ, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x031FBA10, MultiPlayerLevel *, int, int, bool)(this, chunkX, chunkZ, allowEmpty);
        }

        bool hasChunksAt(int minX, int minY, int minZ, int maxX, int maxY, int maxZ, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x031FBAA4, MultiPlayerLevel *, int, int, int, int, int, int, bool)(this, minX, minY, minZ, maxX, maxY, maxZ,
                                                                                                        allowEmpty);
        }

        LevelChunk *getChunkIfHasChunk(int chunkX, int chunkZ, bool allowEmpty)
        {
            return MLINK_FUNC(LevelChunk *, 0x031FBACC, MultiPlayerLevel *, int, int, bool)(this, chunkX, chunkZ, allowEmpty);
        }

        void validateSpawn()
        {
            MLINK_FUNC(void, 0x031FBB54, MultiPlayerLevel *)(this);
        }

        void tickBlocks()
        {
            MLINK_FUNC(void, 0x031FBB58, MultiPlayerLevel *)(this);
        }

        void addEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x031FCECC, MultiPlayerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        mboost::shared_ptr<Entity> getEntity(int id)
        {
            mboost::shared_ptr<Entity> entity;
            MLINK_FUNC(void, 0x031FDBE0, MultiPlayerLevel *, mboost::shared_ptr<Entity> *, int)(this, &entity, id);
            return entity;
        }

        void playSound(const mboost::shared_ptr<Player> &player, double x, double y, double z, const SoundEvent *sound,
                       SoundSource::ESoundSource source, float volume, float pitch, float unk1 = 16.0F)
        {
            MLINK_FUNC(void, 0x031FF120, MultiPlayerLevel *, mboost::shared_ptr<Player>, double, double, double, const SoundEvent *,
                       SoundSource::ESoundSource, float, float, float)(this, player, x, y, z, sound, source, volume, pitch, unk1);
        }

        void putEntity(int id, mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x031FD7D4, MultiPlayerLevel *, int, mboost::shared_ptr<Entity>)(this, id, entity);
        }

        void removeEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x031FD3B0, MultiPlayerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void setChunkVisible(int x, int y, bool visible, bool unk1)
        {
            MLINK_FUNC(void, 0x031FBF0C, MultiPlayerLevel *, int, int, bool, bool)(this, x, y, visible, unk1);
        }

        void entityAdded(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x031FD504, MultiPlayerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void entityRemoved(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x031FD644, MultiPlayerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void removeEntity(int id)
        {
            MLINK_FUNC(void, 0x031FDF1C, MultiPlayerLevel *, int)(this, id);
        }

        void removeEntities(mstd::vector<mboost::shared_ptr<Entity>> *entities)
        {
            MLINK_FUNC(void, 0x031FE25C, MultiPlayerLevel *, mstd::vector<mboost::shared_ptr<Entity>> *)(this, entities);
        }

        void setBlock(const BlockPos &pos, const MC_UNDEFINED_TYPE(uint32_t, BlockState) * state, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x031FE5EC, MultiPlayerLevel *, const BlockPos &, const MC_UNDEFINED_TYPE(uint32_t, BlockState) *, int,
                       bool)(this, pos, state, flags, updateNeighbors);
        }

        void doSetBlockAndData(const BlockPos &pos, const MC_UNDEFINED_TYPE(uint32_t, BlockState) * state,
                               const MC_UNDEFINED_TYPE(uint32_t, BlockState) * extraState)
        {
            MLINK_FUNC(void, 0x031FE600, MultiPlayerLevel *, const BlockPos &, const MC_UNDEFINED_TYPE(uint32_t, BlockState) *,
                       const MC_UNDEFINED_TYPE(uint32_t, BlockState) *)(this, pos, state, extraState);
        }

        void disconnect(bool save)
        {
            MLINK_FUNC(void, 0x031FE91C, MultiPlayerLevel *, bool)(this, save);
        }

        void makeSoundUpdater(mboost::shared_ptr<Minecart> minecart)
        {
            MLINK_FUNC(void, 0x031FEDCC, MultiPlayerLevel *, mboost::shared_ptr<Minecart>)(this, minecart);
        }

        void tickWeather(bool force)
        {
            MLINK_FUNC(void, 0x031FEDD4, MultiPlayerLevel *, bool)(this, force);
        }

        int getChunkPollRange()
        {
            return MLINK_FUNC(int, 0x031FEDD8, MultiPlayerLevel *)(this);
        }

        void tickClientSideBlocks(int chunkX, int chunkZ, LevelChunk *chunk)
        {
            MLINK_FUNC(void, 0x031FEDE8, MultiPlayerLevel *, int, int, LevelChunk *)(this, chunkX, chunkZ, chunk);
        }

        void playLocalSound(double x, double y, double z, const SoundEvent *sound, SoundSource::ESoundSource source, float volume, float pitch,
                            bool delayed, float distance)
        {
            MLINK_FUNC(void, 0x031FF1B0, MultiPlayerLevel *, double, double, double, const SoundEvent *, SoundSource::ESoundSource, float, float,
                       bool, float)(this, x, y, z, sound, source, volume, pitch, delayed, distance);
        }

        void createFireworks(double x, double y, double z, double xPower, double yPower, double zPower, CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x031FF67C, MultiPlayerLevel *, double, double, double, double, double, double, CompoundTag *)(this, x, y, z, xPower,
                                                                                                                            yPower, zPower, tag);
        }

        void sendPacketToServer(mboost::shared_ptr<Packet> packet)
        {
            MLINK_FUNC(void, 0x031FF6E0, MultiPlayerLevel *, mboost::shared_ptr<Packet>)(this, packet);
        }

        void setDayTime(uint64_t time)
        {
            MLINK_FUNC(void, 0x031FF6E4, MultiPlayerLevel *, uint64_t)(this, time);
        }

        void dataReceivedForChunk(int chunkX, int chunkZ)
        {
            MLINK_FUNC(void, 0x031FF6F4, MultiPlayerLevel *, int, int)(this, chunkX, chunkZ);
        }

        void removeUnusedBlockEntitiesInRegion(int minX, int minY, int minZ, int maxX, int maxY, int maxZ)
        {
            MLINK_FUNC(void, 0x031FF708, MultiPlayerLevel *, int, int, int, int, int, int)(this, minX, minY, minZ, maxX, maxY, maxZ);
        }

        ClientScoreboard *GetScoreboard()
        {
            return MLINK_FUNC(ClientScoreboard *, 0x031FFC98, MultiPlayerLevel *)(this);
        }

        void DropChunksOutsideArea(int minChunkX, int minChunkZ, int maxChunkX, int maxChunkZ, bool unknown)
        {
            MLINK_FUNC(void, 0x031FFCA0, MultiPlayerLevel *, int, int, int, int, bool)(this, minChunkX, minChunkZ, maxChunkX, maxChunkZ, unknown);
        }

        void StopReloadChunk(int chunkX, int chunkZ)
        {
            MLINK_FUNC(void, 0x031FFCB4, MultiPlayerLevel *, int, int)(this, chunkX, chunkZ);
        }

        bool MustQueueBlockEntityDataPackets()
        {
            return MLINK_FUNC(bool, 0x031FFCC8, MultiPlayerLevel *)(this);
        }

        void QueueBlockEntityDataPacket(const mboost::shared_ptr<ClientboundBlockEntityDataPacket> &packet)
        {
            MLINK_FUNC(void, 0x031FFCDC, MultiPlayerLevel *, const mboost::shared_ptr<ClientboundBlockEntityDataPacket> &)(this, packet);
        }

        void BlockUntilSafeToChangeSaveData(bool wait)
        {
            MLINK_FUNC(void, 0x031FFCF0, MultiPlayerLevel *, bool)(this, wait);
        }

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
        ClientChunkCache *chunkCache;
        uint32_t field_0x23C;
        ClientScoreboard *clientScoreboard;
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
    };
    MC_CHECK_SIZE(MultiPlayerLevel, 0x2A8);
} // namespace mc
