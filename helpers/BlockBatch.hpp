#pragma once

#include <cstdint>

#include "helpers/RegionCursor.hpp"
#include "minecraft/block/BlockPos.hpp"
#include "minecraft/block/BlockState.hpp"
#include "minecraft/world/level/Level.hpp"

namespace mc::helpers
{
    struct BlockBatchResult
    {
        uint64_t visited = 0;
        bool completed   = false;
    };

    template<typename Callback>
    BlockBatchResult processBlockBatch(Level &level, RegionCursor &cursor, uint64_t maxVisits, Callback callback)
    {
        BlockBatchResult result;
        int x;
        int y;
        int z;
        while (result.visited < maxVisits && cursor.current(x, y, z))
        {
            BlockPos pos(x, y, z);
            const BlockState *state = level.getBlockState(pos);
            const bool proceed      = callback(pos, state);
            ++result.visited;
            cursor.advance();
            if (!proceed)
            {
                break;
            }
        }
        result.completed = cursor.done;
        return result;
    }
}
