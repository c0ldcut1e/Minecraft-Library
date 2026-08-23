#pragma once

#include "mlink/MLink.hpp"

#include "internal/basic_string.hpp"
#include "save/ConsoleSaveFile.hpp"
#include "world/Level.hpp"
#include "world/chunk/LevelChunk.hpp"

namespace mc
{
    class DataFixerUpper;

    class McRegionChunkStorage
    {
    public:
        static McRegionChunkStorage *Create(ConsoleSaveFile *saveFile, const mstd::basic_string<wchar_t> &folder, DataFixerUpper *fixerUpper)
        {
            return MLINK_FUNC(McRegionChunkStorage *, 0x025D6668, McRegionChunkStorage *, ConsoleSaveFile *, const mstd::basic_string<wchar_t> &,
                              DataFixerUpper *)(nullptr, saveFile, folder, fixerUpper);
        }

        static void WaitForAllSaves()
        {
            MLINK_FUNC(void, 0x025DE3A8)();
        }

        void flush()
        {
            MLINK_FUNC(void, 0x025DE2FC, McRegionChunkStorage *)(this);
        }

        void save(Level *level, LevelChunk *chunk)
        {
            MLINK_FUNC(void, 0x025DE0D8, McRegionChunkStorage *, Level *, LevelChunk *)(this, level, chunk);
        }

        void waitForAll()
        {
            MLINK_FUNC(void, 0x025DE4E4, McRegionChunkStorage *)(this);
        }
    };
} // namespace mc
