#pragma once

#include <cstdint>

#include "ACTUuid.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class MiiDataEntry
    {
    public:
        uint32_t field_0x0;
        void *field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint16_t field_0x1C;
        uint16_t field_0x1E;
        uint16_t field_0x20;
        uint16_t field_0x22;
        uint16_t field_0x24;
        uint16_t field_0x26;
        bool hasUuid;
        bool field_0x29;
        ACTUuid uuid;
        uint16_t field_0x3A;
    };
    MC_CHECK_SIZE(MiiDataEntry, 0x3C);
} // namespace mc
