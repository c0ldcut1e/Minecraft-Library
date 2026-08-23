#pragma once

#include "mlink/MLink.hpp"

#include "ePARTICLE_TYPE.hpp"

namespace mc
{
    class ParticleType
    {
    public:
        static ParticleType *byId(ePARTICLE_TYPE type)
        {
            return MLINK_FUNC(ParticleType *, 0x26D9A54, ePARTICLE_TYPE)(type);
        }
    };
} // namespace mc
