#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Buffer.hpp"
#include "Gathering.hpp"
#include "MinecraftLib.hpp"
#include "String.hpp"

namespace nn::nex
{
    class DynamicGathering : public Gathering
    {
    public:
        ~DynamicGathering()
        {
            MLINK_FUNC(void, 0x036E9D88, DynamicGathering *, uint32_t)(this, 2);
        }

        [[nodiscard]] String GetGatheringType() const
        {
            return MLINK_FUNC(String, 0x036E9DF4, const DynamicGathering *)(this);
        }

        uint8_t dataVersion;
        uint8_t field_0x31;
        uint8_t field_0x32;
        uint8_t field_0x33;
        Buffer applicationBuffer;
        String gatheringType;
    };
    MC_CHECK_SIZE(DynamicGathering, 0x60);
} // namespace nn::nex
