#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    class OverworldLevelSource;

    class VTable_LevelSource : public VTable
    {
    public:
        MC_VFUNC(void, OverworldLevelSource, Dtor);
        MC_VFUNC(void, OverworldLevelSource, createChunk);
        MC_VFUNC(void, OverworldLevelSource, postProcess);
        MC_VFUNC(void, OverworldLevelSource, postProcessLoadedChunk);
        MC_VFUNC(void, OverworldLevelSource, getMobsAt);
        MC_VFUNC(void, OverworldLevelSource, findNearestMapFeature);
        MC_VFUNC(void, OverworldLevelSource, recreateLogicStructuresForChunk);
        MC_VFUNC(void, OverworldLevelSource, isPosInFeature);
        MC_VFUNC(void, OverworldLevelSource, lightChunk);
        MC_VFUNC(void, OverworldLevelSource, prepareHeights, uint32_t, uint32_t, uint32_t);
    };
    MC_CHECK_SIZE(VTable_LevelSource, 0x58);
} // namespace mc
