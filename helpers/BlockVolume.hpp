#pragma once

#include <cstdint>

#include "helpers/BlockRegion.hpp"
#include "minecraft/block/BlockPos.hpp"
#include "minecraft/block/BlockState.hpp"
#include "minecraft/world/level/Level.hpp"

namespace mc::helpers
{
    // Return false from the callback to stop the scan early.
    template<typename Callback>
    bool visitBlocks(Level &level, const BlockRegion &region, Callback callback)
    {
        return visitRegion(region,
                           [&level, &callback](int x, int y, int z)
                           {
                               BlockPos pos(x, y, z);
                               return callback(pos, level.getBlockState(pos));
                           });
    }

    // State matching uses pointer identity. The return value counts setBlock calls;
    // it does not confirm that the game accepted each change. The limit bounds
    // attempted changes, and the caller chooses flags and neighbor updates.
    inline uint64_t replaceBlocks(Level &level, const BlockRegion &region, const BlockState *from, const BlockState *to, int flags,
                                  bool updateNeighbors, uint64_t limit)
    {
        if (from == nullptr || to == nullptr || from == to || limit == 0)
        {
            return 0;
        }

        uint64_t replaced = 0;
        visitBlocks(level, region,
                    [&](const BlockPos &pos, const BlockState *state)
                    {
                        if (state == from)
                        {
                            level.setBlock(pos, to, flags, updateNeighbors);
                            ++replaced;
                        }
                        return replaced < limit;
                    });
        return replaced;
    }
} // namespace mc::helpers
