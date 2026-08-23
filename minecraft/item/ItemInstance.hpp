#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Item.hpp"
#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "client/resource/ResourceLocation.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "registry/MappedRegistry.hpp"

namespace mc
{
    class ItemInstance
    {
    public:
        ItemInstance(Item *item, int count = 1, int aux = 0)
        {
            __ct(this, item, count, aux);
        }

        ItemInstance(Block *block, int count = 1, int aux = 0)
        {
            __ct(this, block, count, aux);
        }

        ItemInstance(int id, int count = 1, int aux = 0)
        {
            __ct(this, mc::Item::byId(id), count, aux);
        }

        ItemInstance(const mstd::basic_string<wchar_t> &name, int count = 1, int aux = 0)
        {
            __ct(this, ItemRegistry::GetInstance()->get(ResourceLocation(name)), count, aux);
        }

        static ItemInstance *__ct(ItemInstance *ptr, Item *item, int count, int aux)
        {
            return MLINK_FUNC(ItemInstance *, 0x024862D0, ItemInstance *, Item *, int, int)(ptr, item, count, aux);
        }

        static ItemInstance *__ct(ItemInstance *ptr, Block *block, int count, int aux)
        {
            return MLINK_FUNC(ItemInstance *, 0x02485FA0, ItemInstance *, Block *, int, int)(ptr, block, count, aux);
        }

        static void toShared(const mboost::shared_ptr<ItemInstance> &result, ItemInstance *src)
        {
            MLINK_FUNC(void, 0x03087368, const mboost::shared_ptr<ItemInstance> &, ItemInstance *)(result, src);
        }

        void copy(mboost::shared_ptr<ItemInstance> &result)
        {
            MLINK_FUNC(void, 0x02486E20, ItemInstance *, mboost::shared_ptr<ItemInstance> &)(this, result);
        }

        mboost::shared_ptr<ItemInstance> copy()
        {
            mboost::shared_ptr<ItemInstance> result;
            copy(result);
            return result;
        }

        int getAuxValue()
        {
            return MLINK_FUNC(int, 0x02488B24, ItemInstance *)(this);
        }

        void getHoverName(mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0248ED38, ItemInstance *, mstd::basic_string<wchar_t> &)(this, name);
        }

        int getUseAnimation()
        {
            return MLINK_FUNC(int, 0x0248DA80, ItemInstance *)(this);
        }

        int getUseDuration()
        {
            return MLINK_FUNC(int, 0x0248D7D8, ItemInstance *)(this);
        }

        bool hasFoil()
        {
            return MLINK_FUNC(bool, 0x0249565C, ItemInstance *)(this);
        }

        bool hasTag()
        {
            return MLINK_FUNC(bool, 0x02488860, ItemInstance *)(this);
        }

        bool isEmpty() const
        {
            return MLINK_FUNC(bool, 0x02479AC8, const ItemInstance *)(this);
        }

        bool sameItemIgnoreDurability(const mboost::shared_ptr<ItemInstance> &target)
        {
            return MLINK_FUNC(bool, 0x0248ABE4, ItemInstance *, const mboost::shared_ptr<ItemInstance> &)(this, target);
        }

        void setTag(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x0248E080, ItemInstance *, CompoundTag *)(this, tag);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        int amount;
        uint32_t field_0xC;
        Item *base;
        CompoundTag *tag;
        uint32_t field_0x18; // used by hasTag
        int damage;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
    };
    MC_CHECK_SIZE(ItemInstance, 0x44);
} // namespace mc
