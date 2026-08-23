#pragma once

#include "mlink/MLink.hpp"

#include "utils/AABB.hpp"

namespace mc
{
    class LevelRenderer
    {
    public:
        static void renderColoredBox(const AABB *aabb, int color, int alpha)
        {
            MLINK_FUNC(void, 0x031C4244, const AABB *, int, int)(aabb, color, alpha);
        }

        static void renderLineBox(const AABB *aabb, int color)
        {
            MLINK_FUNC(void, 0x031C2BE0, const AABB *, int)(aabb, color);
        }
    };
} // namespace mc
