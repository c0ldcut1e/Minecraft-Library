#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    class VTable_Dimension;

    class Dimension
    {
    public:
        int getXZSize()
        {
            return MLINK_FUNC(int, 0x0229E940, Dimension *)(this);
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
