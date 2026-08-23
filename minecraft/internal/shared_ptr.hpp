#pragma once

#include <type_traits>

#include "MinecraftLib.hpp"
#include "sp_counted_base.hpp"

namespace mboost
{
    template<typename T>
    class shared_ptr
    {
    public:
        shared_ptr() : ptr(nullptr), detail(nullptr)
        {}

        shared_ptr(T *pointer) : ptr(pointer), detail(nullptr)
        {}

        shared_ptr(T *pointer, mboost::detail::sp_counted_base *countedBase) : ptr(pointer), detail(countedBase)
        {
            if (detail != nullptr)
            {
                detail->add_ref_copy();
            }
        }

        shared_ptr(const shared_ptr &other) : ptr(other.ptr), detail(other.detail)
        {
            if (detail != nullptr)
            {
                detail->add_ref_copy();
            }
        }
        ~shared_ptr()
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

        void reset()
        {
            if (detail != nullptr)
            {
                detail->release();
            }

            ptr    = nullptr;
            detail = nullptr;
        }

        void reset(T *pointer, mboost::detail::sp_counted_base *countedBase)
        {
            reset();
            ptr    = pointer;
            detail = countedBase;
            if (detail != nullptr)
            {
                detail->add_ref_copy();
            }
        }

        template<typename OtherT, typename = std::enable_if_t<std::is_convertible_v<OtherT *, T *>>>
        shared_ptr(OtherT *pointer) : ptr(static_cast<T *>(pointer)), detail(nullptr)
        {}

        template<typename OtherT>
        shared_ptr(const shared_ptr<OtherT> &other) : ptr(static_cast<T *>(other.ptr)), detail(other.detail)
        {
            if (detail)
            {
                detail->add_ref_copy();
            }
        }

        template<typename OtherT>
        shared_ptr(const shared_ptr<OtherT> &owner, T *aliasPointer) : ptr(aliasPointer), detail(owner.detail)
        {
            if (detail)
            {
                detail->add_ref_copy();
            }
        }

        shared_ptr &operator=(const shared_ptr &other)
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
        shared_ptr &operator=(const shared_ptr<OtherT> &other)
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

        bool operator==(const shared_ptr<T> &compare) const
        {
            return ptr == compare.ptr;
        }

        bool operator!=(const shared_ptr<T> &compare) const
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
    MC_CHECK_SIZE(shared_ptr<int>, 0x8);
} // namespace mboost
