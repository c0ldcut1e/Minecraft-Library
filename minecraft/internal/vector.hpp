#pragma once

#include <cstddef>
#include <cstdint>

#include "MinecraftLib.hpp"

namespace mstd
{
    template<typename T>
    class vector
    {
    public:
        using iter = T *;

        using citer = const T *;

        vector()
        {
            _Buy(0);
        }

        vector(size_t length)
        {
            _Buy(length);
        }

        vector(vector<T> &&move) = delete;

        vector(const vector<T> &copy)
        {
            _Buy(copy.capacity());
            for (size_t i = 0; i < copy.size(); i++)
            {
                this->at(i) = copy[i];
            }
        }

        ~vector()
        {
            _delete();
        }

        bool _Buy(size_t length)
        {
            start          = nullptr;
            finish         = nullptr;
            end_of_storage = nullptr;

            if (length != 0)
            {
                // maxSize = 4 MiB
                const size_t maxSize = (4 * 1024 * 1024);
                if ((length * sizeof(T)) < maxSize)
                {
                    T *data        = new T[length];
                    start          = data;
                    finish         = data;
                    end_of_storage = &data[length];

                    clear();

                    return true;
                }

                return false;
            }

            return false;
        }

        void _delete()
        {

            delete[] start;
            start = finish = end_of_storage = nullptr;
        }

        T at(size_t index) const
        {
            return start[index];
        }

        T &at(size_t index)
        {
            return start[index];
        }

        T &back()
        {
            return this->start[size() - 1];
        }

        iter begin()
        {
            return start;
        }

        citer begin() const
        {
            return start;
        }

        [[nodiscard]] size_t capacity() const
        {
            return static_cast<size_t>(end_of_storage - start);
        }

        void clear()
        {
            for (size_t i = 0; i < capacity(); i++)
            {
                at(i) = T{};
            }
        }

        T *data()
        {
            return start;
        }

        [[nodiscard]] bool empty() const
        {
            return size() == 0;
        }

        iter end()
        {
            return finish;
        }

        citer end() const
        {
            return finish;
        }

        iter erase(size_t index)
        {
            if (index < 0 || index >= size())
            {
                return end();
            }

            for (size_t i = index; i < size() - 1; ++i)
            {
                start[index] = start[i + 1];
            }

            finish--;
            return start + index;
        }

        iter erase(iter position)
        {
            if (position < start || position >= finish)
            {
                return end();
            }

            for (iter it = position; it != finish - 1; ++it)
            {
                *it = *(it + 1);
            }

            finish--;
            return position;
        }

        void pop_back()
        {
            finish--;
        }

        void push_back(const T &data)
        {
            size_t currentSize = (start != nullptr) ? (finish - start) : 0;
            size_t capacity    = (start != nullptr) ? (end_of_storage - start) : 0;
            if (currentSize >= capacity)
            {
                size_t newCapacity = capacity == 0 ? 1 : capacity * 2;

                T *oldData = new T[currentSize];
                for (int i = 0; i < (int) currentSize; i++)
                {
                    oldData[i] = at(i);
                }

                delete[] start;

                _Buy(newCapacity);
                for (int i = 0; i < (int) currentSize; i++)
                {
                    push_back(oldData[i]);
                }

                delete[] oldData;
            }

            *finish = data;
            finish++;
        }

        [[nodiscard]] size_t remainingSize() const
        {
            return static_cast<size_t>(end_of_storage - finish);
        }

        [[nodiscard]] size_t size() const
        {
            return static_cast<size_t>(finish - start);
        }

        T *sort(bool (*compare)(const T &, const T &))
        {
            T *list = new T[size()];
            for (size_t i = 0; i < size(); i++)
            {
                list[i] = at(i);
            }

            T *temp = new T[1];
            for (size_t i = 0; i < size(); i++)
            {
                for (size_t j = 0; j < size(); j++)
                {
                    if (compare(list[i], list[j]))
                    {
                        *temp   = list[i];
                        list[i] = list[j];
                        list[j] = *temp;
                    }
                }
            }

            delete[] temp;
            return list;
        }

        vector<T> &operator=(const vector<T> &copy) = delete;

        T operator[](size_t index) const
        {
            return this->start[index];
        }

        T &operator[](size_t index)
        {
            return this->start[index];
        }

        uint32_t field_0x0 = 0;
        T *start           = nullptr;
        T *finish          = nullptr;
        T *end_of_storage  = nullptr;
    };
    MC_CHECK_SIZE(vector<int>, 0x10);
} // namespace mstd
