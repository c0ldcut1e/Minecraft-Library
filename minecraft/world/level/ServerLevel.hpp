#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Level.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "entity/Entity.hpp"
#include "entity/EntityTracker.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "network/packet/clientbound/ClientboundLevelParticlesPacket.hpp"
#include "utils/ParticleType.hpp"
#include "world/chunk/ChunkSource.hpp"
#include "world/chunk/PlayerChunkMap.hpp"
#include "world/level/LevelData.hpp"
#include "world/level/LevelSettings.hpp"
#include "world/level/event/BlockEventData.hpp"
#include "world/level/spawn/NaturalMobSpawner.hpp"
#include "world/portal/PortalForcer.hpp"

namespace mc
{
    class MinecraftServer;
    class ServerPlayer;

    class ServerLevel : public Level
    {
    public:
        static void runUpdate(void *context)
        {
            MLINK_FUNC(void, 0x032A9638, void *)(context);
        }

        static void staticCtor()
        {
            MLINK_FUNC(void, 0x032A9FA8)();
        }

        ServerLevel() = default;

        ServerLevel(MinecraftServer *server, mboost::shared_ptr<MC_UNDEFINED_TYPE(uint32_t, LevelStorage)> levelStorage, LevelData *levelData,
                    int dimensionId)
        {
            MLINK_FUNC(void, 0x032AAC64, ServerLevel *, MinecraftServer *, mboost::shared_ptr<MC_UNDEFINED_TYPE(uint32_t, LevelStorage)>, LevelData *,
                       int)(this, server, levelStorage, levelData, dimensionId);
        }

        ~ServerLevel()
        {
            MLINK_FUNC(void, 0x032ACBB4, ServerLevel *, uint32_t)(this, 0);
        }

        EntityTracker *getTracker()
        {
            return MLINK_FUNC(EntityTracker *, 0x0327557C, ServerLevel *)(this);
        }

        ChunkSource *getChunkSource()
        {
            return MLINK_FUNC(ChunkSource *, 0x03276304, ServerLevel *)(this);
        }

        PlayerChunkMap *getChunkMap()
        {
            return MLINK_FUNC(PlayerChunkMap *, 0x032875B4, ServerLevel *)(this);
        }

        PortalForcer *getPortalForcer()
        {
            return MLINK_FUNC(PortalForcer *, 0x032A0EBC, ServerLevel *)(this);
        }

        void createChunkSource()
        {
            MLINK_FUNC(void, 0x032AAB40, ServerLevel *)(this);
        }

        void postConstruct()
        {
            MLINK_FUNC(void, 0x032ADC80, ServerLevel *)(this);
        }

        bool allPlayersAreSleeping()
        {
            return MLINK_FUNC(bool, 0x032AE4F0, ServerLevel *)(this);
        }

        bool AllPlayersAreSleeping()
        {
            return MLINK_FUNC(bool, 0x0332FB80, ServerLevel *)(this);
        }

        void stopWeather()
        {
            MLINK_FUNC(void, 0x032AE608, ServerLevel *)(this);
        }

        void awakenAllPlayers()
        {
            MLINK_FUNC(void, 0x032AE690, ServerLevel *)(this);
        }

        void save(bool flush, MC_UNDEFINED_TYPE(uint32_t, ProgressListener) * progressListener, bool skipPlayerData)
        {
            MLINK_FUNC(void, 0x032AE7CC, ServerLevel *, bool, MC_UNDEFINED_TYPE(uint32_t, ProgressListener) *, bool)(this, flush, progressListener,
                                                                                                                     skipPlayerData);
        }

        void doBlockEvent(BlockEventData *event)
        {
            MLINK_FUNC(void, 0x032AE960, ServerLevel *, BlockEventData *)(this, event);
        }

        void runBlockEvents()
        {
            MLINK_FUNC(void, 0x032AEA88, ServerLevel *)(this);
        }

        void runQueuedSendBlockUpdates()
        {
            MLINK_FUNC(void, 0x032AF150, ServerLevel *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x032AF20C, ServerLevel *)(this);
        }

        void updateSleepingPlayerList()
        {
            MLINK_FUNC(void, 0x032AFC10, ServerLevel *)(this);
        }

        void validateSpawn()
        {
            MLINK_FUNC(void, 0x032AFD88, ServerLevel *)(this);
        }

        bool hasChunk(int chunkX, int chunkZ, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x032AFF90, ServerLevel *, int, int, bool)(this, chunkX, chunkZ, allowEmpty);
        }

        LevelChunk *getChunkIfHasChunk(int chunkX, int chunkZ, bool allowEmpty)
        {
            return MLINK_FUNC(LevelChunk *, 0x032AFFEC, ServerLevel *, int, int, bool)(this, chunkX, chunkZ, allowEmpty);
        }

        void findLightingTargetAround(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x032B0048, ServerLevel *, const BlockPos &)(this, pos);
        }

        void tickBlocks()
        {
            MLINK_FUNC(void, 0x032B0380, ServerLevel *)(this);
        }

        bool isBlockToBeTickedAt(const BlockPos &pos, Block *block)
        {
            return MLINK_FUNC(bool, 0x032B1BF0, ServerLevel *, const BlockPos &, Block *)(this, pos, block);
        }

        bool hasTickNextTick(const BlockPos &pos, Block *block)
        {
            return MLINK_FUNC(bool, 0x032B1DBC, ServerLevel *, const BlockPos &, Block *)(this, pos, block);
        }

        void addToTickNextTick(const BlockPos &pos, Block *block, int delay)
        {
            MLINK_FUNC(void, 0x032B1E18, ServerLevel *, const BlockPos &, Block *, int)(this, pos, block, delay);
        }

        void addToTickNextTick(const BlockPos &pos, Block *block, int delay, int priority)
        {
            MLINK_FUNC(void, 0x032B2E58, ServerLevel *, const BlockPos &, Block *, int, int)(this, pos, block, delay, priority);
        }

        void forceAddBlockTick(const BlockPos &pos, Block *block, int delay, int priority)
        {
            MLINK_FUNC(void, 0x032B3150, ServerLevel *, const BlockPos &, Block *, int, int)(this, pos, block, delay, priority);
        }

        void resetEmptyTime()
        {
            MLINK_FUNC(void, 0x032B32B0, ServerLevel *)(this);
        }

        void tickEntities()
        {
            MLINK_FUNC(void, 0x032B32BC, ServerLevel *)(this);
        }

        void tickServerPlayers()
        {
            MLINK_FUNC(void, 0x032B3354, ServerLevel *)(this);
        }

        void tickPendingTicks(bool force)
        {
            MLINK_FUNC(void, 0x032B487C, ServerLevel *, bool)(this, force);
        }

        bool isAnimalsAllowed()
        {
            return MLINK_FUNC(bool, 0x032B560C, ServerLevel *)(this);
        }

        bool isNpcsAllowed()
        {
            return MLINK_FUNC(bool, 0x032B5620, ServerLevel *)(this);
        }

        void tick(mboost::shared_ptr<Entity> entity, bool force)
        {
            MLINK_FUNC(void, 0x032B5634, ServerLevel *, mboost::shared_ptr<Entity>, bool)(this, entity, force);
        }

        void forceTick(mboost::shared_ptr<Entity> entity, bool force)
        {
            MLINK_FUNC(void, 0x032B59D0, ServerLevel *, mboost::shared_ptr<Entity>, bool)(this, entity, force);
        }

        void initializeLevel(LevelSettings *settings)
        {
            MLINK_FUNC(void, 0x032B5C70, ServerLevel *, LevelSettings *)(this, settings);
        }

        void setupDebugLevel()
        {
            MLINK_FUNC(void, 0x032B5D08, ServerLevel *)(this);
        }

        void getBlockEntitiesInRegion(int minX, int minY, int minZ, int maxX, int maxY, int maxZ)
        {
            MLINK_FUNC(void, 0x0327A568, ServerLevel *, int, int, int, int, int, int)(this, minX, minY, minZ, maxX, maxY, maxZ);
        }

        BlockPos *getDimensionSpecificSpawn()
        {
            return MLINK_FUNC(BlockPos *, 0x032A0EA8, ServerLevel *)(this);
        }

        void generateBonusItemsNearSpawn()
        {
            MLINK_FUNC(void, 0x032B6178, ServerLevel *)(this);
        }

        void Suspend()
        {
            MLINK_FUNC(void, 0x032B6ABC, ServerLevel *)(this);
        }

        void saveToDisc(MC_UNDEFINED_TYPE(uint32_t, ProgressListener) * progressListener, bool flush)
        {
            MLINK_FUNC(void, 0x032B6B2C, ServerLevel *, MC_UNDEFINED_TYPE(uint32_t, ProgressListener) *, bool)(this, progressListener, flush);
        }

        void removeDuplicateAndPendingEntity(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x032B6FFC, ServerLevel *, const mboost::shared_ptr<Entity> &)(this, entity);
        }

        void addEntities(mstd::vector<mboost::shared_ptr<Entity>> *entitiesToAdd)
        {
            MLINK_FUNC(void, 0x032B7598, ServerLevel *, mstd::vector<mboost::shared_ptr<Entity>> *)(this, entitiesToAdd);
        }

        void setInitialSpawn(LevelSettings *settings)
        {
            MLINK_FUNC(void, 0x032B673C, ServerLevel *, LevelSettings *)(this, settings);
        }

        void saveLevelData()
        {
            MLINK_FUNC(void, 0x032B7860, ServerLevel *)(this);
        }

        void entityAddedExtra(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x032B8720, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void entityAdded(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x032B8DA8, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void entityRemoved(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x032B9FB4, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void entityRemovedExtra(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x032B9918, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        mboost::shared_ptr<Entity> getEntity(int id)
        {
            mboost::shared_ptr<Entity> entity;
            MLINK_FUNC(void, 0x032BA33C, ServerLevel *, mboost::shared_ptr<Entity> *, int)(this, &entity, id);
            return entity;
        }

        void addGlobalEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x032BA450, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void broadcastEntityEvent(mboost::shared_ptr<Entity> entity, uint8_t event, int data)
        {
            MLINK_FUNC(void, 0x032BAB40, ServerLevel *, mboost::shared_ptr<Entity>, uint8_t, int)(this, entity, event, data);
        }

        void explode(mboost::shared_ptr<Entity> source, double x, double y, double z, float radius, bool causesFire, bool breaksBlocks,
                     bool affectsEntities, bool destroyBlocks, bool isUnderwater, float knockback)
        {
            MLINK_FUNC(void, 0x032BB2AC, ServerLevel *, mboost::shared_ptr<Entity>, double, double, double, float, bool, bool, bool, bool, bool,
                       float)(this, source, x, y, z, radius, causesFire, breaksBlocks, affectsEntities, destroyBlocks, isUnderwater, knockback);
        }

        void blockEvent(const BlockPos &pos, Block *block, int event, int parameter)
        {
            MLINK_FUNC(void, 0x032BC99C, ServerLevel *, const BlockPos &, Block *, int, int)(this, pos, block, event, parameter);
        }

        void closeLevelStorage()
        {
            MLINK_FUNC(void, 0x032BCA58, ServerLevel *)(this);
        }

        void tickWeather(bool force)
        {
            MLINK_FUNC(void, 0x032BCACC, ServerLevel *, bool)(this, force);
        }

        int getChunkPollRange()
        {
            return MLINK_FUNC(int, 0x032BE49C, ServerLevel *)(this);
        }

        MinecraftServer *getServer()
        {
            return MLINK_FUNC(MinecraftServer *, 0x032BE4C0, ServerLevel *)(this);
        }

        void setTimeAndAdjustBlockTicks(uint64_t time)
        {
            MLINK_FUNC(void, 0x032BE4C8, ServerLevel *, uint64_t)(this, time);
        }

        void sendParticles(mboost::shared_ptr<ServerPlayer> player, bool force, mboost::shared_ptr<ClientboundLevelParticlesPacket> packet)
        {
            MLINK_FUNC(void, 0x032BE63C, ServerLevel *, mboost::shared_ptr<ServerPlayer>, bool,
                       mboost::shared_ptr<ClientboundLevelParticlesPacket>)(this, player, force, packet);
        }

        void sendParticles(const ParticleType *type, bool force, double x, double y, double z, int count, double xDist, double yDist, double zDist,
                           double maxSpeed, ArrayWithLength<int> parameters)
        {
            MLINK_FUNC(void, 0x032BE9A0, ServerLevel *, const ParticleType *, bool, double, double, double, int, double, double, double, double,
                       ArrayWithLength<int>)(this, type, force, x, y, z, count, xDist, yDist, zDist, maxSpeed, parameters);
        }

        void sendParticles(const ParticleType *type, double x, double y, double z, int count, double xDist, double yDist, double zDist,
                           double maxSpeed, ArrayWithLength<int> parameters)
        {
            MLINK_FUNC(void, 0x032BEFB8, ServerLevel *, const ParticleType *, double, double, double, int, double, double, double, double,
                       ArrayWithLength<int>)(this, type, x, y, z, count, xDist, yDist, zDist, maxSpeed, parameters);
        }

        void sendParticles(const ParticleType *type, double x, double y, double z, int count, double xDist, double yDist, double zDist,
                           double maxSpeed, ArrayWithLength<int> parameters, double xAux, double yAux, double zAux)
        {
            MLINK_FUNC(void, 0x032BF004, ServerLevel *, const ParticleType *, double, double, double, int, double, double, double, double,
                       ArrayWithLength<int>, double, double,
                       double)(this, type, x, y, z, count, xDist, yDist, zDist, maxSpeed, parameters, xAux, yAux, zAux);
        }

        void sendParticles(mboost::shared_ptr<ServerPlayer> player, const ParticleType *type, bool force, double x, double y, double z, int count,
                           double xDist, double yDist, double zDist, double maxSpeed, ArrayWithLength<int> parameters)
        {
            MLINK_FUNC(void, 0x032BF634, ServerLevel *, mboost::shared_ptr<ServerPlayer>, const ParticleType *, bool, double, double, double, int,
                       double, double, double, double,
                       ArrayWithLength<int>)(this, player, type, force, x, y, z, count, xDist, yDist, zDist, maxSpeed, parameters);
        }

        void getEntityByUUID(mboost::shared_ptr<Entity> &entity, const mstd::basic_string<wchar_t> &uuid)
        {
            MLINK_FUNC(void, 0x032BFB74, ServerLevel *, mboost::shared_ptr<Entity> &, const mstd::basic_string<wchar_t> &)(this, entity, uuid);
        }

        void getPlayer(mboost::shared_ptr<ServerPlayer> &player, const PlayerUID &uid)
        {
            MLINK_FUNC(void, 0x032BFD00, ServerLevel *, mboost::shared_ptr<ServerPlayer> *, const PlayerUID &)(this, &player, uid);
        }

        void queueSendBlockUpdate(int x, int y, int z, const MC_UNDEFINED_TYPE(uint32_t, BlockState) * oldState,
                                  const MC_UNDEFINED_TYPE(uint32_t, BlockState) * newState)
        {
            MLINK_FUNC(void, 0x032C0454, ServerLevel *, int, int, int, const MC_UNDEFINED_TYPE(uint32_t, BlockState) *,
                       const MC_UNDEFINED_TYPE(uint32_t, BlockState) *)(this, x, y, z, oldState, newState);
        }

        bool atBlockEntityLimit(Block *block)
        {
            return MLINK_FUNC(bool, 0x032C0544, ServerLevel *, Block *)(this, block);
        }

        void setBlock(const BlockPos &pos, const MC_UNDEFINED_TYPE(uint32_t, BlockState) * state, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x032C0628, ServerLevel *, const BlockPos &, const MC_UNDEFINED_TYPE(uint32_t, BlockState) *, int,
                       bool)(this, pos, state, flags, updateNeighbors);
        }

        void addEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x032C06DC, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        bool atEntityLimit(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(bool, 0x032C0E84, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        bool newPrimedTntAllowed()
        {
            return MLINK_FUNC(bool, 0x032C1340, ServerLevel *)(this);
        }

        bool newFallingBlockAllowed()
        {
            return MLINK_FUNC(bool, 0x032C16BC, ServerLevel *)(this);
        }

        bool explodeNextEnderCrystal()
        {
            return MLINK_FUNC(bool, 0x032C1720, ServerLevel *)(this);
        }

        void flagEntitiesToBeRemoved(uint32_t *entityIds, bool *removed)
        {
            MLINK_FUNC(void, 0x032C178C, ServerLevel *, uint32_t *, bool *)(this, entityIds, removed);
        }

        void invalidateChunksOutsideArea(int minChunkX, int minChunkZ, int maxChunkX, int maxChunkZ)
        {
            MLINK_FUNC(void, 0x032C18C8, ServerLevel *, int, int, int, int)(this, minChunkX, minChunkZ, maxChunkX, maxChunkZ);
        }

        MinecraftServer *server;
        EntityTracker *entityTracker;
        PlayerChunkMap *chunkMap;
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
        PortalForcer *portalForcer;
        NaturalMobSpawner *naturalMobSpawner;
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
        float field_0x318;
        float field_0x31C;
        float field_0x320;
        float field_0x324;
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
    };
    MC_CHECK_SIZE(ServerLevel, 0x3BC);
} // namespace mc
