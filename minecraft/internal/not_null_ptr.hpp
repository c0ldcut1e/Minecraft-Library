#pragma once

#include <type_traits>

#include "MinecraftLib.hpp"
#include "sp_counted_base.hpp"

namespace mboost
{
    template<typename T>
    class not_null_ptr
    {
    public:
        not_null_ptr() : ptr(nullptr), detail(nullptr)
        {}

        not_null_ptr(T *pointer) : ptr(pointer), detail(nullptr)
        {}

        not_null_ptr(T *pointer, mboost::detail::sp_counted_base *countedBase) : ptr(pointer), detail(countedBase)
        {
            if (detail != nullptr)
            {
                detail->add_ref_copy();
            }
        }

        not_null_ptr(const not_null_ptr &other) : ptr(other.ptr), detail(other.detail)
        {
            if (detail != nullptr)
            {
                detail->add_ref_copy();
            }
        }

        ~not_null_ptr()
        {
            if (detail != nullptr)
            {
                detail->release();
            }
        }

        T *get() const
        {
            return ptr;
        }

        template<typename OtherT, typename = std::enable_if_t<std::is_convertible_v<OtherT *, T *>>>
        not_null_ptr(OtherT *pointer) : ptr(static_cast<T *>(pointer)), detail(nullptr)
        {}

        template<typename OtherT>
        not_null_ptr(const not_null_ptr<OtherT> &other) : ptr(static_cast<T *>(other.ptr)), detail(other.detail)
        {
            if (detail)
            {
                detail->add_ref_copy();
            }
        }

        void reset()
        {
            if (detail != nullptr)
            {
                detail->release();
            }

            ptr    = nullptr;
            detail = nullptr;
        }

        not_null_ptr &operator=(const not_null_ptr &other)
        {
            if (this == &other)
            {
                return *this;
            }

            reset();
            ptr    = other.ptr;
            detail = other.detail;
            if (detail != nullptr)
            {
                detail->add_ref_copy();
            }

            return *this;
        }

        template<typename OtherT>
        not_null_ptr &operator=(const not_null_ptr<OtherT> &other)
        {
            if ((void *) this == (void *) &other)
            {
                return *this;
            }

            reset();
            ptr    = static_cast<T *>(other.ptr);
            detail = other.detail;
            if (detail)
            {
                detail->add_ref_copy();
            }

            return *this;
        }

        explicit operator bool() const
        {
            return ptr != nullptr;
        }

        bool operator==(const T *compare) const
        {
            return ptr == compare;
        }

        bool operator!=(const T *compare) const
        {
            return ptr != compare;
        }

        bool operator==(const not_null_ptr<T> &compare) const
        {
            return ptr == compare.ptr;
        }

        bool operator!=(const not_null_ptr<T> &compare) const
        {
            return ptr != compare.ptr;
        }

        T *operator->() const
        {
            return ptr;
        }

        T &operator[](int index) const
        {
            return ptr[index];
        }

        T *ptr;
        mboost::detail::sp_counted_base *detail;
    };
    MC_CHECK_SIZE(not_null_ptr<int>, 0x8);
} // namespace mboost
