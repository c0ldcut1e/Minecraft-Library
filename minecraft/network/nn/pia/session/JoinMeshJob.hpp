#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "network/nn/pia/StationIndex.hpp"
#include "network/nn/pia/common/CallContext.hpp"

namespace nn::pia::session
{
    class JoinMeshJob
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        void *step;
        const char *stepName;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        common::CallContext *callContext;
        uint32_t field_0x44;
        uint32_t field_0x48;
        int16_t stationNum;
        uint16_t field_0x4E;
        void *stationInfos;
        StationIndex *stationIndexes;
        uint32_t field_0x58;
        uint8_t joinResponse;
        uint8_t field_0x5D;
        uint8_t field_0x5E;
        uint8_t field_0x5F;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint8_t *stationChecked;
        uint32_t field_0x6C;
        uint32_t disconnectReason;
    };
} // namespace nn::pia::session
