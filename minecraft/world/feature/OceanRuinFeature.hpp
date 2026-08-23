#pragma once

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class OceanRuinFeature : StructureFeature
    {
    public:
        OceanRuinFeature()
        {
            MLINK_FUNC(void, 0x0274DBA4, OceanRuinFeature *)(this);
        }
    };
} // namespace mc
