#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/Entity.hpp"

namespace mc
{
    class SpectralArrow : public Entity
    {
    public:
        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297DBD0)();
        }
    };
} // namespace mc
