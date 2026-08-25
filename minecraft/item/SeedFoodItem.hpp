#pragma once

#include "mlink/MLink.hpp"

#include "FoodItem.hpp"
#include "InteractionResultHolder.hpp"
#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"
#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/Direction.hpp"
#include "utils/InteractionHand.hpp"
#include "world/Level.hpp"

namespace mc
{
    class SeedFoodItem : public FoodItem
    {
    public:
        // The game constructor initializes FoodItem itself; use this placement-style
        // entry point to avoid running the Item base constructor twice.
        static SeedFoodItem *__ct(SeedFoodItem *ptr, int nutrition, float saturationModifier, Block *cropBlock, Block *soilBlock)
        {
            return MLINK_FUNC(SeedFoodItem *, 0x028851D0, SeedFoodItem *, int, float, Block *, Block *)(ptr, nutrition, saturationModifier, cropBlock,
                                                                                                        soilBlock);
        }

        InteractionResult::EInteractionResult useOn(const mboost::shared_ptr<Player> &player, Level *level, const BlockPos &pos,
                                                    InteractionHand::EInteractionHand hand, Direction *direction, float hitX, float hitY, float hitZ,
                                                    bool insideBlock)
        {
            return MLINK_FUNC(InteractionResult::EInteractionResult, 0x02885290, SeedFoodItem *, mboost::shared_ptr<Player>, Level *,
                              const BlockPos &, InteractionHand::EInteractionHand, Direction *, float, float, float,
                              bool)(this, player, level, pos, hand, direction, hitX, hitY, hitZ, insideBlock);
        }

        Block *cropBlock;
        Block *soilBlock;
    };
    MC_CHECK_SIZE(SeedFoodItem, 0x94);
} // namespace mc
