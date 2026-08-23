#pragma once

#include "mlink/MLink.hpp"

#include "Item.hpp"

namespace mc
{
    class EmptyMapItem : public Item
    {
    public:
        EmptyMapItem()
        {
            MLINK_FUNC(void, 0x022CB770, EmptyMapItem *)(this);
        }
    };
} // namespace mc
