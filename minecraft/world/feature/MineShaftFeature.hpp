#pragma once

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class MineShaftFeature : StructureFeature
    {
    public:
        MineShaftFeature()
        {
            MLINK_FUNC(void, 0x02677B44, MineShaftFeature *)(this);
        }
    };
} // namespace mc
