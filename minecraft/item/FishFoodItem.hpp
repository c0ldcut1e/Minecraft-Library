#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "FoodItem.hpp"
#include "ItemInstance.hpp"
#include "MinecraftLib.hpp"
#include "entity/player/Player.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class FishFoodItem : public FoodItem
    {
    public:
        static FishFoodItem *__ct(FishFoodItem *ptr, bool cooked)
        {
            return MLINK_FUNC(FishFoodItem *, 0x02376780, FishFoodItem *, bool)(ptr, cooked);
        }

        int getNutrition(const mboost::not_null_ptr<ItemInstance> &instance)
        {
            return MLINK_FUNC(int, 0x02376A90, FishFoodItem *, const mboost::not_null_ptr<ItemInstance> &)(this, instance);
        }

        float getSaturationModifier(const mboost::not_null_ptr<ItemInstance> &instance)
        {
            return MLINK_FUNC(float, 0x02376C0C, FishFoodItem *, const mboost::not_null_ptr<ItemInstance> &)(this, instance);
        }

        void addEatEffect(const mboost::not_null_ptr<ItemInstance> &instance, Level *level, const mboost::shared_ptr<Player> &player)
        {
            MLINK_FUNC(void, 0x02376D78, FishFoodItem *, const mboost::not_null_ptr<ItemInstance> &, Level *,
                       const mboost::shared_ptr<Player> &)(this, instance, level, player);
        }

        bool cooked;
        uint8_t field_0x8D;
        uint8_t field_0x8E;
        uint8_t field_0x8F;
    };
    MC_CHECK_SIZE(FishFoodItem, 0x90);
} // namespace mc
