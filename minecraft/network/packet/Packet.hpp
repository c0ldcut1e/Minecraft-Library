#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class Packet
    {
    public:
        ~Packet()
        {
            MLINK_FUNC(void, 0x027CD034, Packet *)(this);
        }

        uint32_t creationTimeLow;
        uint32_t creationTimeHigh;
        uint32_t field_0x8;
        void *vtbl;
    };
    MC_CHECK_SIZE(Packet, 0x10);
} // namespace mc
