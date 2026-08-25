#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundSetCarriedItemPacket : public Packet, public mboost::enable_shared_from_this<ServerboundSetCarriedItemPacket>
    {
    public:
        ServerboundSetCarriedItemPacket(int slot)
        {
            MLINK_FUNC(void, 0x028B0550, ServerboundSetCarriedItemPacket *, int)(this, slot);
        }

        uint32_t field_0x18;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(ServerboundSetCarriedItemPacket, 0x20);
} // namespace mc
