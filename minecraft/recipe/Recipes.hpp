#pragma once

#include <cstdarg>
#include <cstddef>
#include <vector>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Recipe.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"
#include "world/Level.hpp"

namespace mc
{
    class CraftingContainer;

    class Recipes
    {
    public:
        enum ERecipeCategory
        {
            ERecipeCategory_GENERAL,
            ERecipeCategory_BANNERS,
            ERecipeCategory_2,
            ERecipeCategory_3,
            ERecipeCategory_4,
        };

        Recipes();

        static void buildRecipeIngredientsArray()
        {
            MLINK_FUNC(void, 0x02839154)();
        }

        static Recipe *byId(int recipeId, ERecipeCategory category = ERecipeCategory_GENERAL)
        {
            if ((s_instance == nullptr) || recipeId < 0)
            {
                return nullptr;
            }

            mstd::vector<Recipe *> &recipes = *s_instance->getRecipes(category);
            if (static_cast<size_t>(recipeId) < recipes.size())
            {
                return recipes[recipeId];
            }

            return nullptr;
        }

        static inline Recipes *&s_instance = *(Recipes **) MLink::CorrectPointerOffset(0x104C3D30);

        static std::vector<int> getRecipeIdsByItem(const mboost::shared_ptr<ItemInstance> &item, ERecipeCategory category = ERecipeCategory_GENERAL)
        {
            std::vector<int> result;
            if ((s_instance == nullptr) || !item)
            {
                return result;
            }

            mstd::vector<Recipe *> &recipes = *s_instance->getRecipes(category);
            for (size_t i = 0; i < recipes.size(); i++)
            {
                Recipe *recipe = recipes[i];
                if (recipe == nullptr)
                {
                    continue;
                }

                ItemInstance *resultItem = recipe->vtable->getResultItem(recipe);
                if ((resultItem != nullptr) && resultItem->sameItemIgnoreDurability(item))
                {
                    result.push_back(static_cast<signed>(i));
                }
            }

            return result;
        }

        static std::vector<Recipe *> getRecipesByItem(const mboost::shared_ptr<ItemInstance> &item,
                                                      ERecipeCategory category = ERecipeCategory_GENERAL)
        {
            std::vector<Recipe *> result;
            if ((s_instance == nullptr) || !item)
            {
                return result;
            }

            const mstd::vector<Recipe *> &recipes = *s_instance->getRecipes(category);
            for (Recipe *recipe : recipes)
            {
                if (recipe == nullptr)
                {
                    continue;
                }

                ItemInstance *resultItem = recipe->vtable->getResultItem(recipe);
                if ((resultItem != nullptr) && resultItem->sameItemIgnoreDurability(item))
                {
                    result.push_back(recipe);
                }
            }

            return result;
        }

        static void staticCtor()
        {
            MLINK_FUNC(void, 0x0284013C)();
        }

        void addCustomRecipe(Recipe *recipe, ERecipeCategory category)
        {
            MLINK_FUNC(void, 0x02840220, Recipes *, Recipe *, ERecipeCategory)(this, recipe, category);
        }

        void addShapedRecipe(ItemInstance *item, int index, _va_struct *param_3)
        {
            MLINK_FUNC(void, 0x02837AB4, Recipes *, ItemInstance *, int, _va_struct *)(this, item, index, param_3);
        }

        void addShapedRecipe(ItemInstance *item, int index, ...)
        {
            std::va_list args;
            va_start(args, index);
            MLINK_FUNC(void, 0x028390C0, Recipes *, ItemInstance *, int, _va_struct *)(this, item, index, (_va_struct *) &args);
            va_end(args);
        }

        void addShapedRecipe(ItemInstance *item, ...)
        {
            std::va_list args;
            va_start(args, item);
            MLINK_FUNC(void, 0x0283841C, Recipes *, ItemInstance *, _va_struct *)(this, item, reinterpret_cast<_va_struct *>(&args));
            va_end(args);
        }

        void addShapelessRecipe(ItemInstance *item, int index, _va_struct *param_3)
        {
            MLINK_FUNC(void, 0x02838C20, Recipes *, ItemInstance *, int, _va_struct *)(this, item, index, param_3);
        }

        void addShapelessRecipe(ItemInstance *item, int index, ...)
        {
            std::va_list args;
            va_start(args, index);
            MLINK_FUNC(void, 0x0284018C, Recipes *, ItemInstance *, int, _va_struct *)(this, item, index, reinterpret_cast<_va_struct *>(&args));
            va_end(args);
        }

        void addShapelessRecipe(ItemInstance *item, ...)
        {
            std::va_list args;
            va_start(args, item);
            MLINK_FUNC(void, 0x0283902C, Recipes *, ItemInstance *, _va_struct *)(this, item, reinterpret_cast<_va_struct *>(&args));
            va_end(args);
        }

        void getItemFor(mboost::shared_ptr<ItemInstance> &result, mboost::shared_ptr<CraftingContainer> &container, Level *level, Recipe *recipe,
                        ERecipeCategory category)
        {
            MLINK_FUNC(void, 0x0284025C, Recipes *, mboost::shared_ptr<ItemInstance> &, mboost::shared_ptr<CraftingContainer> &, Level *, Recipe *,
                       ERecipeCategory)(this, result, container, level, recipe, category);
        }

        mboost::shared_ptr<ItemInstance> getItemFor(mboost::shared_ptr<CraftingContainer> &container, Level *level, Recipe *recipe,
                                                    ERecipeCategory category)
        {
            mboost::shared_ptr<ItemInstance> result;
            getItemFor(result, container, level, recipe, category);
            return result;
        }

        void getItemForRecipe(mboost::shared_ptr<ItemInstance> &result, Recipe *recipe)
        {
            MLINK_FUNC(void, 0x02842608, Recipes *, mboost::shared_ptr<ItemInstance> &, Recipe *)(this, result, recipe);
        }

        mboost::shared_ptr<ItemInstance> getItemForRecipe(Recipe *recipe)
        {
            mboost::shared_ptr<ItemInstance> result;
            getItemForRecipe(result, recipe);
            return result;
        }

        mstd::vector<void *> *getRecipeIngredientsArray(ERecipeCategory category)
        {
            return MLINK_FUNC(mstd::vector<void *> *, 0x028426D4, Recipes *, ERecipeCategory)(this, category);
        }

        mstd::vector<Recipe *> *getRecipes(ERecipeCategory category)
        {
            return MLINK_FUNC(mstd::vector<Recipe *> *, 0x028425FC, Recipes *, ERecipeCategory)(this, category);
        }

        void getRemainingItemsFor(mboost::shared_ptr<CraftingContainer> &container, Level *level, ERecipeCategory category)
        {
            MLINK_FUNC(void, 0x02842068, Recipes *, mboost::shared_ptr<CraftingContainer> &, Level *, ERecipeCategory)(this, container, level,
                                                                                                                       category);
        }

        bool hasAchievementAttachedToRecipe(mboost::shared_ptr<CraftingContainer> &container, Level *level, Recipe *recipe, ERecipeCategory category)
        {
            return MLINK_FUNC(bool, 0x028414C4, Recipes *, mboost::shared_ptr<CraftingContainer> &, Level *, Recipe *,
                              ERecipeCategory)(this, container, level, recipe, category);
        }

        mstd::vector<Recipe *> recipes[5];
        mstd::vector<void *> *ingredients[5];
    };
    MC_CHECK_SIZE(Recipes, 0x64);
} // namespace mc
