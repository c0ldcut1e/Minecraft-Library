#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "utils/Vec3i.hpp"

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

            bool isHorizontal()
            {
                return MLINK_FUNC(bool, 0x02298C5C, Axis *)(this);
            }

            bool isVertical()
            {
                return MLINK_FUNC(bool, 0x0229AC7C, Axis *)(this);
            }

            Plane *getPlane()
            {
                return MLINK_FUNC(Plane *, 0x0229AB24, Axis *)(this);
            }

            EAxis getId()
            {
                return MLINK_FUNC(EAxis, 0x0229A110, Axis *)(this);
            }

            VTable *vtable;
            VTable *secondaryVtable;
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

        static Direction *from3DDataValue(int value)
        {
            return MLINK_FUNC(Direction *, 0x0229A0A8, int)(value);
        }

        static Direction *from2DDataValue(int value)
        {
            return MLINK_FUNC(Direction *, 0x0229A288, int)(value);
        }

        static Direction *fromYRot(double rotation)
        {
            return MLINK_FUNC(Direction *, 0x0229A2D4, double)(rotation);
        }

        Axis *getAxis()
        {
            return MLINK_FUNC(Axis *, 0x02298C78, Direction *)(this);
        }

        int get3DDataValue() const
        {
            return MLINK_FUNC(int, 0x0229A088, const Direction *)(this);
        }

        int get2DDataValue() const
        {
            return MLINK_FUNC(int, 0x0229A090, const Direction *)(this);
        }

        uint8_t getOrdinal() const
        {
            return MLINK_FUNC(uint8_t, 0x0229A098, const Direction *)(this);
        }

        Direction *getOpposite() const
        {
            return MLINK_FUNC(Direction *, 0x0229A0FC, const Direction *)(this);
        }

        Direction *getClockWise() const
        {
            return MLINK_FUNC(Direction *, 0x0229A118, const Direction *)(this);
        }

        Direction *getCounterClockWise() const
        {
            return MLINK_FUNC(Direction *, 0x0229A1D0, const Direction *)(this);
        }

        void getNormal(Vec3i *out) const
        {
            MLINK_FUNC(void, 0x0229A9C8, Vec3i *, const Direction *)(out, this);
        }

        VTable *vtable;
        int data3D;
        int oppositeIndex;
        int data2D;
        mstd::basic_string<wchar_t> name;
        Axis *axis;
        MC_UNDEFINED_TYPE(uint32_t *, Direction::AxisDirection) axisDirection;
        Vec3i *normal;
        uint8_t ordinal;
        uint8_t field_0x3D;
        uint8_t field_0x3E;
        uint8_t field_0x3F;
        int stepX;
        int stepY;
        int stepZ;
    };
    MC_CHECK_SIZE(Direction, 0x4C);
} // namespace mc
