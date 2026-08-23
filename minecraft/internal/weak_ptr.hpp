#pragma once

#include "MinecraftLib.hpp"
#include "sp_counted_base.hpp"

namespace mboost
{
    template<typename T>
    class weak_ptr
    {
    public:
        T *pointer;
        detail::sp_counted_base *countedBase;
    };
    MC_CHECK_SIZE(weak_ptr<int>, 8);
} // namespace mboost
