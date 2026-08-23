#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

namespace mc
{
    class System
    {
    public:
        static uint64_t processTimeInMilliSecs()
        {
            return MLINK_FUNC(uint64_t, 0x02994408)();
        }
    };
} // namespace mc
