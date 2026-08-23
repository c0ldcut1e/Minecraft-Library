#pragma once

#include <cstddef>
#include <cstdint>

#include "mlink/MLink.hpp"

#include "Dimension.hpp"
#include "block/BlockPos.hpp"
#include "chunk/ChunkSource.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "utils/LightLayer.hpp"
#include "utils/Vec3.hpp"

namespace mc
{
    class Block;
    class BlockEntity;
    class Direction;
    class Entity;
    class LivingEntity;
    class Player;

    class LevelStorage;
    class LevelData;
    class HitResult;
    class LevelChunk;

    class Level
    {
    public:
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

        uint32_t getBlockState(const BlockPos &pos)
        {
            return MLINK_FUNC(uint32_t, 0x0254CA88, Level *, const BlockPos &)(this, pos);
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

        bool hasSignal(const BlockPos &pos, Direction *dir)
        {
            return MLINK_FUNC(bool, 0x0256767C, Level *, const BlockPos &, Direction *)(this, pos, dir);
        }

        bool isDay()
        {
            return MLINK_FUNC(bool, 0x0254DC0C, Level *)(this);
        }

        int isInWorldBounds(int x, int y, int z)
        {
            return MLINK_FUNC(int, 0x02546BB4, Level *, int, int, int)(this, x, y, z);
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

        void setBlock(const BlockPos &pos, uint32_t state, int flags, bool unk)
        {
            MLINK_FUNC(void, 0x02547678, Level *, const BlockPos &, uint32_t, int, bool)(this, pos, state, flags, unk);
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

        void setSeaLevel(uint32_t seaLevel)
        {
            MLINK_FUNC(void, 0x0256732C, Level *, uint32_t)(this, seaLevel);
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
        uint32_t field_0x128;
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
    static_assert(offsetof(Level, players) == 0xC4, "Offset not matching");
    static_assert(offsetof(Level, globalEntities) == 0xD4, "Offset not matching");
} // namespace mc
