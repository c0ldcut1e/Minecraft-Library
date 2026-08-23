#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Recipe.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class ShapedRecipe : public Recipe
    {
    public:
        ShapedRecipe(int width, int height, ItemInstance **param_3, ItemInstance *resultItem, int param_5)
        {
            MLINK_FUNC(void, 0x028B6BC0, ShapedRecipe *, int, int, ItemInstance **, ItemInstance *, int)(this, width, height, param_3, resultItem,
                                                                                                         param_5);
        }

        uint32_t width;
        uint32_t height;
        _eGroupType groupType;
        ItemInstance **field_0x20;
        ItemInstance *resultItem;
        uint32_t field_0x28;
    };
    MC_CHECK_SIZE(ShapedRecipe, 0x2C);
} // namespace mc
