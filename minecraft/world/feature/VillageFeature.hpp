#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "StructureFeature.hpp"

namespace mc
{
    class VillageFeature : StructureFeature
    {
    public:
        VillageFeature(uint32_t size)
        {
            MLINK_FUNC(void, 0x02A8C984, VillageFeature *, uint32_t)(this, size);
        }
    };
} // namespace mc
