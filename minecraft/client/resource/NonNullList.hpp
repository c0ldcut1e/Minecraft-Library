#pragma once

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
            return start;
        }

        citer begin() const
        {
            return start;
        }

        iter end()
        {
            return finish;
        }

        citer end() const
        {
            return finish;
        }

        T &operator[](int index)
        {
            return static_cast<T *>(field_0x0)[index];
        }

        const T &operator[](int index) const
        {
            return static_cast<const T *>(field_0x0)[index];
        }

        void *field_0x0;
        int size;
        T *start;
        T *finish;
    };
} // namespace mc
