#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "client/resource/ArrayWithLength.hpp"

namespace mc
{
    class System
    {
    public:
        enum ETimeGranularity : int
        {
            Milliseconds = 0,
            Microseconds = 1,
            Nanoseconds  = 2,
        };

        static void arraycopy(ArrayWithLength<uint8_t> source, uint32_t sourceOffset, ArrayWithLength<uint8_t> *destination,
                              uint32_t destinationOffset, uint32_t length)
        {
            MLINK_FUNC(void, 0x02994114, ArrayWithLength<uint8_t>, uint32_t, ArrayWithLength<uint8_t> *, uint32_t,
                       uint32_t)(source, sourceOffset, destination, destinationOffset, length);
        }

        static void arraycopy(ArrayWithLength<int> source, uint32_t sourceOffset, ArrayWithLength<int> *destination, uint32_t destinationOffset,
                              uint32_t length)
        {
            MLINK_FUNC(void, 0x029941C0, ArrayWithLength<int>, uint32_t, ArrayWithLength<int> *, uint32_t,
                       uint32_t)(source, sourceOffset, destination, destinationOffset, length);
        }

        static void arraycopy(ArrayWithLength<uint16_t> source, uint32_t sourceOffset, ArrayWithLength<uint16_t> *destination,
                              uint32_t destinationOffset, uint32_t length)
        {
            MLINK_FUNC(void, 0x029941EC, ArrayWithLength<uint16_t>, uint32_t, ArrayWithLength<uint16_t> *, uint32_t,
                       uint32_t)(source, sourceOffset, destination, destinationOffset, length);
        }

        static uint64_t processTime(ETimeGranularity granularity)
        {
            return MLINK_FUNC(uint64_t, 0x02994218, ETimeGranularity)(granularity);
        }

        static uint64_t processTimeInSeconds()
        {
            return MLINK_FUNC(uint64_t, 0x029943C0)();
        }

        static uint64_t processTimeInMilliSecs()
        {
            return MLINK_FUNC(uint64_t, 0x02994408)();
        }

        static uint64_t processTimeInNanoSecs()
        {
            return MLINK_FUNC(uint64_t, 0x0299441C)();
        }

        static uint64_t currentRealTimeMillis()
        {
            return MLINK_FUNC(uint64_t, 0x02994430)();
        }

        static uint64_t currentUnixEpochTimeSeconds()
        {
            return MLINK_FUNC(uint64_t, 0x029944B4)();
        }

        static void ReverseUSHORT(uint16_t *value)
        {
            MLINK_FUNC(void, 0x029944F8, uint16_t *)(value);
        }

        static void ReverseSHORT(int16_t *value)
        {
            MLINK_FUNC(void, 0x0299451C, int16_t *)(value);
        }

        static void ReverseULONG(uint32_t *value)
        {
            MLINK_FUNC(void, 0x02994540, uint32_t *)(value);
        }

        static void ReverseINT(int *value)
        {
            MLINK_FUNC(void, 0x02994574, int *)(value);
        }

        static void ReverseULONGLONG(int64_t *value)
        {
            MLINK_FUNC(void, 0x029945A8, int64_t *)(value);
        }

        static void ReverseCHAR16A(wchar_t *values, int length)
        {
            MLINK_FUNC(void, 0x02994604, wchar_t *, int)(values, length);
        }
    };
} // namespace mc
