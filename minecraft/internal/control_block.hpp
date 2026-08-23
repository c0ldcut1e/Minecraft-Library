#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mboost::detail
{
    struct control_block
    {
        uint32_t strong;
        uint32_t weak;
        uint32_t vtable;
        uint32_t object;
    };
    MC_CHECK_SIZE(control_block, 0x10);
} // namespace mboost::detail
