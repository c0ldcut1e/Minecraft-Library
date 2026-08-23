#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Recipe.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class ShapelessRecipe : public Recipe
    {
    public:
        ShapelessRecipe(ItemInstance *resultItem, mstd::vector<ItemInstance *> *requiredItems, _eGroupType groupType)
        {
            MLINK_FUNC(void, 0x028B9100, ShapelessRecipe *, ItemInstance *, mstd::vector<ItemInstance *> *, _eGroupType)(this, resultItem,
                                                                                                                         requiredItems, groupType);
        }

        _eGroupType groupType;
        ItemInstance *resultItem;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ShapelessRecipe, 0x20);
} // namespace mc
