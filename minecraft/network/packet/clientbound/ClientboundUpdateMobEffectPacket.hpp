#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/effect/MobEffectInstance.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundUpdateMobEffectPacket : public Packet, public mboost::enable_shared_from_this<ClientboundUpdateMobEffectPacket>
    {
    public:
        ClientboundUpdateMobEffectPacket()
        {
            MLINK_FUNC(void, 0x02228848, ClientboundUpdateMobEffectPacket *)(this);
        }

        ClientboundUpdateMobEffectPacket(int entityId, MobEffectInstance *effect)
        {
            MLINK_FUNC(void, 0x02228900, ClientboundUpdateMobEffectPacket *, int, MobEffectInstance *)(this, entityId, effect);
        }

        int entityId;
        uint8_t effectId;
        int8_t amplifier;
        uint8_t field_0x1E;
        uint8_t field_0x1F;
        uint32_t duration;
        uint8_t flags;
        uint8_t field_0x25;
        uint8_t field_0x26;
        uint8_t field_0x27;
    };
    MC_CHECK_SIZE(ClientboundUpdateMobEffectPacket, 0x28);
} // namespace mc
