#pragma once

#include "MinecraftLib.hpp"
#include "sp_counted_base.hpp"

namespace mboost::detail
{
    class shared_count
    {
    public:
        shared_count() : pi(nullptr)
        {}

        shared_count(sp_counted_base *counted) : pi(counted)
        {}

        shared_count(const shared_count &r) : pi(r.pi)
        {
            if (pi != nullptr)
            {
                pi->add_ref_copy();
            }
        }

        ~shared_count()
        {
            if (pi != nullptr)
            {
                pi->release();
            }
        }

        [[nodiscard]] sp_counted_base *get() const
        {
            return pi;
        }

        [[nodiscard]] bool unique() const
        {
            return use_count() == 1;
        }

        [[nodiscard]] long use_count() const
        {
            if (pi == nullptr)
            {
                return 0;
            }

            return static_cast<long>(pi->use_count());
        }

        shared_count &operator=(const shared_count &r)
        {
            if (this != &r)
            {
                if (pi != nullptr)
                {
                    pi->release();
                }

                pi = r.pi;
                if (pi != nullptr)
                {
                    pi->add_ref_copy();
                }
            }

            return *this;
        }

        sp_counted_base *pi;
    };
    MC_CHECK_SIZE(shared_count, 0x4);
} // namespace mboost::detail
