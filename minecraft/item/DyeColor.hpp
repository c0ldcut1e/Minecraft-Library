#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class DyeColor
    {
    public:
        static DyeColor *byItemData(int data)
        {
            return MLINK_FUNC(DyeColor *, 0x022AB3D0, int)(data);
        }
    };
} // namespace mc
