#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundSetCarriedItemPacket : public Packet
    {
    public:
        ServerboundSetCarriedItemPacket(int slot)
        {
            MLINK_FUNC(void, 0x028B0550, ServerboundSetCarriedItemPacket *, int)(this, slot);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ServerboundSetCarriedItemPacket, 0x20);
} // namespace mc
