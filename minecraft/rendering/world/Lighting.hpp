#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class Lighting
    {
    public:
        static void turnOff()
        {
            MLINK_FUNC(void, 0x03181508)();
        }

        static void turnOn()
        {
            MLINK_FUNC(void, 0x0317A08C)();
        }
    };
} // namespace mc
