#pragma once

#include <cstdint>

namespace mc
{
    template<typename T>
    class NonNullList
    {
    public:
        using iter = T *;

        using citer = const T *;

        iter begin()
        {
            return elements;
        }

        citer begin() const
        {
            return elements;
        }

        iter end()
        {
            return elements ? elements + size : elements;
        }

        citer end() const
        {
            return elements ? elements + size : elements;
        }

        T &operator[](int index)
        {
            return elements[index];
        }

        const T &operator[](int index) const
        {
            return elements[index];
        }

        T *elements;
        int size;
        uint32_t field_0x8;
        uint32_t field_0xC;
    };
} // namespace mc
