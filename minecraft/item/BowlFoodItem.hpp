#pragma once

#include "mlink/MLink.hpp"

#include "FoodItem.hpp"
#include "ItemInstance.hpp"
#include "MinecraftLib.hpp"
#include "entity/LivingEntity.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class BowlFoodItem : public FoodItem
    {
    public:
        static BowlFoodItem *__ct(BowlFoodItem *ptr, int nutrition)
        {
            return MLINK_FUNC(BowlFoodItem *, 0x02165920, BowlFoodItem *, int)(ptr, nutrition);
        }

        void finishUsingItem(const mboost::not_null_ptr<ItemInstance> &instance, Level *level, const mboost::shared_ptr<LivingEntity> &entity)
        {
            MLINK_FUNC(void, 0x021659B8, BowlFoodItem *, const mboost::not_null_ptr<ItemInstance> &, Level *,
                       const mboost::shared_ptr<LivingEntity> &)(this, instance, level, entity);
        }
    };
    MC_CHECK_SIZE(BowlFoodItem, 0x8C);
} // namespace mc
