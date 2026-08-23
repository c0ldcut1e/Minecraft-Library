#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/unordered_map.hpp"
#include "internal/vector.hpp"

namespace mc
{
    struct FlatLayerInfo
    {
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
    };
    MC_CHECK_SIZE(FlatLayerInfo, 0x10);

    class SuperflatConfig
    {
    public:
        mstd::basic_string<wchar_t> displayName;
        uint8_t version;
        uint8_t field_0x21;
        uint8_t field_0x22;
        uint8_t field_0x23;
        mstd::vector<FlatLayerInfo> layers;
        mboost::unordered::unordered_map<uint8_t, mboost::unordered::unordered_map<uint8_t, uint8_t>> options;
    };
    MC_CHECK_SIZE(SuperflatConfig, 0x4C);
} // namespace mc
