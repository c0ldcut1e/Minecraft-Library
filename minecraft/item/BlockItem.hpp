#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Item.hpp"
#include "ItemInstance.hpp"
#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"
#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/Direction.hpp"
#include "world/Level.hpp"

namespace mc
{
    class BlockItem : public Item
    {
    public:
        BlockItem(Block *block)
        {
            MLINK_FUNC(void, 0x02171ECC, BlockItem *, Block *)(this, block);
        }

        bool mayPlace(Level *level, const BlockPos &pos, Direction *direction, const mboost::shared_ptr<Player> &player,
                      const mboost::shared_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x02173C88, BlockItem *, Level *, const BlockPos &, Direction *, const mboost::shared_ptr<Player> &,
                              const mboost::shared_ptr<ItemInstance> &)(this, level, pos, direction, player, item);
        }

        uint32_t field_0x78;
    };
    MC_CHECK_SIZE(BlockItem, 0x7C);
} // namespace mc
