#pragma once

#include <cstdint>

#include "EndPoint.hpp"
#include "MinecraftLib.hpp"

namespace nn::nex
{
    class SecureEndPoint : public EndPoint
    {
    public:
        EndPoint *associatedEndPoint;
        uint32_t field_0x64;
        uint32_t field_0x68;
    };
    MC_CHECK_SIZE(SecureEndPoint, 0x6C);
} // namespace nn::nex
