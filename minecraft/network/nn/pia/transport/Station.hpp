#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "RttProtocol.hpp"

namespace nn::pia::transport
{
    class Station
    {
    public:
        int GetRtt()
        {
            return MLINK_FUNC(int, 0x0355C390, Station *)(this);
        }

        int GetRtt(uint32_t sampleCount)
        {
            return MLINK_FUNC(int, 0x0355C3B8, Station *, uint32_t)(this, sampleCount);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t stationIndex;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        RttProtocol *rttProtocol;
    };
    MC_CHECK_SIZE(Station, 0x30);
} // namespace nn::pia::transport
