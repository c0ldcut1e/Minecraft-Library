#pragma once

#include <cstdint>

namespace nn::pia
{
    enum StationIndex : uint32_t
    {
        STATION_INDEX_MIN       = 0x00,
        STATION_INDEX_MAX       = 0x1F,
        STATION_INDEX_INVALID   = 0xFD,
        STATION_INDEX_HOST      = 0xFE,
        STATION_INDEX_BROADCAST = 0xFF
    };
}
