#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class ServerLevel;

    class NaturalMobSpawner
    {
    public:
        NaturalMobSpawner(int maxSpawnedEntities, ServerLevel *level)
        {
            MLINK_FUNC(void, 0x026AEDC8, NaturalMobSpawner *, int, ServerLevel *)(this, maxSpawnedEntities, level);
        }

        void addChunkPos(int x, int z)
        {
            MLINK_FUNC(void, 0x026AEE8C, NaturalMobSpawner *, int, int)(this, x, z);
        }
        void addEdgeChunkPos(int x, int z)
        {
            MLINK_FUNC(void, 0x026AEF90, NaturalMobSpawner *, int, int)(this, x, z);
        }
        void tick(ServerLevel *level, bool spawnHostileMobs, bool spawnPeacefulMobs, bool spawnAnimals)
        {
            MLINK_FUNC(void, 0x026B08B0, NaturalMobSpawner *, ServerLevel *, bool, bool, bool)(this, level, spawnHostileMobs, spawnPeacefulMobs,
                                                                                               spawnAnimals);
        }

        int maxSpawnedEntities;
        int field_0x4;
        int field_0x8;
        uint32_t field_0xC;
        int field_0x10;
        bool field_0x14;
        uint8_t field_0x15;
        uint8_t field_0x16;
        uint8_t field_0x17;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        int field_0x30;
        uint32_t field_0x34;
        int field_0x38;
        int field_0x3C;
        uint32_t *field_0x40;
    };
    MC_CHECK_SIZE(NaturalMobSpawner, 0x44);
} // namespace mc
