#pragma once

#include "mlink/MLink.hpp"

#include "entity/LivingEntity.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class EnchantmentHelper
    {
    public:
        static float getDamageBonus(const mboost::not_null_ptr<ItemInstance> &item, const mboost::shared_ptr<LivingEntity> &target)
        {
            return MLINK_FUNC(float, 0x022F4D88, const mboost::not_null_ptr<ItemInstance> &, const mboost::shared_ptr<LivingEntity> &)(item, target);
        }

        static int getFireAspect(const mboost::shared_ptr<LivingEntity> &attacker)
        {
            return MLINK_FUNC(int, 0x022F581C, const mboost::shared_ptr<LivingEntity> &)(attacker);
        }

        static int getKnockbackBonus(const mboost::shared_ptr<LivingEntity> &attacker, const mboost::shared_ptr<LivingEntity> &target)
        {
            return MLINK_FUNC(int, 0x022F5800, const mboost::shared_ptr<LivingEntity> &, const mboost::shared_ptr<LivingEntity> &)(attacker, target);
        }
    };
} // namespace mc
