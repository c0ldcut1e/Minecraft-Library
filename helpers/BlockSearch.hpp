#pragma once

#include <cstdint>

#include "helpers/BlockRegion.hpp"
#include "minecraft/block/BlockPos.hpp"
#include "minecraft/block/BlockState.hpp"
#include "minecraft/world/level/Level.hpp"

namespace mc::helpers
{
    struct BlockSearchResult
    {
        uint64_t visited = 0;
        uint64_t matched = 0;
        bool hasMatch    = false;
        bool completed   = false;
        int firstX       = 0;
        int firstY       = 0;
        int firstZ       = 0;
    };

    // Predicate receives a position and its state. maxVisits limits reads, and
    // stopAfterFirst can be used when only the first matching position is needed.
    template<typename Predicate>
    BlockSearchResult searchBlocks(Level &level, const BlockRegion &region, uint64_t maxVisits, bool stopAfterFirst, Predicate predicate)
    {
        BlockSearchResult result;
        result.completed = visitRegion(region,
                                       [&](int x, int y, int z)
                                       {
                                           if (result.visited >= maxVisits)
                                           {
                                               return false;
                                           }
                                           BlockPos position(x, y, z);
                                           const BlockState *state = level.getBlockState(position);
                                           ++result.visited;
                                           if (predicate(position, state))
                                           {
                                               ++result.matched;
                                               if (!result.hasMatch)
                                               {
                                                   result.firstX   = x;
                                                   result.firstY   = y;
                                                   result.firstZ   = z;
                                                   result.hasMatch = true;
                                               }
                                               if (stopAfterFirst)
                                               {
                                                   return false;
                                               }
                                           }
                                           return true;
                                       });
        return result;
    }
} // namespace mc::helpers
