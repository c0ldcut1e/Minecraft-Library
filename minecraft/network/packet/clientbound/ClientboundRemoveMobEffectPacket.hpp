#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/effect/MobEffect.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundRemoveMobEffectPacket : public Packet, public mboost::enable_shared_from_this<ClientboundRemoveMobEffectPacket>
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

        int entityId;
        MobEffect *effect;
    };
    MC_CHECK_SIZE(ClientboundRemoveMobEffectPacket, 0x20);
} // namespace mc
