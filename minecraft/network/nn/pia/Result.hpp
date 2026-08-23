#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia
{
    class Result
    {
    public:
        [[nodiscard]] int GetErrorCode() const
        {
            return MLINK_FUNC(int, 0x0353E928, const Result *)(this);
        }

        uint32_t value;
    };
    MC_CHECK_SIZE(Result, 0x4);
} // namespace nn::pia
