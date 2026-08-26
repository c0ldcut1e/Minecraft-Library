#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Entity.hpp"
#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"
#include "item/Item.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class ItemEntity : public Entity
    {
    public:
        ItemEntity(Level *level)
        {
            MLINK_FUNC(void, 0x024DC21C, ItemEntity *, Level *)(this, level);
        }

        ItemEntity(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x024DC0F8, ItemEntity *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        ItemEntity(Level *level, double xPos, double yPos, double zPos, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x024D3B60, ItemEntity *, Level *, double, double, double, const mboost::shared_ptr<ItemInstance> &)(this, level, xPos,
                                                                                                                                  yPos, zPos, item);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252D668)();
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, ItemEntity *itemEntity)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308C95C, mboost::shared_ptr<Entity> *, ItemEntity *)(out, itemEntity);
        }

        void playerTouch(const mboost::shared_ptr<Player> &player)
        {
            MLINK_FUNC(void, 0x024E0300, ItemEntity *, const mboost::shared_ptr<Player> &)(this, player);
        }

        void setDefaultPickUpDelay()
        {
            MLINK_FUNC(void, 0x024D3D54, ItemEntity *)(this);
        }

        void setItem(const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x024D3898, ItemEntity *, const mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        void setNeverPickUp()
        {
            MLINK_FUNC(void, 0x024E1130, ItemEntity *)(this);
        }

        void setPickUpDelay(int delay)
        {
            MLINK_FUNC(void, 0x024E113C, ItemEntity *, int)(this, delay);
        }

        void setShortLifeTime()
        {
            MLINK_FUNC(void, 0x024DEB94, ItemEntity *)(this);
        }

        int lifeTime;
        int pickUpDelay;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
        uint32_t field_0x370;
        uint32_t field_0x374;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
        uint32_t field_0x388;
        uint32_t field_0x38C;
        uint32_t field_0x390;
        uint32_t field_0x394;
        uint32_t field_0x398;
        uint32_t field_0x39C;
    };
    MC_CHECK_SIZE(ItemEntity, 0x3A0);
} // namespace mc
