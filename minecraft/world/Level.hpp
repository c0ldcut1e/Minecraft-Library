#pragma once

#include <cstddef>
#include <cstdint>

#include "mlink/MLink.hpp"

#include "Dimension.hpp"
#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"
#include "chunk/ChunkSource.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "sound/SoundEvent.hpp"
#include "sound/SoundSource.hpp"
#include "utils/AABB.hpp"
#include "utils/Direction.hpp"
#include "utils/LightLayer.hpp"
#include "utils/MCRandom.hpp"
#include "utils/ParticleType.hpp"
#include "utils/Vec3.hpp"
#include "world/border/WorldBorder.hpp"

namespace mc
{
    class Block;
    class BlockEntity;
    class BlockState;
    class Entity;
    class LivingEntity;
    class Player;

    class AABB;
    class BoundingBox;
    class CompoundTag;
    class Difficulty;
    class EntityTickCache;
    class LevelStorage;
    class LevelData;
    class LevelListener;
    class LevelSettings;
    class Material;
    class Packet;
    class SavedData;
    class SavedDataStorage;
    class HitResult;
    class LevelChunk;

    class Level
    {
    public:
        Level() = default;

        class RangeModifier
        {
        public:
            ~RangeModifier()
            {
                MLINK_FUNC(void, 0x026C2DB8, RangeModifier *, uint32_t)(this, 0);
            }
        };

        bool isWaterAt(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0253C498, Level *, const BlockPos &)(this, pos);
        }

        bool shouldFreeze(const BlockPos &pos, bool checkNeighbors)
        {
            return MLINK_FUNC(bool, 0x0253C4E8, Level *, const BlockPos &, bool)(this, pos, checkNeighbors);
        }

        bool shouldFreezeIgnoreNeighbors(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0253C740, Level *, const BlockPos &)(this, pos);
        }

        uint64_t getSeed()
        {
            return MLINK_FUNC(uint64_t, 0x0253DCC8, Level *)(this);
        }

        LevelData *getLevelData()
        {
            return MLINK_FUNC(LevelData *, 0x0254421C, Level *)(this);
        }

        void clampWithinLevelBounds(double &value, double &otherValue, double limit)
        {
            MLINK_FUNC(void, 0x02544224, Level *, double &, double &, double)(this, value, otherValue, limit);
        }

        bool isWithinLevelBounds(int x, int z)
        {
            return MLINK_FUNC(bool, 0x025444A4, Level *, int, int)(this, x, z);
        }

        void clampWithinLevelHeight(double &value, double limit)
        {
            MLINK_FUNC(void, 0x0254464C, Level *, double &, double)(this, value, limit);
        }

        static void enableLightingCache()
        {
            MLINK_FUNC(void, 0x02544674)();
        }

        static void destroyLightingCache()
        {
            MLINK_FUNC(void, 0x025446D0)();
        }

        static bool getInstaTick()
        {
            return MLINK_FUNC(bool, 0x02544714)();
        }

        static void setInstaTick(bool value)
        {
            MLINK_FUNC(void, 0x02544750, bool)(value);
        }

        bool hasEntitiesToRemove()
        {
            return MLINK_FUNC(bool, 0x02544778, Level *)(this);
        }

        void _init()
        {
            MLINK_FUNC(void, 0x02544D3C, Level *)(this);
        }

        Level(mboost::shared_ptr<LevelStorage> levelStorage, LevelData *levelData, Dimension *dimension, bool isClientSide)
        {
            MLINK_FUNC(void, 0x02545A34, Level *, mboost::shared_ptr<LevelStorage>, LevelData *, Dimension *, bool)(this, levelStorage, levelData,
                                                                                                                    dimension, isClientSide);
        }

        ~Level()
        {
            MLINK_FUNC(void, 0x02546458, Level *, uint32_t)(this, 0);
        }

        void postConstruct()
        {
            MLINK_FUNC(void, 0x02546838, Level *)(this);
        }

        bool hasChunkAt(const BlockPos &pos, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x02546870, Level *, const BlockPos &, bool)(this, pos, allowEmpty);
        }

        void setSpawnPos(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x025469C8, Level *, const BlockPos &)(this, pos);
        }

        void validateSpawn()
        {
            MLINK_FUNC(void, 0x025469DC, Level *)(this);
        }

        int getSeaLevel()
        {
            return MLINK_FUNC(int, 0x02546A3C, Level *)(this);
        }

        bool isInWorldBounds(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02546BA0, Level *, const BlockPos &)(this, pos);
        }

        bool isOutsideBuildHeight(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02546BC4, Level *, const BlockPos &)(this, pos);
        }

        bool isEmptyBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02546BE0, Level *, const BlockPos &)(this, pos);
        }

        bool isEmptyWaterBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02546C20, Level *, const BlockPos &)(this, pos);
        }

        bool hasChunksAt(const BlockPos &pos, int radius, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x02546C70, Level *, const BlockPos &, int, bool)(this, pos, radius, allowEmpty);
        }

        bool hasChunksAt(const BlockPos &from, const BlockPos &to, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x02546CC0, Level *, const BlockPos &, const BlockPos &, bool)(this, from, to, allowEmpty);
        }

        bool hasChunksAt(int minX, int minY, int minZ, int maxX, int maxY, int maxZ, bool allowEmpty)
        {
            return MLINK_FUNC(bool, 0x02547370, Level *, int, int, int, int, int, int, bool)(this, minX, minY, minZ, maxX, maxY, maxZ, allowEmpty);
        }

        bool isChunkGeneratedAt(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(bool, 0x025475E0, Level *, int, int)(this, chunkX, chunkZ);
        }

        void setBlock(const BlockPos &pos, const BlockState *state, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x02547678, Level *, const BlockPos &, const BlockState *, int, bool)(this, pos, state, flags, updateNeighbors);
        }

        void setExtraBlock(const BlockPos &pos, const BlockState *state, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x0254769C, Level *, const BlockPos &, const BlockState *, int, bool)(this, pos, state, flags, updateNeighbors);
        }

        void setBlockBrightnessChanged(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x025476C0, Level *, const BlockPos &)(this, pos);
        }

        bool canSeeSky(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02547B1C, Level *, const BlockPos &)(this, pos);
        }

        void checkLight(LightLayer::variety layer, const BlockPos &pos, bool updateNeighbors, bool updateChunks)
        {
            MLINK_FUNC(void, 0x025490A8, Level *, LightLayer::variety, const BlockPos &, bool, bool)(this, layer, pos, updateNeighbors, updateChunks);
        }

        void neighborChanged(const BlockPos &pos, Block *block, const BlockPos &neighborPos)
        {
            MLINK_FUNC(void, 0x02549EEC, Level *, const BlockPos &, Block *, const BlockPos &)(this, pos, block, neighborPos);
        }

        void observedNeighborChanged(const BlockPos &pos, Block *block, const BlockPos &neighborPos)
        {
            MLINK_FUNC(void, 0x02549FCC, Level *, const BlockPos &, Block *, const BlockPos &)(this, pos, block, neighborPos);
        }

        void updateObservingBlocksAt(const BlockPos &pos, Block *block)
        {
            MLINK_FUNC(void, 0x0254A080, Level *, const BlockPos &, Block *)(this, pos, block);
        }

        void updateNeighborsAt(const BlockPos &pos, Block *block, bool updateObservers)
        {
            MLINK_FUNC(void, 0x0254A20C, Level *, const BlockPos &, Block *, bool)(this, pos, block, updateObservers);
        }

        void blockUpdated(const BlockPos &pos, Block *block, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x0254A3C8, Level *, const BlockPos &, Block *, bool)(this, pos, block, updateNeighbors);
        }

        void internalSetBlock(bool isExtraBlock, const BlockPos &pos, const BlockState *state, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x0254A3D8, Level *, bool, const BlockPos &, const BlockState *, int, bool)(this, isExtraBlock, pos, state, flags,
                                                                                                         updateNeighbors);
        }

        void setData(int x, int y, int z, int data, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x0254A810, Level *, int, int, int, int, int, bool)(this, x, y, z, data, flags, updateNeighbors);
        }

        void destroyBlock(const BlockPos &pos, bool dropResources)
        {
            MLINK_FUNC(void, 0x0254B014, Level *, const BlockPos &, bool)(this, pos, dropResources);
        }

        void setBlockAndUpdate(const BlockPos &pos, const BlockState *state)
        {
            MLINK_FUNC(void, 0x0254B144, Level *, const BlockPos &, const BlockState *)(this, pos, state);
        }

        void sendBlockUpdated(const BlockPos &pos, const BlockState *oldState, const BlockState *newState, int flags, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x0254B15C, Level *, const BlockPos &, const BlockState *, const BlockState *, int, bool)(this, pos, oldState, newState,
                                                                                                                       flags, updateNeighbors);
        }

        void updateNeighborsAtExceptFromFacing(const BlockPos &pos, Block *block, const Direction *skipDirection)
        {
            MLINK_FUNC(void, 0x0254B7D0, Level *, const BlockPos &, Block *, const Direction *)(this, pos, block, skipDirection);
        }

        bool isBlockToBeTickedAt(const BlockPos &pos, Block *block)
        {
            return MLINK_FUNC(bool, 0x0254B9CC, Level *, const BlockPos &, Block *)(this, pos, block);
        }

        bool canSeeSkyFromBelowWater(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0254B9D4, Level *, const BlockPos &)(this, pos);
        }

        int getRawBrightness(const BlockPos &pos, bool includeSkyLight)
        {
            return MLINK_FUNC(int, 0x0254BC74, Level *, const BlockPos &, bool)(this, pos, includeSkyLight);
        }

        int getHeightmapHeight(int x, int z)
        {
            return MLINK_FUNC(int, 0x0254BF24, Level *, int, int)(this, x, z);
        }

        int getBrightness(LightLayer::variety layer, const BlockPos &pos)
        {
            return MLINK_FUNC(int, 0x0254C7B0, Level *, LightLayer::variety, const BlockPos &)(this, layer, pos);
        }

        int getBrightness(const BlockPos &pos, int skyDarken)
        {
            return MLINK_FUNC(int, 0x0254C9BC, Level *, const BlockPos &, int)(this, pos, skyDarken);
        }

        int getBrightness(const BlockPos &pos)
        {
            return MLINK_FUNC(int, 0x0254CA2C, Level *, const BlockPos &)(this, pos);
        }

        HitResult *clip(const Vec3 &start, const Vec3 &end, bool unk3, bool unk4, bool unk5, bool unk6, void *unk7, bool unk8)
        {
            return MLINK_FUNC(HitResult *, 0x0254DC20, Level *, const Vec3 &, const Vec3 &, bool, bool, bool, bool, void *,
                              bool)(this, start, end, unk3, unk4, unk5, unk6, unk7, unk8);
        }

        Block *getBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(Block *, 0x0254D958, Level *, const BlockPos &)(this, pos);
        }

        uint32_t getBlockData(int x, int y, int z)
        {
            return MLINK_FUNC(uint32_t, 0x0254D800, Level *, int, int, int)(this, x, y, z);
        }

        const mboost::shared_ptr<BlockEntity> &getBlockEntity(const BlockPos &pos)
        {
            return MLINK_FUNC(const mboost::shared_ptr<BlockEntity> &, 0x025612CC, Level *, int, const BlockPos &)(this, 0, pos);
        }

        int getBlockId(int x, int y, int z)
        {
            return MLINK_FUNC(int, 0x0254CCAC, Level *, int, int, int)(this, x, y, z);
        }

        uint32_t getBlockId(uint32_t x, uint32_t y, uint32_t z);

        uint32_t getBlockId(const BlockPos &pos)
        {
            return MLINK_FUNC(uint32_t, 0x0254CCAC, Level *, int, int, int)(this, pos.x, pos.y, pos.z);
        }

        const BlockState *getBlockState(const BlockPos &pos)
        {
            return MLINK_FUNC(const BlockState *, 0x0254CA88, Level *, const BlockPos &)(this, pos);
        }

        LevelChunk *getChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x0254683C, Level *, int, int)(this, chunkX, chunkZ);
        }

        LevelChunk *getChunkAt(const BlockPos &pos)
        {
            return MLINK_FUNC(LevelChunk *, 0x02546850, Level *, const BlockPos &)(this, pos);
        }

        LevelChunk *getChunkAt(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x025475AC, Level *, int, int)(this, chunkX, chunkZ);
        }

        LevelChunk *getChunkLoadedOrUnloadedAt(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x025475C4, Level *, int, int)(this, chunkX, chunkZ);
        }

        ChunkSource *getChunkSource()
        {
            return MLINK_FUNC(ChunkSource *, 0x0256B2A4, Level *)(this);
        }

        void getPlayerByName(mboost::shared_ptr<Player> &player, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x02569AE4, Level *, mboost::shared_ptr<Player> &, const mstd::basic_string<wchar_t> &)(this, player, name);
        }

        mboost::shared_ptr<mc::Player> getPlayerByName(const mstd::basic_string<wchar_t> &name)
        {
            mboost::shared_ptr<mc::Player> player;
            getPlayerByName(player, name);
            return player;
        }

        float getRainLevel(float partialTicks)
        {
            return MLINK_FUNC(float, 0x025550D0, Level *, float)(this, partialTicks);
        }

        void getSharedSpawnPos(BlockPos *out)
        {
            MLINK_FUNC(void, 0x0256ACA8, BlockPos *, Level *)(out, this);
        }

        float getThunderLevel(float partialTicks)
        {
            return MLINK_FUNC(float, 0x025550E4, Level *, float)(this, partialTicks);
        }

        float getTimeOfDay(float unk1)
        {
            return MLINK_FUNC(float, 0x0255504C, Level *, float)(this, unk1);
        }

        bool hasChunkAt(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02546894, Level *, const BlockPos &)(this, pos);
        }

        bool hasSignal(const BlockPos &pos, const Direction *dir)
        {
            return MLINK_FUNC(bool, 0x0256767C, Level *, const BlockPos &, const Direction *)(this, pos, dir);
        }

        bool isDay()
        {
            return MLINK_FUNC(bool, 0x0254DC0C, Level *)(this);
        }

        bool isInWorldBounds(int x, int y, int z)
        {
            return MLINK_FUNC(bool, 0x02546BB4, Level *, int, int, int)(this, x, y, z);
        }

        bool isRaining()
        {
            return MLINK_FUNC(bool, 0x0256B494, Level *)(this);
        }

        bool isSolidBlockingBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02562BF4, Level *, const BlockPos &)(this, pos);
        }

        bool isThundering()
        {
            return MLINK_FUNC(bool, 0x0256B44C, Level *)(this);
        }

        void removeBlock(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x0254AD9C, Level *, const BlockPos &)(this, pos);
        }

        void setBlocksDirty(const BlockPos &pos1, const BlockPos &pos2)
        {
            MLINK_FUNC(void, 0x02548A70, Level *, const BlockPos &, const BlockPos &)(this, pos1, pos2);
        }

        void setBrightness(LightLayer::variety lightLayer, const BlockPos &pos, int brightness, bool updateNeighbors)
        {
            MLINK_FUNC(void, 0x0254772C, Level *, LightLayer::variety, const BlockPos &, int, bool)(this, lightLayer, pos, brightness,
                                                                                                    updateNeighbors);
        }

        void setData(const BlockPos &pos, int unk, int unk2, bool unk3)
        {
            MLINK_FUNC(void, 0x0254A7E4, Level *, const BlockPos &, int, int, bool)(this, pos, unk, unk2, unk3);
        }

        void setFogDistance(int distance)
        {
            MLINK_FUNC(void, 0x0256B358, Level *, int)(this, distance);
        }

        void setSeaLevel(int seaLevel)
        {
            MLINK_FUNC(void, 0x0256732C, Level *, int)(this, seaLevel);
        }

        HitResult *clip(Vec3 *start, Vec3 *end)
        {
            return MLINK_FUNC(HitResult *, 0x0254EE00, Level *, Vec3 *, Vec3 *)(this, start, end);
        }

        HitResult *clip(Vec3 *start, Vec3 *end, bool includeFluids)
        {
            return MLINK_FUNC(HitResult *, 0x0254EE44, Level *, Vec3 *, Vec3 *, bool)(this, start, end, includeFluids);
        }

        void playSoundToAllPlayers(const BlockPos &pos, const SoundEvent *sound, SoundSource::ESoundSource source, float volume, float pitch,
                                   float distance)
        {
            MLINK_FUNC(void, 0x0254EE84, Level *, const BlockPos &, const SoundEvent *, SoundSource::ESoundSource, float, float,
                       float)(this, pos, sound, source, volume, pitch, distance);
        }

        void playSound(mboost::shared_ptr<Player> player, const BlockPos &pos, const SoundEvent *sound, SoundSource::ESoundSource source,
                       float volume, float pitch, float distance)
        {
            MLINK_FUNC(void, 0x0254EFB8, Level *, mboost::shared_ptr<Player>, const BlockPos &, const SoundEvent *, SoundSource::ESoundSource, float,
                       float, float)(this, player, pos, sound, source, volume, pitch, distance);
        }

        void playSound(mboost::shared_ptr<Player> player, double x, double y, double z, const SoundEvent *sound, SoundSource::ESoundSource source,
                       float volume, float pitch, float distance)
        {
            MLINK_FUNC(void, 0x0254F128, Level *, mboost::shared_ptr<Player>, double, double, double, const SoundEvent *, SoundSource::ESoundSource,
                       float, float, float)(this, player, x, y, z, sound, source, volume, pitch, distance);
        }

        void playLocalSound(double x, double y, double z, const SoundEvent *sound, SoundSource::ESoundSource source, float volume, float pitch,
                            bool delayed, float distance)
        {
            MLINK_FUNC(void, 0x0254F2F8, Level *, double, double, double, const SoundEvent *, SoundSource::ESoundSource, float, float, bool,
                       float)(this, x, y, z, sound, source, volume, pitch, delayed, distance);
        }

        void playStreamingMusic(const BlockPos &pos, const SoundEvent *sound, bool stop)
        {
            MLINK_FUNC(void, 0x0254F2FC, Level *, const BlockPos &, const SoundEvent *, bool)(this, pos, sound, stop);
        }

        void addParticle(const ParticleType *type, double x, double y, double z, double xSpeed, double ySpeed, double zSpeed,
                         ArrayWithLength<int> parameters)
        {
            MLINK_FUNC(void, 0x0254F49C, Level *, const ParticleType *, double, double, double, double, double, double,
                       ArrayWithLength<int>)(this, type, x, y, z, xSpeed, ySpeed, zSpeed, parameters);
        }

        void addParticle(const ParticleType *type, bool alwaysVisible, double x, double y, double z, double xSpeed, double ySpeed, double zSpeed,
                         ArrayWithLength<int> parameters)
        {
            MLINK_FUNC(void, 0x0254F728, Level *, const ParticleType *, bool, double, double, double, double, double, double,
                       ArrayWithLength<int>)(this, type, alwaysVisible, x, y, z, xSpeed, ySpeed, zSpeed, parameters);
        }

        void addGlobalEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x02550394, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void addEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x02550EE4, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void entityAdded(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x02551524, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void entityRemoved(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x02551650, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void removeEntity(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x025518A8, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void removeEntityImmediately(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x02551E10, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void addListener(LevelListener *listener)
        {
            MLINK_FUNC(void, 0x0255272C, Level *, LevelListener *)(this, listener);
        }

        void removeListener(LevelListener *listener)
        {
            MLINK_FUNC(void, 0x025527D0, Level *, LevelListener *)(this, listener);
        }

        bool isInsideWorldBorder(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(bool, 0x0255282C, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        bool hasBlockCubes(const AABB *bounds)
        {
            return MLINK_FUNC(bool, 0x02554F28, Level *, const AABB *)(this, bounds);
        }

        int getMoonPhase()
        {
            return MLINK_FUNC(int, 0x025558B4, Level *)(this);
        }

        float getMoonBrightness()
        {
            return MLINK_FUNC(float, 0x02555918, Level *)(this);
        }

        float getSunAngle(float partialTicks)
        {
            return MLINK_FUNC(float, 0x0255598C, Level *, float)(this, partialTicks);
        }

        float getStarBrightness(float partialTicks)
        {
            return MLINK_FUNC(float, 0x02556698, Level *, float)(this, partialTicks);
        }

        void addToTickNextTick(const BlockPos &pos, Block *block, int delay)
        {
            MLINK_FUNC(void, 0x02556748, Level *, const BlockPos &, Block *, int)(this, pos, block, delay);
        }

        void addToTickNextTick(const BlockPos &pos, Block *block, int delay, int priority)
        {
            MLINK_FUNC(void, 0x0255674C, Level *, const BlockPos &, Block *, int, int)(this, pos, block, delay, priority);
        }

        void forceAddBlockTick(const BlockPos &pos, Block *block, int delay, int priority)
        {
            MLINK_FUNC(void, 0x02556750, Level *, const BlockPos &, Block *, int, int)(this, pos, block, delay, priority);
        }

        bool hasTickNextTick(const BlockPos &pos, Block *block)
        {
            return MLINK_FUNC(bool, 0x02556740, Level *, const BlockPos &, Block *)(this, pos, block);
        }

        void tick(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x025568D0, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void addBlockEntity(mboost::shared_ptr<BlockEntity> blockEntity)
        {
            MLINK_FUNC(void, 0x02557658, Level *, mboost::shared_ptr<BlockEntity>)(this, blockEntity);
        }

        void tickEntities()
        {
            MLINK_FUNC(void, 0x025579EC, Level *)(this);
        }

        void tickServerPlayers()
        {
            MLINK_FUNC(void, 0x0255A460, Level *)(this);
        }

        void tick(mboost::shared_ptr<Entity> entity, bool force)
        {
            MLINK_FUNC(void, 0x0255A788, Level *, mboost::shared_ptr<Entity>, bool)(this, entity, force);
        }

        bool isUnobstructed(const AABB *bounds)
        {
            return MLINK_FUNC(bool, 0x0255C2F0, Level *, const AABB *)(this, bounds);
        }

        bool containsAnyLiquid(AABB *bounds)
        {
            return MLINK_FUNC(bool, 0x0255C988, Level *, AABB *)(this, bounds);
        }

        bool containsFireBlock(AABB *bounds)
        {
            return MLINK_FUNC(bool, 0x0255D8A0, Level *, AABB *)(this, bounds);
        }

        void explode(mboost::shared_ptr<Entity> source, double x, double y, double z, float radius, bool causesFire, bool breaksBlocks,
                     bool affectsEntities, bool destroyBlocks, bool isUnderwater, float knockback)
        {
            MLINK_FUNC(void, 0x025606F8, Level *, mboost::shared_ptr<Entity>, double, double, double, float, bool, bool, bool, bool, bool,
                       float)(this, source, x, y, z, radius, causesFire, breaksBlocks, affectsEntities, destroyBlocks, isUnderwater, knockback);
        }

        void setBlockEntity(const BlockPos &pos, mboost::shared_ptr<BlockEntity> blockEntity)
        {
            MLINK_FUNC(void, 0x02561948, Level *, const BlockPos &, mboost::shared_ptr<BlockEntity>)(this, pos, blockEntity);
        }

        void removeBlockEntity(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x02561FB0, Level *, const BlockPos &)(this, pos);
        }

        bool isFullAABBBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02562A58, Level *, const BlockPos &)(this, pos);
        }

        bool isSolidBlockingBlockInLoadedChunk(const BlockPos &pos, bool checkNeighbors)
        {
            return MLINK_FUNC(bool, 0x02562AF0, Level *, const BlockPos &, bool)(this, pos, checkNeighbors);
        }

        bool isConsideredSolidBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02562C9C, Level *, const BlockPos &)(this, pos);
        }

        void updateSkyBrightness()
        {
            MLINK_FUNC(void, 0x02562CD8, Level *)(this);
        }

        void setSpawnSettings(bool spawnAnimals, bool spawnNpcs)
        {
            MLINK_FUNC(void, 0x02562D28, Level *, bool, bool)(this, spawnAnimals, spawnNpcs);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02562D34, Level *)(this);
        }

        void prepareWeather()
        {
            MLINK_FUNC(void, 0x02562DA8, Level *)(this);
        }

        void tickWeather(bool force)
        {
            MLINK_FUNC(void, 0x02562E44, Level *, bool)(this, force);
        }

        void tickBlocks()
        {
            MLINK_FUNC(void, 0x02563A7C, Level *)(this);
        }

        void tickPendingTicks(bool force)
        {
            MLINK_FUNC(void, 0x02564888, Level *, bool)(this, force);
        }

        mboost::shared_ptr<Entity> getEntity(int id)
        {
            mboost::shared_ptr<Entity> entity;
            MLINK_FUNC(void, 0x02565C38, Level *, mboost::shared_ptr<Entity> *, int)(this, &entity, id);
            return entity;
        }

        void addEntities(mstd::vector<mboost::shared_ptr<Entity>> *entitiesToAdd)
        {
            MLINK_FUNC(void, 0x02566D7C, Level *, mstd::vector<mboost::shared_ptr<Entity>> *)(this, entitiesToAdd);
        }

        void removeEntities(mstd::vector<mboost::shared_ptr<Entity>> *entitiesToRemove)
        {
            MLINK_FUNC(void, 0x0256704C, Level *, mstd::vector<mboost::shared_ptr<Entity>> *)(this, entitiesToRemove);
        }

        bool mayPlace(Block *block, const BlockPos &pos, bool ignoreEntities, const Direction *direction, mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(bool, 0x025670A8, Level *, Block *, const BlockPos &, bool, const Direction *,
                              mboost::shared_ptr<Entity>)(this, block, pos, ignoreEntities, direction, entity);
        }

        int getDirectSignal(const BlockPos &pos, const Direction *direction)
        {
            return MLINK_FUNC(int, 0x02567334, Level *, const BlockPos &, const Direction *)(this, pos, direction);
        }

        int getDirectSignalTo(const BlockPos &pos)
        {
            return MLINK_FUNC(int, 0x025673B4, Level *, const BlockPos &)(this, pos);
        }

        int getSignal(const BlockPos &pos, const Direction *direction)
        {
            return MLINK_FUNC(int, 0x025675B0, Level *, const BlockPos &, const Direction *)(this, pos, direction);
        }

        bool hasNeighborSignal(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x025676BC, Level *, const BlockPos &)(this, pos);
        }

        int getBestNeighborSignal(const BlockPos &pos)
        {
            return MLINK_FUNC(int, 0x025678A0, Level *, const BlockPos &)(this, pos);
        }

        void getPlayerByUUID(mboost::shared_ptr<Player> &player, const mstd::basic_string<wchar_t> &uuid)
        {
            MLINK_FUNC(void, 0x02569CB4, Level *, mboost::shared_ptr<Player> &, const mstd::basic_string<wchar_t> &)(this, player, uuid);
        }

        void disconnect(bool save)
        {
            MLINK_FUNC(void, 0x0256AA40, Level *, bool)(this, save);
        }

        void checkSession()
        {
            MLINK_FUNC(void, 0x0256AA44, Level *)(this);
        }

        void setGameTime(uint64_t time)
        {
            MLINK_FUNC(void, 0x0256AAB8, Level *, uint64_t)(this, time);
        }

        uint64_t getGameTime()
        {
            return MLINK_FUNC(uint64_t, 0x0256AACC, Level *)(this);
        }

        uint64_t getDayTime()
        {
            return MLINK_FUNC(uint64_t, 0x0256AAE0, Level *)(this);
        }

        void setDayTime(uint64_t time)
        {
            MLINK_FUNC(void, 0x0256AAF4, Level *, uint64_t)(this, time);
        }

        void forceDayTime(uint64_t time)
        {
            MLINK_FUNC(void, 0x0256AC48, Level *, uint64_t)(this, time);
        }

        bool ShouldForceTimeUpdate()
        {
            return MLINK_FUNC(bool, 0x0256AC8C, Level *)(this);
        }

        WorldBorder *getWorldBorder()
        {
            return MLINK_FUNC(WorldBorder *, 0x0256ACA0, Level *)(this);
        }

        void ensureAdded(mboost::shared_ptr<Entity> entity)
        {
            MLINK_FUNC(void, 0x0256AE24, Level *, mboost::shared_ptr<Entity>)(this, entity);
        }

        bool mayInteract(mboost::shared_ptr<Player> player, const BlockPos &pos, Block *block)
        {
            return MLINK_FUNC(bool, 0x0256B298, Level *, mboost::shared_ptr<Player>, const BlockPos &, Block *)(this, player, pos, block);
        }

        void broadcastEntityEvent(mboost::shared_ptr<Entity> entity, uint8_t event, int data)
        {
            MLINK_FUNC(void, 0x0256B2A0, Level *, mboost::shared_ptr<Entity>, uint8_t, int)(this, entity, event, data);
        }

        void blockEvent(const BlockPos &pos, Block *block, int event, int parameter)
        {
            MLINK_FUNC(void, 0x0256B2AC, Level *, const BlockPos &, Block *, int, int)(this, pos, block, event, parameter);
        }

        LevelStorage *getLevelStorage()
        {
            return MLINK_FUNC(LevelStorage *, 0x0256B330, Level *)(this);
        }

        void updateSleepingPlayerList()
        {
            MLINK_FUNC(void, 0x0256B338, Level *)(this);
        }

        int getCloudHeight()
        {
            return MLINK_FUNC(int, 0x0256B33C, Level *)(this);
        }

        int getFogDistance()
        {
            return MLINK_FUNC(int, 0x0256B350, Level *)(this);
        }

        bool useNewSeaLevel()
        {
            return MLINK_FUNC(bool, 0x0256B360, Level *)(this);
        }

        bool getHasBeenInCreative()
        {
            return MLINK_FUNC(bool, 0x0256B374, Level *)(this);
        }

        bool isGenerateMapFeatures()
        {
            return MLINK_FUNC(bool, 0x0256B388, Level *)(this);
        }

        int getSaveVersion()
        {
            return MLINK_FUNC(int, 0x0256B39C, Level *)(this);
        }

        int getOriginalSaveVersion()
        {
            return MLINK_FUNC(int, 0x0256B3E8, Level *)(this);
        }

        void setThunderLevel(float level)
        {
            MLINK_FUNC(void, 0x0256B434, Level *, float)(this, level);
        }

        void setRainLevel(float level)
        {
            MLINK_FUNC(void, 0x0256B440, Level *, float)(this, level);
        }

        bool isSnowTemperature(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0256B554, Level *, const BlockPos &)(this, pos);
        }

        bool isRainingAt(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0256B5B4, Level *, const BlockPos &)(this, pos);
        }

        bool isSnowingAt(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0256B6C0, Level *, const BlockPos &)(this, pos);
        }

        bool isHumidAt(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0256B78C, Level *, const BlockPos &)(this, pos);
        }

        void setSavedDataStorage(SavedDataStorage *storage)
        {
            MLINK_FUNC(void, 0x0256B7C8, Level *, SavedDataStorage *)(this, storage);
        }

        SavedDataStorage *getSavedDataStorage()
        {
            return MLINK_FUNC(SavedDataStorage *, 0x0256B7D0, Level *)(this);
        }

        int getMaxBuildHeight()
        {
            return MLINK_FUNC(int, 0x0256B964, Level *)(this);
        }

        int getHeight()
        {
            return MLINK_FUNC(int, 0x0256B96C, Level *)(this);
        }

        bool isAllEmpty()
        {
            return MLINK_FUNC(bool, 0x0256BB08, Level *)(this);
        }

        int getHorizonHeight()
        {
            return MLINK_FUNC(int, 0x0256BB10, Level *)(this);
        }

        void destroyBlockProgress(int entityId, const BlockPos &pos, int progress)
        {
            MLINK_FUNC(void, 0x0256BB70, Level *, int, const BlockPos &, int)(this, entityId, pos, progress);
        }

        int getSkyDarken()
        {
            return MLINK_FUNC(int, 0x0256C234, Level *)(this);
        }

        void setSkyDarken(int value)
        {
            MLINK_FUNC(void, 0x0256C23C, Level *, int)(this, value);
        }

        int getSkyFlashTime()
        {
            return MLINK_FUNC(int, 0x0256C244, Level *)(this);
        }

        void setSkyFlashTime(int value)
        {
            MLINK_FUNC(void, 0x0256C24C, Level *, int)(this, value);
        }

        bool isFindingSpawn()
        {
            return MLINK_FUNC(bool, 0x0256C254, Level *)(this);
        }

        void setFindingSpawn(bool value)
        {
            MLINK_FUNC(void, 0x0256C25C, Level *, bool)(this, value);
        }

        bool isSpawnChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(bool, 0x0256C634, Level *, int, int)(this, chunkX, chunkZ);
        }

        bool isFlatLand()
        {
            return MLINK_FUNC(bool, 0x0256CE14, Level *)(this);
        }

        bool AllPlayersAreSleeping()
        {
            return MLINK_FUNC(bool, 0x0256CE64, Level *)(this);
        }

        bool newPrimedTntAllowed()
        {
            return MLINK_FUNC(bool, 0x02602740, Level *)(this);
        }

        bool newFallingBlockAllowed()
        {
            return MLINK_FUNC(bool, 0x02602748, Level *)(this);
        }

        bool explodeNextEnderCrystal()
        {
            return MLINK_FUNC(bool, 0x02602750, Level *)(this);
        }

        uint32_t field_0x0;
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
        mstd::vector<mboost::shared_ptr<Entity>> entities;
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
        mstd::vector<mboost::shared_ptr<Player>> players;
        mstd::vector<mboost::shared_ptr<Entity>> globalEntities;
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
        MCRandom *random;
        uint32_t field_0x12C;
        Dimension *dimension;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        LevelStorage *levelStorage;
        uint32_t field_0x150;
        LevelData *levelData;
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
        WorldBorder *worldBorder;
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
        mstd::vector<mboost::shared_ptr<LivingEntity>> livingEntities;
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
        int fogDensity;
    };
    MC_CHECK_SIZE(Level, 0x204);
    static_assert(offsetof(Level, players) == 0xC4, "Offset not matching");
    static_assert(offsetof(Level, globalEntities) == 0xD4, "Offset not matching");
} // namespace mc
