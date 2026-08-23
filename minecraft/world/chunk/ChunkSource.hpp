#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class LevelChunk;

    class ChunkSource
    {
    public:
        LevelChunk *getChunkLoadedOrUnloaded(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x0286985C, ChunkSource *, int, int)(this, chunkX, chunkZ);
        }

        bool reallyHasChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(bool, 0x0286984C, ChunkSource *, int, int)(this, chunkX, chunkZ);
        }

        void saveAllEntities()
        {
            MLINK_FUNC(void, 0x02869870, ChunkSource *)(this);
        }
    };
} // namespace mc
