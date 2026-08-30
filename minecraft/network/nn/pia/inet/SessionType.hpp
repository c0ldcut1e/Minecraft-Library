#pragma once

#include <cstdint>

namespace nn::pia::inet
{
    enum class SessionType : uint32_t
    {
        AutoCloseDisabled = 0,
        AutoCloseEnabled  = 1,
    };
} // namespace nn::pia::inet
