#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/VTable.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class VTable_Dimension;
    class FlatLevelSource;
    class Level;
    class ServerPlayer;

    class Dimension
    {
    public:
        Dimension()
        {
            MLINK_FUNC(void, 0x0229D644, Dimension *)(this);
        }

        ~Dimension()
        {
            MLINK_FUNC(void, 0x0229DE8C, Dimension *, uint32_t)(this, 0);
        }

        void init(Level *level)
        {
            MLINK_FUNC(void, 0x0229DA28, Dimension *, Level *)(this, level);
        }

        void init()
        {
            MLINK_FUNC(void, 0x0229DCC8, Dimension *)(this);
        }

        FlatLevelSource *createFlatLevelSource()
        {
            return MLINK_FUNC(FlatLevelSource *, 0x0229E0E8, Dimension *)(this);
        }

        void updateLightRamp()
        {
            MLINK_FUNC(void, 0x0229DAFC, Dimension *)(this);
        }

        bool isValidSpawn(int x, int z)
        {
            return MLINK_FUNC(bool, 0x0229E218, Dimension *, int, int)(this, x, z);
        }

        float getTimeOfDay(uint64_t time, float partialTicks)
        {
            return MLINK_FUNC(float, 0x0229E2E0, Dimension *, uint64_t, float)(this, time, partialTicks);
        }

        int getMoonPhase(uint64_t time)
        {
            return MLINK_FUNC(int, 0x0229E3F8, Dimension *, uint64_t)(this, time);
        }

        bool isNaturalDimension()
        {
            return MLINK_FUNC(bool, 0x0229E464, Dimension *)(this);
        }

        bool mayRespawn()
        {
            return MLINK_FUNC(bool, 0x0229E82C, Dimension *)(this);
        }

        float getCloudHeight()
        {
            return MLINK_FUNC(float, 0x0229E834, Dimension *)(this);
        }

        bool hasGround()
        {
            return MLINK_FUNC(bool, 0x0229E888, Dimension *)(this);
        }

        int getSpawnYPosition()
        {
            return MLINK_FUNC(int, 0x0229E898, Dimension *)(this);
        }

        float getClearColorScale()
        {
            return MLINK_FUNC(float, 0x0229E8B8, Dimension *)(this);
        }

        bool isFoggyAt(int x, int z)
        {
            return MLINK_FUNC(bool, 0x0229E8E4, Dimension *, int, int)(this, x, z);
        }

        bool isUltraWarm()
        {
            return MLINK_FUNC(bool, 0x0229E8F4, Dimension *)(this);
        }

        bool isHasCeiling()
        {
            return MLINK_FUNC(bool, 0x0229E8FC, Dimension *)(this);
        }

        bool isHasSkyLight()
        {
            return MLINK_FUNC(bool, 0x0229E904, Dimension *)(this);
        }

        void createWorldBorder(Level *level)
        {
            MLINK_FUNC(void, 0x0229E914, Dimension *, Level *)(this, level);
        }

        void onPlayerJoin(const mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x0229E928, Dimension *, const mboost::shared_ptr<ServerPlayer> &)(this, player);
        }

        void onPlayerLeave(const mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x0229E92C, Dimension *, const mboost::shared_ptr<ServerPlayer> &)(this, player);
        }

        void saveData()
        {
            MLINK_FUNC(void, 0x0229E930, Dimension *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0229E934, Dimension *)(this);
        }

        bool canUnloadChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(bool, 0x0229E938, Dimension *, int, int)(this, chunkX, chunkZ);
        }

        int getXZSize()
        {
            return MLINK_FUNC(int, 0x0229E940, Dimension *)(this);
        }

        bool inPlayerConstraints(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0229E9D8, Dimension *, const BlockPos &)(this, pos);
        }

        bool containsChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(bool, 0x0229ED54, Dimension *, int, int)(this, chunkX, chunkZ);
        }

        int getSeaLevel()
        {
            return MLINK_FUNC(int, 0x0229EE20, Dimension *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        Level *level;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        VTable_Dimension *vtable;
    };
    MC_CHECK_SIZE(Dimension, 0x34);

    class VTable_Dimension : public VTable
    {
    public:
        MC_VFUNC(void, Dimension, init_Level);
        MC_VFUNC(void, Dimension, init);
        MC_VFUNC(void, Dimension, updateLightRamp);
        MC_VFUNC(void, Dimension, Dtor);
        MC_VFUNC(void, Dimension, createRandomLevelGenerator);
        MC_VFUNC(void, Dimension, createFlatLevelSource);
        MC_VFUNC(void, Dimension, createStorage);
        MC_VFUNC(void, Dimension, isValidSpawn);
        MC_VFUNC(void, Dimension, getTimeOfDay);
        MC_VFUNC(void, Dimension, getMoonPhase);
        MC_VFUNC(void, Dimension, isNaturalDimension);
        MC_VFUNC(void, Dimension, getSunriseColor);
        MC_VFUNC(void, Dimension, getFogColor);
        MC_VFUNC(void, Dimension, mayRespawn);
        MC_VFUNC(void, Dimension, getCloudHeight);
        MC_VFUNC(void, Dimension, hasGround);
        MC_VFUNC(void, Dimension, getSpawnPos);
        MC_VFUNC(void, Dimension, getSpawnYPosition);
        MC_VFUNC(void, Dimension, isFoggyAt);
        MC_VFUNC(void, Dimension, createWorldBorder);
        MC_VFUNC(void, Dimension, saveData);
        MC_VFUNC(void, Dimension, tick);
        MC_VFUNC(void, Dimension, canUnloadChunk);
        MC_VFUNC(void, Dimension, pure_virtual_called);
        MC_VFUNC(int, Dimension, getXZSize);
        MC_VFUNC(void, Dimension, getPlayerConstraints);
        MC_VFUNC(void, Dimension, inPlayerConstraints);
        MC_VFUNC(void, Dimension, containsChunk);
        MC_VFUNC(void, Dimension, getBlockLightColour);
    };
    MC_CHECK_SIZE(VTable_Dimension, 0xF0);
} // namespace mc
