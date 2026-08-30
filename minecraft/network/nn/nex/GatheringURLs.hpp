#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "StationURL.hpp"
#include "qList.hpp"

namespace nn::nex
{
    class GatheringURLs
    {
    public:
        ~GatheringURLs()
        {
            MLINK_FUNC(void, 0x036E9AC4, GatheringURLs *, uint32_t)(this, 2);
        }

        uint8_t dataVersion;
        uint8_t field_0x1;
        uint8_t field_0x2;
        uint8_t field_0x3;
        uint32_t gatheringId;
        qList<StationURL> stationUrls;
    };
    MC_CHECK_SIZE(GatheringURLs, 0x14);
} // namespace nn::nex
