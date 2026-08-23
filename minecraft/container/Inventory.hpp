#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Container.hpp"
#include "MinecraftLib.hpp"
#include "client/resource/NonNullList.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "nbt/ListTag.hpp"

namespace mc
{
    class Inventory : public Container
    {
    public:
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
