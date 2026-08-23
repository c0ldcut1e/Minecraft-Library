#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class ResourceLocation
    {
    public:
        ResourceLocation(const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x03250B1C, ResourceLocation *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        ResourceLocation(const mstd::basic_string<wchar_t> &str1, const mstd::basic_string<wchar_t> &str2)
        {
            MLINK_FUNC(void, 0x03250D30, ResourceLocation *, const mstd::basic_string<wchar_t> &, const mstd::basic_string<wchar_t> &)(this, str1,
                                                                                                                                       str2);
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
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
    };
    MC_CHECK_SIZE(ResourceLocation, 0x50);
} // namespace mc
