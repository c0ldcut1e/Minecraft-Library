#pragma once

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    class INQRNetworkManagerListener
    {
    public:
        VTable *vtable;
    };
    MC_CHECK_SIZE(INQRNetworkManagerListener, 0x4);
} // namespace mc
