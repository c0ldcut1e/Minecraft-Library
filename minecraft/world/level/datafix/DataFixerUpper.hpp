#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class DataFixerUpper
    {
    public:
        DataFixerUpper(int dataVersion)
        {
            MLINK_FUNC(void, 0x030996A8, DataFixerUpper *, int)(this, dataVersion);
        }

        ~DataFixerUpper()
        {
            MLINK_FUNC(void, 0x03099C00, DataFixerUpper *, uint32_t)(this, 0);
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
        uint32_t field_0x34;
    };
    MC_CHECK_SIZE(DataFixerUpper, 0x38);
} // namespace mc
