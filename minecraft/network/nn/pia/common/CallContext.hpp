#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::common
{
    class CallContext
    {
    public:
        void Cancel()
        {
            MLINK_FUNC(void, 0x035401DC, CallContext *)(this);
        }

        uint32_t state;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint8_t cancelled;
    };
} // namespace nn::pia::common
