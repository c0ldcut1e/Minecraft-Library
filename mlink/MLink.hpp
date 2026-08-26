#pragma once

#include <cstdint>

// Uncomment this if this library is used on Cemu
// #define PLATFORM_CEMU

#define MLINK_FUNC(ret, address, ...) reinterpret_cast<ret (*)(__VA_ARGS__)>(address)

namespace MLink
{
    inline float ToFloat(int input)
    {
        const bool negative = 0 > input;
        const float output  = negative ? (float) -input : (float) input;
        return negative ? -output : output;
    }

    inline double ToDouble(int input)
    {
        const bool negative = input < 0;
        const double output = (double) (negative ? -(uint32_t) input : (uint32_t) input);
        return negative ? -output : output;
    }

    inline uint32_t CorrectPointerOffset(uint32_t offset)
    {
#ifdef PLATFORM_CEMU
        return offset;
#else
        return offset + 0x502200;
#endif
    }

    template<typename T>
    T *PointerFromAddress(uint32_t address)
    {
        return reinterpret_cast<T *>(address);
    }

    template<typename T>
    T *PointerFromOffset(uint32_t offset)
    {
        return PointerFromAddress<T>(CorrectPointerOffset(offset));
    }

    template<typename T>
    T *DereferencePointerFromAddress(uint32_t address)
    {
        return *reinterpret_cast<T **>(address);
    }

    template<typename T>
    T *DereferencePointerFromOffset(uint32_t offset)
    {
        return DereferencePointerFromAddress<T>(CorrectPointerOffset(offset));
    }
} // namespace MLink
