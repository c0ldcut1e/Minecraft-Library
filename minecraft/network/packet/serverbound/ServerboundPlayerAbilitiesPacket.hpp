#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundPlayerAbilitiesPacket : public Packet
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
    };
    MC_CHECK_SIZE(ServerboundPlayerAbilitiesPacket, 0x28);
} // namespace mc
