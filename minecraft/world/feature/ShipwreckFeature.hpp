#pragma once

#include "mlink/MLink.hpp"

#include "OceanMonumentFeature.hpp"
#include "StructureFeature.hpp"

namespace mc
{
    class ShipwreckFeature : StructureFeature
    {
    public:
        ShipwreckFeature(OceanMonumentFeature *monument)
        {
            MLINK_FUNC(void, 0x02895418, ShipwreckFeature *, OceanMonumentFeature *)(this, monument);
        }
    };
} // namespace mc
