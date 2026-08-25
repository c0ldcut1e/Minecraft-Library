#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundPlayerAbilitiesPacket : public Packet, public mboost::enable_shared_from_this<ClientboundPlayerAbilitiesPacket>
    {
    public:
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
