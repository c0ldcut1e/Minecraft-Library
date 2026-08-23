#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/effect/MobEffect.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundRemoveMobEffectPacket : public Packet
    {
    public:
        ClientboundRemoveMobEffectPacket()
        {
            MLINK_FUNC(void, 0x021DFED0, ClientboundRemoveMobEffectPacket *)(this);
        }

        ClientboundRemoveMobEffectPacket(int entityId, MobEffect *effect)
        {
            MLINK_FUNC(void, 0x021DFF6C, ClientboundRemoveMobEffectPacket *, int, MobEffect *)(this, entityId, effect);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
    };
    MC_CHECK_SIZE(ClientboundRemoveMobEffectPacket, 0x20);
} // namespace mc
