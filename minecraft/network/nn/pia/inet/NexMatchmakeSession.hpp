#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "network/nn/nex/CallContext.hpp"
#include "network/nn/nex/JoinMatchmakeSessionParam.hpp"

namespace nn::pia::inet
{
    class NexMatchmakeSession
    {
    public:
        uint32_t field_0x0[0x54 / 4];
        nex::JoinMatchmakeSessionParam *joinParam;
        uint32_t field_0x58[(0x88 - 0x58) / 4];
        nex::CallContext callContext;
    };
} // namespace nn::pia::inet
