#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ChunkSource.hpp"

namespace mc
{
    class ServerChunkCache : public ChunkSource
    {
    public:
        LevelChunk *getChunk(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x032FC118, ServerChunkCache *, int, int)(this, chunkX, chunkZ);
        }

        LevelChunk *getChunkIfLoaded(int chunkX, int chunkZ)
        {
            return MLINK_FUNC(LevelChunk *, 0x032FA430, ServerChunkCache *, int, int)(this, chunkX, chunkZ);
        }

        int getLoadedChunks()
        {
            return MLINK_FUNC(int, 0x032FD138, ServerChunkCache *)(this);
        }

        int getLoadedChunksCount()
        {
            return MLINK_FUNC(int, 0x032FBD44, ServerChunkCache *)(this);
        }

        LevelChunk **getLoadedChunksEnd()
        {
            return *(LevelChunk ***) ((uint32_t) this + 0x24);
        }

        LevelChunk **getLoadedChunksStart()
        {
            return *(LevelChunk ***) ((uint32_t) this + 0x20);
        }
    };
} // namespace mc
