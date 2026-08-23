#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class MemoryTracker
    {
    public:
        static int genLists(int param_1)
        {
            return MLINK_FUNC(int, 0x0316A544, int)(param_1);
        }

        static void releaseLists(int param_1)
        {
            MLINK_FUNC(void, 0x031AE4EC, int)(param_1);
        }
    };
} // namespace mc
