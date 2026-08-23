#pragma once

#include "mlink/MLink.hpp"

#include "LargeFeature.hpp"

namespace mc
{
    class StructureFeature : LargeFeature
    {
    public:
        StructureFeature()
        {
            MLINK_FUNC(void, 0x029A3410, StructureFeature *)(this);
        }
    };
} // namespace mc
