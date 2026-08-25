#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "utils/EquipmentSlot.hpp"
#include "world/Level.hpp"

namespace mc
{
    class ArmorStand : public LivingEntity
    {
    public:
        ArmorStand(Level *level)
        {
            MLINK_FUNC(void, 0x0208BAD4, ArmorStand *, Level *)(this, level);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, ArmorStand *armorStand)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308C32C, mboost::shared_ptr<Entity> *, ArmorStand *)(out, armorStand);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x020B3DBC)();
        }

        void setItemSlot(EquipmentSlot *slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0208C018, ArmorStand *, EquipmentSlot *, const mboost::shared_ptr<ItemInstance> &)(this, slot, item);
        }

        void setPoseIndex(int index)
        {
            MLINK_FUNC(void, 0x0208D974, ArmorStand *, int)(this, index);
        }

        void setShortArms(bool value)
        {
            MLINK_FUNC(void, 0x0202ECE8, ArmorStand *, bool)(this, value);
        }

        uint32_t field_0x5F0;
        uint32_t field_0x5F4;
        uint32_t field_0x5F8;
        uint32_t field_0x5FC;
        uint32_t field_0x600;
        uint32_t field_0x604;
        uint32_t field_0x608;
        uint32_t field_0x60C;
        uint32_t field_0x610;
        uint32_t field_0x614;
        uint32_t field_0x618;
        uint32_t field_0x61C;
        uint32_t field_0x620;
        uint32_t field_0x624;
    };
    MC_CHECK_SIZE(ArmorStand, 0x628);
} // namespace mc
