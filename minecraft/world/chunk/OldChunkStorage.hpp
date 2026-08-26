#pragma once

#include "mlink/MLink.hpp"

#include "LevelChunk.hpp"
#include "io/DataOutputStream.hpp"
#include "world/level/Level.hpp"

namespace mc
{

    class OldChunkStorage
    {
    public:
        static void CreateNewThreadStorage()
        {
            MLINK_FUNC(void, 0x0276FEE4)();
        }

        static void ReleaseThreadStorage()
        {
            MLINK_FUNC(void, 0x02770068)();
        }

        static void save(LevelChunk *chunk, Level *level, DataOutputStream *stream)
        {
            MLINK_FUNC(void, 0x027731F4, LevelChunk *, Level *, DataOutputStream *)(chunk, level, stream);
        }

        static void UseDefaultThreadStorage()
        {
            MLINK_FUNC(void, 0x0276FFA4)();
        }
    };
} // namespace mc
