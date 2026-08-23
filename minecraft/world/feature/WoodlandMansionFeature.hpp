#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class WoodlandMansionFeature : StructureFeature
    {
    public:
        WoodlandMansionFeature(uint32_t genericLevelSource)
        {
            MLINK_FUNC(void, 0x02AB9740, WoodlandMansionFeature *, uint32_t)(this, genericLevelSource);
        }
    };
} // namespace mc
