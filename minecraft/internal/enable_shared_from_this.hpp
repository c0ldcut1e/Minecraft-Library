#pragma once

#include "MinecraftLib.hpp"
#include "weak_ptr.hpp"

namespace mboost
{
    template<typename T>
    class enable_shared_from_this
    {
    public:
        weak_ptr<T> weakThis;
    };
    MC_CHECK_SIZE(enable_shared_from_this<int>, 8);
} // namespace mboost
