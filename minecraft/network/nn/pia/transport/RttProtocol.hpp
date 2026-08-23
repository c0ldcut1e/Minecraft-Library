#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/StationIndex.hpp"

namespace nn::pia::transport
{
    class RttProtocol
    {
    public:
        int GetRtt(StationIndex stationIndex)
        {
            return MLINK_FUNC(int, 0x0356E714, RttProtocol *, StationIndex)(this, stationIndex);
        }

        void request(StationIndex stationIndex)
        {
            MLINK_FUNC(void, 0x0356DEF4, RttProtocol *, StationIndex)(this, stationIndex);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint16_t stationCount;
        uint16_t field_0x36;
    };
    MC_CHECK_SIZE(RttProtocol, 0x38);
} // namespace nn::pia::transport
