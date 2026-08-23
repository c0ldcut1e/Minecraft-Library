#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/texture/TextureAtlasSprite.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "utils/Direction.hpp"
#include "utils/InteractionHand.hpp"

namespace mc
{
    class VTable_Item;
    class ResourceLocation;
    class Block;
    class ItemInstance;
    class ItemToolTipDataHolder;
    class Entity;
    class LivingEntity;
    class Player;
    class Level;

    class Item
    {
    public:
        Item()
        {
            MLINK_FUNC(void, 0x024B65D8, Item *)(this);
        }

        static Item *byId(int id)
        {
            return MLINK_FUNC(Item *, 0x02486698, int)(id);
        }

        static bool isItemABlock(int id)
        {
            return MLINK_FUNC(bool, 0x024CF838, int)(id);
        }

        static void registerBlock(Block *block)
        {
            MLINK_FUNC(void, 0x024B4A40, Block *)(block);
        }

        static void registerBlock(Block *block, Item *item)
        {
            MLINK_FUNC(void, 0x024B4978, Block *, Item *)(block, item);
        }

        static void registerItem(int id, const ResourceLocation &loc, Item *item)
        {
            MLINK_FUNC(void, 0x24B3D60, int, const ResourceLocation &, Item *)(id, loc, item);
        }

        uint32_t getBaseItemType()
        {
            return MLINK_FUNC(uint32_t, 0x024CFD24, Item *)(this);
        }

        int getId()
        {
            return MLINK_FUNC(int, 0x02492100, Item *)(this);
        }

        uint32_t getMaxStackSize()
        {
            return MLINK_FUNC(uint32_t, 0x024CFFC4, Item *)(this);
        }

        void HandEquipped()
        {
            MLINK_FUNC(void, 0x024B6904, Item *)(this);
        }

        bool hasMultipleSpriteLayers()
        {
            return MLINK_FUNC(uint8_t, 0x024D086C, Item *)(this);
        }

        bool isHandEquipped()
        {
            return MLINK_FUNC(uint8_t, 0x024D0030, Item *)(this);
        }

        bool isMirroredArt()
        {
            return MLINK_FUNC(uint8_t, 0x024D0038, Item *)(this);
        }

        void setAllowOffhand(bool allow)
        {
            MLINK_FUNC(void, 0x024B63BC, Item *, bool)(this, allow);
        }

        void setCraftingRemainingItem(uint32_t param_1)
        {
            MLINK_FUNC(void, 0x024B6C40, Item *, uint32_t)(this, param_1);
        }

        void setIconName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x024B2B90, Item *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setMaxDamage(uint32_t maxDamage)
        {
            MLINK_FUNC(void, 0x024B6910, Item *, uint32_t)(this, maxDamage);
        }

        void setMaxStackSize(int size)
        {
            MLINK_FUNC(void, 0x024B2BD8, Item *, int)(this, size);
        }

        void setStackedByData(bool value)
        {
            MLINK_FUNC(void, 0x024B6C48, Item *, uint8_t)(this, static_cast<uint8_t>(value));
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t maxStackSize;
        uint32_t maxDamage;
        TextureAtlasSprite *icon;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        mstd::basic_string<wchar_t> field_0x28;
        uint32_t mediaName;
        uint32_t mediaDescription;
        mstd::basic_string<wchar_t> iconName;
        uint32_t field_0x70;
        VTable_Item *vtable;
    };
    MC_CHECK_SIZE(Item, 0x78);

    class VTable_Item : public VTable
    {
    public:
        MC_VFUNC(void, Item, getDefaultInstance, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, verifyTagAfterLoad, CompoundTag *);
        MC_VFUNC(void, Item, GetUseTooltip, const ItemToolTipDataHolder &);
        MC_VFUNC(void, Item, Dtor, bool);
        MC_VFUNC(int, Item, useOn, const mboost::shared_ptr<Player> &, const BlockPos &, InteractionHand::EInteractionHand, Direction *, float, float,
                 float, bool);
        MC_VFUNC(void, Item, getDestroySpeed, const mboost::shared_ptr<ItemInstance> &, uint32_t *);
        MC_VFUNC(int, Item, TestUse, Level *, const mboost::shared_ptr<Player> &, InteractionHand::EInteractionHand);
        MC_VFUNC(uint32_t, Item, use, Level *, const mboost::shared_ptr<Player> &, InteractionHand::EInteractionHand);
        MC_VFUNC(void, Item, finishUsingItem, const mboost::shared_ptr<ItemInstance> &, Level *, const mboost::shared_ptr<LivingEntity> &);
        MC_VFUNC(void, Item, getMaxStackSize);
        MC_VFUNC(uint32_t, Item, getLevelDataForAuxValue, uint32_t);
        MC_VFUNC(bool, Item, hurtEnemy, const mboost::shared_ptr<ItemInstance> &, const mboost::shared_ptr<LivingEntity> &,
                 const mboost::shared_ptr<LivingEntity> &);
        MC_VFUNC(bool, Item, mineBlock, const mboost::shared_ptr<ItemInstance> &, Level *, const uint32_t *, const BlockPos &,
                 mboost::shared_ptr<LivingEntity> &);
        MC_VFUNC(int, Item, getAttackDamage, const mboost::shared_ptr<Entity> &);
        MC_VFUNC(bool, Item, canDestroySpecial_BlockState, uint32_t);
        MC_VFUNC(void, Item, interactEnemy, const mboost::shared_ptr<ItemInstance> &, const mboost::shared_ptr<Player> &,
                 const mboost::shared_ptr<LivingEntity> &, InteractionHand::EInteractionHand);
        MC_VFUNC(bool, Item, isHandEquipped);
        MC_VFUNC(bool, Item, isMirroredArt);
        MC_VFUNC(void, Item, getDescriptionId, uint32_t);
        MC_VFUNC(void, Item, getDescriptionId2, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, getUseDescriptionId);
        MC_VFUNC(bool, Item, shouldOverrideMultiplayerNBT);
        MC_VFUNC(void, Item, getUseDescriptionId2, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, inventoryTick, mboost::shared_ptr<ItemInstance> &, Level *, mboost::shared_ptr<Entity> &, int, bool);
        MC_VFUNC(int, Item, getColor, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(bool, Item, isComplex);
        MC_VFUNC(void, Item, onCraftedBy, const mboost::shared_ptr<ItemInstance> &, Level *, const mboost::shared_ptr<Player> &);
        MC_VFUNC(int, Item, getUseDuration, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(int, Item, getUseAnimation, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(Item *, Item, releaseUsing, const mboost::shared_ptr<ItemInstance> &, Level *, const mboost::shared_ptr<LivingEntity> &, int);
        MC_VFUNC(void, Item, appendHoverText, const mboost::shared_ptr<ItemInstance> &, const mboost::shared_ptr<Player> &,
                 const mstd::basic_string<wchar_t> &, bool);
        MC_VFUNC(wchar_t *, Item, getName, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(bool, Item, isFoil, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, getRarity, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(bool, Item, isEnchantable, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(int, Item, getEnchantmentValue);
        MC_VFUNC(bool, Item, mayBePlacedInAdventureMode);
        MC_VFUNC(bool, Item, isValidRepairItem, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, getDefaultAttributeModifiers__FPC13EquipmentSlot);
        MC_VFUNC(void, Item, registerIcons__FP12IconRegister);
        MC_VFUNC(void, Item, hasMultipleSpriteLayers);
        MC_VFUNC(void, Item, getLayerIcon, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, getIconType);
        MC_VFUNC(TextureAtlasSprite *, Item, getIcon, int aux);
        MC_VFUNC(TextureAtlasSprite *, Item, getIcon2, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, GetArmorType);
        MC_VFUNC(void, Item, GetOverrideCount);
        MC_VFUNC(void, Item, GetOverrideCountColour);
        MC_VFUNC(void, Item, GetOverrideCountIcon, const mboost::shared_ptr<ItemInstance> &);
        MC_VFUNC(void, Item, unknownItemVTable_0x18C);
        MC_VFUNC(void, Item, unknownItemVTable_0x194);
        MC_VFUNC(int, Item, getNutrition, const mboost::not_null_ptr<ItemInstance> &);
        MC_VFUNC(float, Item, getSaturationModifier, const mboost::not_null_ptr<ItemInstance> &);
    };
    MC_CHECK_SIZE(VTable_Item, 0x1B0);
} // namespace mc
