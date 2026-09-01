#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"
#include "block/BlockState.hpp"
#include "client/app/ACTUuid.hpp"
#include "entity/Entity.hpp"
#include "entity/decoration/ItemFrame.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/InteractionResultHolder.hpp"
#include "item/Item.hpp"
#include "nbt/CompoundTag.hpp"
#include "nbt/ListTag.hpp"
#include "nbt/Tag.hpp"
#include "utils/Direction.hpp"
#include "utils/EquipmentSlot.hpp"
#include "utils/InteractionHand.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class LivingEntity;

    class Player;

    class ItemInstance
    {
    public:
        ItemInstance(Block *block)
        {
            MLINK_FUNC(void, 0x02485D44, ItemInstance *, Block *)(this, block);
        }

        ItemInstance(Block *block, int count)
        {
            MLINK_FUNC(void, 0x02485E60, ItemInstance *, Block *, int)(this, block, count);
        }

        ItemInstance(Block *block, int count, int auxValue)
        {
            MLINK_FUNC(void, 0x02485FA0, ItemInstance *, Block *, int, int)(this, block, count, auxValue);
        }

        ItemInstance(Item *item)
        {
            MLINK_FUNC(void, 0x024860B4, ItemInstance *, Item *)(this, item);
        }

        ItemInstance(Item *item, int count)
        {
            MLINK_FUNC(void, 0x024861BC, ItemInstance *, Item *, int)(this, item, count);
        }

        ItemInstance(Item *item, int count, int auxValue)
        {
            MLINK_FUNC(void, 0x024862D0, ItemInstance *, Item *, int, int)(this, item, count, auxValue);
        }

        ItemInstance(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x024868F8, ItemInstance *, CompoundTag *)(this, tag);
        }

        ItemInstance(const ItemInstance &other)
        {
            MLINK_FUNC(void, 0x02A331BC, ItemInstance *, const ItemInstance &)(this, other);
        }

        ~ItemInstance()
        {
            MLINK_FUNC(void, 0x0247FE50, ItemInstance *, uint32_t)(this, 0);
        }

        static void addDataWalkers(MC_UNDEFINED_TYPE(uint32_t *, DataFixerUpper) dataFixerUpper)
        {
            MLINK_FUNC(void, 0x02486D78, MC_UNDEFINED_TYPE(uint32_t *, DataFixerUpper))(dataFixerUpper);
        }

        static void toShared(mboost::shared_ptr<ItemInstance> &result, ItemInstance *item)
        {
            MLINK_FUNC(void, 0x03087368, mboost::shared_ptr<ItemInstance> *, ItemInstance *)(&result, item);
        }

        static void toShared(const mboost::shared_ptr<ItemInstance> &result, ItemInstance *item)
        {
            MLINK_FUNC(void, 0x03087368, const mboost::shared_ptr<ItemInstance> *, ItemInstance *)(&result, item);
        }

        static bool tagMatches(const mboost::not_null_ptr<ItemInstance> &first, const mboost::not_null_ptr<ItemInstance> &second)
        {
            return MLINK_FUNC(bool, 0x0248A350, const mboost::not_null_ptr<ItemInstance> &, const mboost::not_null_ptr<ItemInstance> &)(first,
                                                                                                                                        second);
        }

        static bool matches(const mboost::not_null_ptr<ItemInstance> &first, const mboost::not_null_ptr<ItemInstance> &second, bool compareDamage)
        {
            return MLINK_FUNC(bool, 0x0248A7A8, const mboost::not_null_ptr<ItemInstance> &, const mboost::not_null_ptr<ItemInstance> &,
                              bool)(first, second, compareDamage);
        }

        static bool isSame(const mboost::not_null_ptr<ItemInstance> &first, const mboost::not_null_ptr<ItemInstance> &second)
        {
            return MLINK_FUNC(bool, 0x0248AA9C, const mboost::not_null_ptr<ItemInstance> &, const mboost::not_null_ptr<ItemInstance> &)(first,
                                                                                                                                        second);
        }

        static bool isSameIgnoreDurability(const mboost::not_null_ptr<ItemInstance> &first, const mboost::not_null_ptr<ItemInstance> &second)
        {
            return MLINK_FUNC(bool, 0x0248ACF4, const mboost::not_null_ptr<ItemInstance> &, const mboost::not_null_ptr<ItemInstance> &)(first,
                                                                                                                                        second);
        }

        void _init(Item *item, int count, int auxValue)
        {
            MLINK_FUNC(void, 0x02485718, ItemInstance *, Item *, int, int)(this, item, count, auxValue);
        }

        void updateEmptyCacheFlag()
        {
            MLINK_FUNC(void, 0x02479E30, ItemInstance *)(this);
        }

        void copy(mboost::not_null_ptr<ItemInstance> &result)
        {
            MLINK_FUNC(void, 0x02486E20, ItemInstance *, mboost::not_null_ptr<ItemInstance> *)(this, &result);
        }

        mboost::not_null_ptr<ItemInstance> copy()
        {
            mboost::not_null_ptr<ItemInstance> result;
            copy(result);
            return result;
        }

        ItemInstance *copy_not_shared()
        {
            return MLINK_FUNC(ItemInstance *, 0x0248A2DC, ItemInstance *)(this);
        }

        void grow(int amount)
        {
            MLINK_FUNC(void, 0x02487294, ItemInstance *, int)(this, amount);
        }

        void shrink(int amount)
        {
            MLINK_FUNC(void, 0x024872AC, ItemInstance *, int)(this, amount);
        }

        void split(mboost::not_null_ptr<ItemInstance> &result, int amount)
        {
            MLINK_FUNC(void, 0x024872C0, ItemInstance *, mboost::not_null_ptr<ItemInstance> *, int)(this, &result, amount);
        }

        mboost::not_null_ptr<ItemInstance> split(int amount)
        {
            mboost::not_null_ptr<ItemInstance> result;
            split(result, amount);
            return result;
        }

        InteractionResult::EInteractionResult useOn(mboost::shared_ptr<Player> player, Level *level, const BlockPos &pos,
                                                    InteractionHand::EInteractionHand hand, const Direction *face, float hitX, float hitY, float hitZ,
                                                    bool isInside)
        {
            return MLINK_FUNC(InteractionResult::EInteractionResult, 0x0248752C, ItemInstance *, mboost::shared_ptr<Player>, Level *,
                              const BlockPos &, InteractionHand::EInteractionHand, const Direction *, float, float, float,
                              bool)(this, player, level, pos, hand, face, hitX, hitY, hitZ, isInside);
        }

        float getDestroySpeed(const BlockState *state)
        {
            return MLINK_FUNC(float, 0x02487A6C, ItemInstance *, const BlockState *)(this, state);
        }

        int TestUse(Level *level, mboost::shared_ptr<Player> player, InteractionHand::EInteractionHand hand)
        {
            return MLINK_FUNC(int, 0x02487D3C, ItemInstance *, Level *, mboost::shared_ptr<Player>, InteractionHand::EInteractionHand)(this, level,
                                                                                                                                       player, hand);
        }

        uint32_t use(Level *level, mboost::shared_ptr<Player> player, InteractionHand::EInteractionHand hand)
        {
            return MLINK_FUNC(uint32_t, 0x02487E64, ItemInstance *, Level *, mboost::shared_ptr<Player>,
                              InteractionHand::EInteractionHand)(this, level, player, hand);
        }

        void finishUsingItem(Level *level, mboost::shared_ptr<Player> player)
        {
            MLINK_FUNC(void, 0x02487F94, ItemInstance *, Level *, mboost::shared_ptr<Player>)(this, level, player);
        }

        CompoundTag *save(CompoundTag *tag)
        {
            return MLINK_FUNC(CompoundTag *, 0x024884F8, ItemInstance *, CompoundTag *)(this, tag);
        }

        int getCount()
        {
            return MLINK_FUNC(int, 0x02479E14, ItemInstance *)(this);
        }

        void setCount(int count)
        {
            MLINK_FUNC(void, 0x02479E6C, ItemInstance *, int)(this, count);
        }

        Item *getItem()
        {
            return MLINK_FUNC(Item *, 0x0247B718, ItemInstance *)(this);
        }

        int getMaxStackSize()
        {
            return MLINK_FUNC(int, 0x0248881C, ItemInstance *)(this);
        }

        bool hasTag()
        {
            return MLINK_FUNC(bool, 0x02488860, ItemInstance *)(this);
        }

        CompoundTag *getTag()
        {
            return MLINK_FUNC(CompoundTag *, 0x02488888, ItemInstance *)(this);
        }

        bool isDamageableItem()
        {
            return MLINK_FUNC(bool, 0x02488890, ItemInstance *)(this);
        }

        bool isDamaged()
        {
            return MLINK_FUNC(bool, 0x024889EC, ItemInstance *)(this);
        }

        bool isStackable()
        {
            return MLINK_FUNC(bool, 0x02488A4C, ItemInstance *)(this);
        }

        bool isStackedByData()
        {
            return MLINK_FUNC(bool, 0x02488AE0, ItemInstance *)(this);
        }

        int getDamageValue()
        {
            return MLINK_FUNC(int, 0x02488B1C, ItemInstance *)(this);
        }

        int getAuxValue()
        {
            return MLINK_FUNC(int, 0x02488B24, ItemInstance *)(this);
        }

        void setAuxValue(int auxValue)
        {
            MLINK_FUNC(void, 0x02488B2C, ItemInstance *, int)(this, auxValue);
        }

        int getMaxDamage()
        {
            return MLINK_FUNC(int, 0x02488B40, ItemInstance *)(this);
        }

        bool hurt(int amount, MC_UNDEFINED_TYPE(uint32_t *, Random) random)
        {
            return MLINK_FUNC(bool, 0x02488B7C, ItemInstance *, int, MC_UNDEFINED_TYPE(uint32_t *, Random))(this, amount, random);
        }

        void hurtAndBreak(int amount, mboost::shared_ptr<LivingEntity> entity)
        {
            MLINK_FUNC(void, 0x024890F8, ItemInstance *, int, mboost::shared_ptr<LivingEntity>)(this, amount, entity);
        }

        bool hurtEnemy(mboost::shared_ptr<LivingEntity> target, mboost::shared_ptr<Player> attacker)
        {
            return MLINK_FUNC(bool, 0x02489720, ItemInstance *, mboost::shared_ptr<LivingEntity>, mboost::shared_ptr<Player>)(this, target, attacker);
        }

        bool mineBlock(Level *level, const BlockState *state, const BlockPos &pos, mboost::shared_ptr<Player> player)
        {
            return MLINK_FUNC(bool, 0x02489B20, ItemInstance *, Level *, const BlockState *, const BlockPos &,
                              mboost::shared_ptr<Player>)(this, level, state, pos, player);
        }

        bool canDestroySpecial(const BlockState *state)
        {
            return MLINK_FUNC(bool, 0x02489E80, ItemInstance *, const BlockState *)(this, state);
        }

        InteractionResult::EInteractionResult interactEnemy(mboost::shared_ptr<Player> player, mboost::shared_ptr<LivingEntity> target,
                                                            InteractionHand::EInteractionHand hand)
        {
            return MLINK_FUNC(InteractionResult::EInteractionResult, 0x02489ECC, ItemInstance *, mboost::shared_ptr<Player>,
                              mboost::shared_ptr<LivingEntity>, InteractionHand::EInteractionHand)(this, player, target, hand);
        }

        bool matches(const mboost::not_null_ptr<ItemInstance> &other, bool compareDamage)
        {
            return MLINK_FUNC(bool, 0x0248A5CC, ItemInstance *, const mboost::not_null_ptr<ItemInstance> &, bool)(this, other, compareDamage);
        }

        bool sameItem(const mboost::not_null_ptr<ItemInstance> &other)
        {
            return MLINK_FUNC(bool, 0x0248A994, ItemInstance *, const mboost::not_null_ptr<ItemInstance> &)(this, other);
        }

        bool sameItemIgnoreDurability(const mboost::not_null_ptr<ItemInstance> &other)
        {
            return MLINK_FUNC(bool, 0x0248ABE4, ItemInstance *, const mboost::not_null_ptr<ItemInstance> &)(this, other);
        }

        bool sameItemIgnoreDurability(const mboost::shared_ptr<ItemInstance> &other)
        {
            return MLINK_FUNC(bool, 0x0248ABE4, ItemInstance *, const mboost::shared_ptr<ItemInstance> &)(this, other);
        }

        bool sameItemWithTags(const mboost::not_null_ptr<ItemInstance> &other, mstd::vector<mstd::basic_string<wchar_t>> *exceptions = nullptr)
        {
            return MLINK_FUNC(bool, 0x0248AE3C, ItemInstance *, const mboost::not_null_ptr<ItemInstance> *,
                              mstd::vector<mstd::basic_string<wchar_t>> *)(this, &other, exceptions);
        }

        bool sameItem_not_shared(ItemInstance *other)
        {
            return MLINK_FUNC(bool, 0x0248B008, ItemInstance *, ItemInstance *)(this, other);
        }

        uint32_t getUseDescriptionId()
        {
            return MLINK_FUNC(uint32_t, 0x0248B088, ItemInstance *)(this);
        }

        uint32_t getDescriptionId()
        {
            return MLINK_FUNC(uint32_t, 0x0248B330, ItemInstance *)(this);
        }

        void inventoryTick(Level *level, mboost::shared_ptr<Entity> entity, int inventorySlot, bool isSelected)
        {
            MLINK_FUNC(void, 0x0248BA60, ItemInstance *, Level *, mboost::shared_ptr<Entity>, int, bool)(this, level, entity, inventorySlot,
                                                                                                         isSelected);
        }

        void onCraftedBy(Level *level, mboost::shared_ptr<Player> player, int amount)
        {
            MLINK_FUNC(void, 0x0248BDCC, ItemInstance *, Level *, mboost::shared_ptr<Player>, int)(this, level, player, amount);
        }

        int getUseDuration()
        {
            return MLINK_FUNC(int, 0x0248D7D8, ItemInstance *)(this);
        }

        int getUseAnimation()
        {
            return MLINK_FUNC(int, 0x0248DA80, ItemInstance *)(this);
        }

        void releaseUsing(Level *level, mboost::shared_ptr<LivingEntity> entity, int remainingUseTicks)
        {
            MLINK_FUNC(void, 0x0248DD28, ItemInstance *, Level *, mboost::shared_ptr<LivingEntity>, int)(this, level, entity, remainingUseTicks);
        }

        void setTag(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x0248E080, ItemInstance *, CompoundTag *)(this, tag);
        }

        void addTagElement(const mstd::basic_string<wchar_t> &key, Tag *tag)
        {
            MLINK_FUNC(void, 0x0248E0D8, ItemInstance *, const mstd::basic_string<wchar_t> &, Tag *)(this, key, tag);
        }

        CompoundTag *getOrCreateTagElement(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(CompoundTag *, 0x0248E20C, ItemInstance *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        Tag *getTagElement(const mstd::basic_string<wchar_t> &key)
        {
            return MLINK_FUNC(Tag *, 0x0248E348, ItemInstance *, const mstd::basic_string<wchar_t> &)(this, key);
        }

        ListTag *getEnchantmentTags()
        {
            return MLINK_FUNC(ListTag *, 0x0248E3DC, ItemInstance *)(this);
        }

        bool wasCreatedByRestrictedPlayer()
        {
            return MLINK_FUNC(bool, 0x0248E580, ItemInstance *)(this);
        }

        void getHoverName(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x0248ED38, ItemInstance *, mstd::basic_string<wchar_t> &)(this, result);
        }

        void setHoverName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0248F904, ItemInstance *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setCensorshipInfo(const mstd::basic_string<wchar_t> &name, bool restricted)
        {
            MLINK_FUNC(void, 0x0248FC80, ItemInstance *, const mstd::basic_string<wchar_t> &, bool)(this, name, restricted);
        }

        void getOwnerUUID(ACTUuid &result)
        {
            MLINK_FUNC(void, 0x024901A0, ItemInstance *, ACTUuid *)(this, &result);
        }

        bool wasCreatedOnHost()
        {
            return MLINK_FUNC(bool, 0x0249039C, ItemInstance *)(this);
        }

        void resetHoverName()
        {
            MLINK_FUNC(void, 0x02490528, ItemInstance *)(this);
        }

        bool hasCustomHoverName()
        {
            return MLINK_FUNC(bool, 0x024907E8, ItemInstance *)(this);
        }

        MC_UNDEFINED_TYPE(uint32_t *, AttributeModifiers) getAttributeModifiers(const EquipmentSlot *slot)
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(uint32_t *, AttributeModifiers), 0x02491894, ItemInstance *, const EquipmentSlot *)(this, slot);
        }

        bool hasFoil()
        {
            return MLINK_FUNC(bool, 0x0249565C, ItemInstance *)(this);
        }

        MC_UNDEFINED_TYPE(uint32_t, Rarity) getRarity()
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(uint32_t, Rarity), 0x02495904, ItemInstance *)(this);
        }

        bool isEnchanted()
        {
            return MLINK_FUNC(bool, 0x02495BAC, ItemInstance *)(this);
        }

        bool isEnchantable()
        {
            return MLINK_FUNC(bool, 0x02495D60, ItemInstance *)(this);
        }

        void enchant(MC_UNDEFINED_TYPE(uint32_t *, Enchantment) enchantment, int level)
        {
            MLINK_FUNC(void, 0x02496058, ItemInstance *, MC_UNDEFINED_TYPE(uint32_t *, Enchantment), int)(this, enchantment, level);
        }

        bool mayBePlacedInAdventureMode()
        {
            return MLINK_FUNC(bool, 0x02496464, ItemInstance *)(this);
        }

        bool isFramed()
        {
            return MLINK_FUNC(bool, 0x024964A0, ItemInstance *)(this);
        }

        void setFramed(mboost::shared_ptr<ItemFrame> frame)
        {
            MLINK_FUNC(void, 0x024964CC, ItemInstance *, mboost::shared_ptr<ItemFrame>)(this, frame);
        }

        void getFrame(mboost::shared_ptr<ItemFrame> &result)
        {
            MLINK_FUNC(void, 0x02496610, ItemInstance *, mboost::shared_ptr<ItemFrame> *)(this, &result);
        }

        mboost::shared_ptr<ItemFrame> getFrame()
        {
            mboost::shared_ptr<ItemFrame> result;
            getFrame(result);
            return result;
        }

        int getBaseRepairCost()
        {
            return MLINK_FUNC(int, 0x02496700, ItemInstance *)(this);
        }

        void setRepairCost(int cost)
        {
            MLINK_FUNC(void, 0x024968A8, ItemInstance *, int)(this, cost);
        }

        bool hasAdventureModeBreakTagForBlock(Block *block)
        {
            return MLINK_FUNC(bool, 0x024969B4, ItemInstance *, Block *)(this, block);
        }

        bool hasAdventureModePlaceTagForBlock(Block *block)
        {
            return MLINK_FUNC(bool, 0x02496AB4, ItemInstance *, Block *)(this, block);
        }

        int getPopTime()
        {
            return MLINK_FUNC(int, 0x02496B4C, ItemInstance *)(this);
        }

        void setPopTime(int popTime)
        {
            MLINK_FUNC(void, 0x02496B54, ItemInstance *, int)(this, popTime);
        }

        void set4JData(int data)
        {
            MLINK_FUNC(void, 0x02496BD8, ItemInstance *, int)(this, data);
        }

        int get4JData()
        {
            return MLINK_FUNC(int, 0x02496E34, ItemInstance *)(this);
        }

        bool hasPotionStrengthBar()
        {
            return MLINK_FUNC(bool, 0x02496FC4, ItemInstance *)(this);
        }

        uint32_t GetPotionStrength()
        {
            return MLINK_FUNC(uint32_t, 0x02496FF4, ItemInstance *)(this);
        }

        bool isEmpty() const
        {
            return MLINK_FUNC(bool, 0x02479AC8, const ItemInstance *)(this);
        }

        ItemInstance &operator=(const ItemInstance &other)
        {
            return MLINK_FUNC(ItemInstance &, 0x02E56B14, ItemInstance *, const ItemInstance &)(this, other);
        }

        mboost::shared_ptr<ItemInstance> self;
        int count;
        uint32_t popTime;
        Item *item;
        CompoundTag *tag;
        bool empty;
        uint8_t field_0x19;
        uint8_t field_0x1A;
        uint8_t field_0x1B;
        uint32_t auxValue;
        uint32_t field_0x20;
        mboost::shared_ptr<ItemFrame> frame;
        mboost::shared_ptr<MC_UNDEFINED_TYPE(uint32_t, CensoredString)> censorshipInfo;
        Block *cachedCanDestroyBlock;
        bool cachedCanDestroy;
        uint8_t field_0x39;
        uint8_t field_0x3A;
        uint8_t field_0x3B;
        Block *cachedCanPlaceBlock;
        bool cachedCanPlace;
        uint8_t field_0x41;
        uint8_t field_0x42;
        uint8_t field_0x43;
    };
    MC_CHECK_SIZE(ItemInstance, 0x44);
} // namespace mc
