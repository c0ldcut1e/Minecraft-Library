#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/Entity.hpp"
#include "world/Level.hpp"

namespace mc
{
    class TippableArrow : public Entity
    {
    public:
        TippableArrow(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x029F988C, TippableArrow *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A131A4)();
        }
    };
} // namespace mc
