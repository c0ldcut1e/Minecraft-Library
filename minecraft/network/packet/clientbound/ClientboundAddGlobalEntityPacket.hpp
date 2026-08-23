#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundAddGlobalEntityPacket : public Packet
    {
    public:
        enum EGlobalEntityType : int
        {
            eGlobalEntityType_LightningBolt = 1,
        };

        ClientboundAddGlobalEntityPacket()
        {
            MLINK_FUNC(void, 0x021CE588, ClientboundAddGlobalEntityPacket *)(this);
        }

        uint32_t weakThisObject;
        uint32_t weakThisCount;
        int entityId;
        int x;
        int y;
        int z;
        EGlobalEntityType type;
    };
    MC_CHECK_SIZE(ClientboundAddGlobalEntityPacket, 0x30);
} // namespace mc
