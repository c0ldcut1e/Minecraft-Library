#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "network/nn/pia/StationIndex.hpp"

namespace nn::pia::transport
{
    inline StationIndex Conv2StationIndex(uint64_t stationId)
    {
        return MLINK_FUNC(StationIndex, 0x0356A3D8, uint64_t)(stationId);
    }
} // namespace nn::pia::transport
