#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Item.hpp"
#include "ItemInstance.hpp"
#include "MinecraftLib.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/effect/MobEffectInstance.hpp"
#include "entity/player/Player.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class FoodItem : public Item
    {
    public:
        static FoodItem *__ct(FoodItem *ptr, int nutrition, float saturationModifier, bool meat)
        {
            return MLINK_FUNC(FoodItem *, 0x02413908, FoodItem *, int, float, bool)(ptr, nutrition, saturationModifier, meat);
        }

        static FoodItem *__ct(FoodItem *ptr, int nutrition, bool meat)
        {
            return MLINK_FUNC(FoodItem *, 0x024139C8, FoodItem *, int, bool)(ptr, nutrition, meat);
        }

        void finishUsingItem(const mboost::not_null_ptr<ItemInstance> &instance, Level *level, const mboost::shared_ptr<LivingEntity> &entity)
        {
            MLINK_FUNC(void, 0x02413A74, FoodItem *, const mboost::not_null_ptr<ItemInstance> &, Level *,
                       const mboost::shared_ptr<LivingEntity> &)(this, instance, level, entity);
        }

        void addEatEffect(const mboost::not_null_ptr<ItemInstance> &instance, Level *level, const mboost::shared_ptr<Player> &player)
        {
            MLINK_FUNC(void, 0x02414738, FoodItem *, const mboost::not_null_ptr<ItemInstance> &, Level *,
                       const mboost::shared_ptr<Player> &)(this, instance, level, player);
        }

        int getUseDuration(const mboost::not_null_ptr<ItemInstance> &instance)
        {
            return MLINK_FUNC(int, 0x024148A8, FoodItem *, const mboost::not_null_ptr<ItemInstance> &)(this, instance);
        }

        int getUseAnimation(const mboost::not_null_ptr<const ItemInstance> &instance)
        {
            return MLINK_FUNC(int, 0x024148C0, FoodItem *, const mboost::not_null_ptr<const ItemInstance> &)(this, instance);
        }

        bool canEat(const mboost::shared_ptr<Player> &player)
        {
            return MLINK_FUNC(bool, 0x02414C48, FoodItem *, const mboost::shared_ptr<Player> &)(this, player);
        }

        int getNutrition(const mboost::not_null_ptr<ItemInstance> &instance)
        {
            return MLINK_FUNC(int, 0x02414DD4, FoodItem *, const mboost::not_null_ptr<ItemInstance> &)(this, instance);
        }

        float getSaturationModifier(const mboost::not_null_ptr<ItemInstance> &instance)
        {
            return MLINK_FUNC(float, 0x02414EF0, FoodItem *, const mboost::not_null_ptr<ItemInstance> &)(this, instance);
        }

        bool isMeat()
        {
            return MLINK_FUNC(bool, 0x0241500C, FoodItem *)(this);
        }

        FoodItem *setEatEffect(MobEffectInstance *effect, float probability)
        {
            return MLINK_FUNC(FoodItem *, 0x02415014, FoodItem *, MobEffectInstance *, float)(this, effect, probability);
        }

        void setCanAlwaysEat()
        {
            MLINK_FUNC(void, 0x02415084, FoodItem *)(this);
        }

        void setIsFastFood()
        {
            MLINK_FUNC(void, 0x02415090, FoodItem *)(this);
        }

        int nutrition;
        float saturationModifier;
        bool meat;
        bool canAlwaysEat;
        bool fastFood;
        uint8_t field_0x83;
        MobEffectInstance *eatEffect;
        float eatEffectProbability;
    };
    MC_CHECK_SIZE(FoodItem, 0x8C);
} // namespace mc
