#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Item.hpp"
#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class BowItem : public Item
    {
    public:
        BowItem()
        {
            MLINK_FUNC(void, 0x02162460, BowItem *)(this);
        }

        Item *releaseUsing(const mboost::shared_ptr<ItemInstance> &instance, Level *level, const mboost::shared_ptr<LivingEntity> &entity,
                           int param_4)
        {
            return MLINK_FUNC(Item *, 0x02164810, BowItem *, const mboost::shared_ptr<ItemInstance> &, Level *,
                              const mboost::shared_ptr<LivingEntity> &, int)(this, instance, level, entity, param_4);
        }

        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
    };
    MC_CHECK_SIZE(BowItem, 0x84);
} // namespace mc
