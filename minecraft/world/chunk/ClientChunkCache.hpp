#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ChunkSource.hpp"

namespace mc
{
    class ClientChunkCache : public ChunkSource
    {
    public:
        void dropOutsideArea(int minChunkX, int minChunkZ, int maxChunkX, int maxChunkZ, bool unknown)
        {
            MLINK_FUNC(void, 0x0303B6B4, ClientChunkCache *, int, int, int, int, bool)(this, minChunkX, minChunkZ, maxChunkX, maxChunkZ, unknown);
        }

        LevelChunk *getChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x0303BC84, ClientChunkCache *, int, int)(this, chunkX, chunkZ);
        }

        LevelChunk *getChunkIfLoaded(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x0303AA6C, ClientChunkCache *, int, int)(this, chunkX, chunkZ);
        }

        int getLoadedChunks()
        {
            return MLINK_FUNC(int, 0x0303C930, ClientChunkCache *)(this);
        }

        int getLoadedChunksCount()
        {
            return MLINK_FUNC(int, 0x0303AB5C, ClientChunkCache *)(this);
        }

        LevelChunk **getLoadedChunksEnd()
        {
            return *(LevelChunk ***) ((uint32_t) this + 0x5C);
        }

        LevelChunk **getLoadedChunksStart()
        {
            return *(LevelChunk ***) ((uint32_t) this + 0x58);
        }
    };
} // namespace mc
