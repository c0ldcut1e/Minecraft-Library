#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/effect/MobEffectInstance.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundUpdateMobEffectPacket : public Packet
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

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
    };
    MC_CHECK_SIZE(ClientboundUpdateMobEffectPacket, 0x28);
} // namespace mc
