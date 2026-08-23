#pragma once

#include <cstdint>

#include "EndPoint.hpp"
#include "MinecraftLib.hpp"
#include "RefCountedObject.hpp"
#include "StreamManager.hpp"

namespace nn::nex
{
    class Credentials : public RefCountedObject
    {
    public:
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        StreamManager *streamManager;
        EndPoint *authenticationConnection;
        EndPoint *secureConnection;
    };
    MC_CHECK_SIZE(Credentials, 0x34);
} // namespace nn::nex
