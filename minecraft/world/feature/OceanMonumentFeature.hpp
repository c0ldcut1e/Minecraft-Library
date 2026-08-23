#pragma once

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class OceanMonumentFeature : StructureFeature
    {
    public:
        OceanMonumentFeature()
        {
            MLINK_FUNC(void, 0x026DED38, OceanMonumentFeature *)(this);
        }
    };
} // namespace mc
