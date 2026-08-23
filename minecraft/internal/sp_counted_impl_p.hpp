#pragma once

#include "MinecraftLib.hpp"
#include "sp_counted_base.hpp"

namespace mboost::detail
{
    template<typename T>
    class sp_counted_impl_p : public sp_counted_base
    {
    public:
        T *pointer;
    };
    MC_CHECK_SIZE(sp_counted_impl_p<int>, 0x10);
} // namespace mboost::detail
