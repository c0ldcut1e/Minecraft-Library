#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundPlayerAbilitiesPacket : public Packet, public mboost::enable_shared_from_this<ServerboundPlayerAbilitiesPacket>
    {
    public:
        bool isInvulnerable;
        bool isFlying;
        bool canFly;
        bool canInstaBuild;
        float flyingSpeed;
        float walkingSpeed;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(ServerboundPlayerAbilitiesPacket, 0x28);
} // namespace mc
