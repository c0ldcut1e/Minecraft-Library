#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "RendezVous.hpp"

namespace nn::nex
{
    class NgsFacade : public RendezVous
    {
    public:
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
    };
    MC_CHECK_SIZE(NgsFacade, 0x120);
} // namespace nn::nex
