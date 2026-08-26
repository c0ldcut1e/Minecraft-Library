#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Container.hpp"
#include "MinecraftLib.hpp"
#include "client/resource/NonNullList.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/Item.hpp"
#include "item/ItemInstance.hpp"
#include "nbt/CompoundTag.hpp"
#include "nbt/ListTag.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Inventory : public Container
    {
    public:
        static bool isHotbarSlot(int slot)
        {
            return MLINK_FUNC(bool, 0x02497F5C, int)(slot);
        }

        static int getSelectionSize()
        {
            return MLINK_FUNC(int, 0x02497FEC)();
        }

        void add(int slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0249C0D4, Inventory *, int, const mboost::shared_ptr<ItemInstance> &)(this, slot, item);
        }

        bool add(const mboost::shared_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x0249D300, Inventory *, const mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        void clearContent()
        {
            MLINK_FUNC(void, 0x024A2C94, Inventory *)(this);
        }

        bool canPlaceItem(int slot, const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x024A24C8, Inventory *, int, mboost::not_null_ptr<ItemInstance>)(this, slot, item);
        }

        int countMatches(const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(int, 0x024A2FF0, Inventory *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        int findSlotMatchingUnusedItem(const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(int, 0x024998E0, Inventory *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        int getContainerData(int index)
        {
            return MLINK_FUNC(int, 0x024A2C80, Inventory *, int)(this, index);
        }

        int getContainerDataCount()
        {
            return MLINK_FUNC(int, 0x024A2C8C, Inventory *)(this);
        }

        int getContainerSize()
        {
            return MLINK_FUNC(int, 0x024A0600, Inventory *)(this);
        }

        int getFreeSlot()
        {
            return MLINK_FUNC(int, 0x0249855C, Inventory *)(this);
        }

        int getMaxStackSize()
        {
            return MLINK_FUNC(int, 0x024A100C, Inventory *)(this);
        }

        int getSlot(Item *item, int auxValue, CompoundTag *tag)
        {
            return MLINK_FUNC(int, 0x024A360C, Inventory *, Item *, int, CompoundTag *)(this, item, auxValue, tag);
        }

        int getSuitableHotbarSlot()
        {
            return MLINK_FUNC(int, 0x02498CB4, Inventory *)(this);
        }

        void dropAll()
        {
            MLINK_FUNC(void, 0x024A1878, Inventory *)(this);
        }

        int findSlotMatchingItem(const mboost::shared_ptr<ItemInstance> &item, bool param_2)
        {
            return MLINK_FUNC(int, 0x02498A34, Inventory *, const mboost::shared_ptr<ItemInstance> &, bool)(this, item, param_2);
        }

        void getCarried(mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x024A22D8, Inventory *, mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        void getItem(uint32_t slot, mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x024A0B9C, Inventory *, mboost::shared_ptr<ItemInstance> &, uint32_t)(this, item, slot);
        }

        bool hasPickedItem()
        {
            return MLINK_FUNC(bool, 0x02498A20, Inventory *)(this);
        }

        bool hasResource(Item *item)
        {
            return MLINK_FUNC(bool, 0x024A489C, Inventory *, Item *)(this, item);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x024A0618, Inventory *)(this);
        }

        void pickSlot(int slot)
        {
            MLINK_FUNC(void, 0x024991F8, Inventory *, int)(this, slot);
        }

        void placeItemBackInInventory(Level *level, const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0249D3FC, Inventory *, Level *, mboost::not_null_ptr<ItemInstance>)(this, level, item);
        }

        bool removeResource(Item *item, bool includeOffhand)
        {
            return MLINK_FUNC(bool, 0x024A3C9C, Inventory *, Item *, bool)(this, item, includeOffhand);
        }

        bool removeResource(Item *item, int count, bool includeOffhand)
        {
            return MLINK_FUNC(bool, 0x024A3DA0, Inventory *, Item *, int, bool)(this, item, count, includeOffhand);
        }

        bool removeResources(const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x024A3EA0, Inventory *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        bool removeResourcesWithTags(const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x024A42C4, Inventory *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        void setContainerData(int index, int value)
        {
            MLINK_FUNC(void, 0x024A2C88, Inventory *, int, int)(this, index, value);
        }

        void setPickedItem(const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x024994CC, Inventory *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        const mboost::shared_ptr<ItemInstance> &getSelected()
        {
            return MLINK_FUNC(const mboost::shared_ptr<ItemInstance> &, 0x02497F7C, Inventory *)(this);
        }

        void load(ListTag *listTag)
        {
            MLINK_FUNC(void, 0x0249FB30, Inventory *, ListTag *)(this, listTag);
        }

        void save(ListTag *listTag)
        {
            MLINK_FUNC(void, 0x0249F5FC, Inventory *, ListTag *)(this, listTag);
        }

        void setCarried(const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x024A20F8, Inventory *, const mboost::not_null_ptr<ItemInstance> &)(this, item);
        }

        void setChanged()
        {
            MLINK_FUNC(void, 0x024A20E8, Inventory *)(this);
        }

        void setItem(uint32_t index, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0249EFAC, Inventory *, uint32_t, const mboost::shared_ptr<ItemInstance> &)(this, index, item);
        }

        void swapPaint(int wheel)
        {
            MLINK_FUNC(void, 0x02499D98, Inventory *, int)(this, wheel);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0249BBF4, Inventory *)(this);
        }

        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        NonNullList<mboost::not_null_ptr<ItemInstance>> items;
        NonNullList<mboost::not_null_ptr<ItemInstance>> armor;
        NonNullList<mboost::not_null_ptr<ItemInstance>> offhand;
        uint32_t field_0x68;
        int hotbarSlot;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
    };
    MC_CHECK_SIZE(Inventory, 0x8C);
} // namespace mc
