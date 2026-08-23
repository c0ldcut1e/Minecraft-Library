#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class BuriedTreasureFeature : StructureFeature
    {
    public:
        BuriedTreasureFeature(uint32_t size)
        {
            MLINK_FUNC(void, 0x021901F0, BuriedTreasureFeature *, uint32_t)(this, size);
        }
    };
} // namespace mc
