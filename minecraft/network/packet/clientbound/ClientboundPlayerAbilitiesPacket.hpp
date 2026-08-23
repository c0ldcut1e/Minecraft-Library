#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundPlayerAbilitiesPacket : public Packet
    {
    public:
        uint32_t field_0x10;
        uint32_t field_0x14;
        bool isInvulnerable;
        bool isFlying;
        bool canFly;
        bool canInstaBuild;
        float flyingSpeed;
        float walkingSpeed;
        bool canBuild;
        uint32_t field_0x28;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ClientboundPlayerAbilitiesPacket, 0x30);
} // namespace mc
