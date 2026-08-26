#pragma once

#include <cstddef>
#include <cstdint>

#include "MinecraftLib.hpp"
#include "client/resource/NonNullList.hpp"
#include "internal/VTable.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "nbt/CompoundTag.hpp"
#include "utils/Common.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class VTable_Recipe;

    class Recipe
    {
    public:
        enum _eGroupType
        {
        };

        struct INGREDIENTS_REQUIRED
        {
            uint32_t ingredientCount;
            uint32_t flags;
            int *requiredItemIds;
            int *requiredCounts;
            int *requiredAuxValues;
            CompoundTag **requiredTags;
            void *recipePtr;
            uint32_t field_0x1C;
            void *fullItemSlotData;
        };

        MC_CHECK_SIZE(INGREDIENTS_REQUIRED, 0x24);
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        VTable_Recipe *vtable;
    };

    class CraftingContainer;

    class VTable_Recipe : public VTable
    {
    public:
        MC_VFUNC(void, Recipe, Dtor, bool dispose);
        MC_VFUNC(void, Recipe, matches, mboost::shared_ptr<CraftingContainer> container, Level *level);
        MC_VFUNC(void, Recipe, assemble, mboost::shared_ptr<CraftingContainer> container);
        MC_VFUNC(size_t, Recipe, size);
        MC_VFUNC(ItemInstance *, Recipe, getResultItem);
        MC_VFUNC(ItemInstance *, Recipe, getIngredientItem, int x, int y);
        MC_VFUNC(void, Recipe, getRemainingItems, NonNullList<mboost::shared_ptr<ItemInstance>> &result,
                 mboost::shared_ptr<CraftingContainer> container);
        MC_VFUNC(Recipe::_eGroupType, Recipe, getGroup);
        MC_VFUNC(void, Recipe, recipeRequires, int count);
        MC_VFUNC(void, Recipe, recipeRequires2, Recipe::INGREDIENTS_REQUIRED *ingredients);
        MC_VFUNC(void, Recipe, generateExpectedCraftSlots);
        MC_VFUNC(uint32_t, Recipe, displayInSimpleCrafting);
    };
} // namespace mc
