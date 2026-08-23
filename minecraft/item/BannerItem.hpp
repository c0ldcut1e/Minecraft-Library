#pragma once

#include "mlink/MLink.hpp"

#include "DyeColor.hpp"
#include "Item.hpp"
#include "ItemInstance.hpp"
#include "nbt/ListTag.hpp"

namespace mc
{
    class BannerItem : public Item
    {
    public:
        static ItemInstance *makeBanner(const DyeColor *dyeColor, ListTag *patterns)
        {
            return MLINK_FUNC(ItemInstance *, 0x02032A04, const DyeColor *, ListTag *)(dyeColor, patterns);
        }
    };
} // namespace mc
