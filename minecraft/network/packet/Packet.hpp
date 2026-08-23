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

        uint64_t time;
        uint8_t field_0x8;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t field_0xB;
        void *vtbl;
    };
    MC_CHECK_SIZE(Packet, 0x10);
} // namespace mc
