#pragma once

#include "mlink/MLink.hpp"

#include "network/nn/pia/Result.hpp"

namespace nn::pia::session
{
    inline Result Initialize()
    {
        Result result;
        MLINK_FUNC(void, 0x03506840, Result *)(&result);
        return result;
    }

    inline Result BeginSetup()
    {
        Result result;
        MLINK_FUNC(void, 0x0350691C, Result *)(&result);
        return result;
    }

    inline Result EndSetup()
    {
        Result result;
        MLINK_FUNC(void, 0x03506A14, Result *)(&result);
        return result;
    }

    inline void Finalize()
    {
        MLINK_FUNC(void, 0x03506B18)();
    }

    [[nodiscard]] inline bool IsInitialized()
    {
        return MLINK_FUNC(bool, 0x03506B98)();
    }

    [[nodiscard]] inline bool IsDuringSetup()
    {
        return MLINK_FUNC(bool, 0x03506BA4)();
    }
} // namespace nn::pia::session
