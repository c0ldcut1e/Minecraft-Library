#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/Entity.hpp"

namespace mc
{
    class Painting : public Entity
    {
    public:
        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CE9BC)();
        }
    };
} // namespace mc
