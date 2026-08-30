#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/ai/navigation/WaterBoundPathNavigation.hpp"
#include "entity/animal/Turtle.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class TurtlePathNavigation : public WaterBoundPathNavigation
    {
    public:
        TurtlePathNavigation(Turtle *turtle, Level *level) : WaterBoundPathNavigation(WaterBoundPathNavigation::Uninitialized{})
        {
            MLINK_FUNC(TurtlePathNavigation *, 0x02A58580, TurtlePathNavigation *, Turtle *, Level *)(this, turtle, level);
        }

        ~TurtlePathNavigation()
        {
            MLINK_FUNC(void, 0x02ACF0D8, TurtlePathNavigation *, uint32_t)(this, 0);
        }

        bool canUpdatePath()
        {
            return MLINK_FUNC(bool, 0x02A5A9A8, TurtlePathNavigation *)(this);
        }

        bool isStableDestination(const BlockPos &position)
        {
            return MLINK_FUNC(bool, 0x02A5A9B0, TurtlePathNavigation *, const BlockPos *)(this, &position);
        }
    };
    MC_CHECK_SIZE(TurtlePathNavigation, 0xD8);
} // namespace mc
