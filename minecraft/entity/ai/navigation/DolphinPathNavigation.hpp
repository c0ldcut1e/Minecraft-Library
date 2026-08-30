#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/ai/navigation/WaterBoundPathNavigation.hpp"
#include "entity/animal/Dolphin.hpp"
#include "world/level/Level.hpp"
#include "world/level/pathfinder/Path.hpp"

namespace mc
{
    class DolphinPathNavigation : public WaterBoundPathNavigation
    {
    public:
        DolphinPathNavigation(Dolphin *dolphin, Level *level) : WaterBoundPathNavigation(WaterBoundPathNavigation::Uninitialized{})
        {
            MLINK_FUNC(DolphinPathNavigation *, 0x022D525C, DolphinPathNavigation *, Dolphin *, Level *)(this, dolphin, level);
        }

        ~DolphinPathNavigation()
        {
            MLINK_FUNC(void, 0x02305880, DolphinPathNavigation *, uint32_t)(this, 0);
        }

        bool canUpdatePath()
        {
            return MLINK_FUNC(bool, 0x022D5E64, DolphinPathNavigation *)(this);
        }

        Path *createPath(const BlockPos &position)
        {
            return MLINK_FUNC(Path *, 0x022D6558, DolphinPathNavigation *, const BlockPos *)(this, &position);
        }

        bool isStableDestination(const BlockPos &position)
        {
            return MLINK_FUNC(bool, 0x022D5E6C, DolphinPathNavigation *, const BlockPos *)(this, &position);
        }

        void updatePath()
        {
            MLINK_FUNC(void, 0x022D5F18, DolphinPathNavigation *)(this);
        }
    };
    MC_CHECK_SIZE(DolphinPathNavigation, 0xD8);
} // namespace mc
