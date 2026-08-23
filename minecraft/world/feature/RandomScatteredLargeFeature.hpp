#pragma once

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class RandomScatteredLargeFeature : StructureFeature
    {
    public:
        RandomScatteredLargeFeature()
        {
            MLINK_FUNC(void, 0x028327B8, RandomScatteredLargeFeature *)(this);
        }
    };
} // namespace mc
