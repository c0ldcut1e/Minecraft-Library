#pragma once

#include "mlink/MLink.hpp"

namespace nn::pia::common
{
    class Job
    {
    public:
        [[nodiscard]] bool IsRunning() const
        {
            return MLINK_FUNC(bool, 0x03540CDC, const Job *)(this);
        }
    };
} // namespace nn::pia::common
