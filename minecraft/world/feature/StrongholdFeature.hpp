#pragma once

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class StrongholdFeature : StructureFeature
    {
    public:
        StrongholdFeature()
        {
            MLINK_FUNC(void, 0x02964460, StrongholdFeature *)(this);
        }
    };
} // namespace mc
