#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Item.hpp"
#include "ItemTier.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class SwordItem : public Item
    {
    public:
        SwordItem(const ItemTier *tier)
        {
            MLINK_FUNC(void, 0x029D32C0, SwordItem *, const ItemTier *)(this, tier);
        }

        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
    };
    MC_CHECK_SIZE(SwordItem, 0x84);
} // namespace mc
