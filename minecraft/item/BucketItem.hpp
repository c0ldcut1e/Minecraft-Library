#pragma once

#include <cstdint>

#include "Item.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class BucketItem : public Item
    {
    public:
        enum EBucketFillType : uint32_t
        {
            EMPTY         = 0,
            MILK          = 1,
            COD           = 2,
            SALMON        = 3,
            PUFFERFISH    = 4,
            TROPICAL_FISH = 5,
            WATER         = 8,
            LAVA          = 10,
        };

        Block *content;
        EBucketFillType fillType;
    };
    MC_CHECK_SIZE(BucketItem, 0x80);
} // namespace mc
