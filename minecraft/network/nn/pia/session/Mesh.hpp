#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/StationIndex.hpp"

namespace nn::pia::session
{
    class Mesh
    {
    public:
        static Mesh *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<Mesh>(0x104D1CE4);
        }

        StationIndex GetHostStationIndex()
        {
            return MLINK_FUNC(StationIndex, 0x0350A9D0, Mesh *)(this);
        }

        StationIndex GetLocalStationIndex()
        {
            return MLINK_FUNC(StationIndex, 0x0350A9D8, Mesh *)(this);
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
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t hostStationIndex;
        uint32_t localStationIndex;
    };
    MC_CHECK_SIZE(Mesh, 0x60);
} // namespace nn::pia::session
