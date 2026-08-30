#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "qList.hpp"

namespace nn::nex
{
    class GatheringStats
    {
    public:
        ~GatheringStats()
        {
            MLINK_FUNC(void, 0x036E60AC, GatheringStats *, uint32_t)(this, 2);
        }

        uint8_t dataVersion;
        uint8_t field_0x1;
        uint8_t field_0x2;
        uint8_t field_0x3;
        uint32_t gatheringId;
        uint32_t statId;
        qList<float> values;
    };
    MC_CHECK_SIZE(GatheringStats, 0x18);
} // namespace nn::nex
