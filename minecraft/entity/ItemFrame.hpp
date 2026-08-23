#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Entity.hpp"

namespace mc
{
    class ItemFrame : public Entity
    {
    public:
        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252CC3C)();
        }
    };
} // namespace mc
