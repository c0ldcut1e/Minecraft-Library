#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class Direction
    {
    public:
        class Plane
        {
        public:
            uint32_t field_0x0;
        };
        MC_CHECK_SIZE(Plane, 0x4);

        class Axis
        {
        public:
            enum EAxis
            {
                X = 0,
                Y = 1,
                Z = 2
            };

            uint32_t field_0x0;
            uint32_t field_0x4;
            mstd::basic_string<wchar_t> name;
            Plane *plane;
            EAxis axis;
        };
        MC_CHECK_SIZE(Axis, 0x30);

        static Direction *down asm("0x109C46A0 - 0x502200");

        static Direction *up asm("0x109C46A4 - 0x502200");

        static Direction *north asm("0x109C46A8 - 0x502200");

        static Direction *south asm("0x109C46AC - 0x502200");

        static Direction *west asm("0x109C46B0 - 0x502200");

        static Direction *east asm("0x109C46B4 - 0x502200");
    };
} // namespace mc
