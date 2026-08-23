#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    struct TelemetryDamageSource
    {
        uint32_t unk1;
        uint32_t unk2;
        uint32_t unk3;
    };
    MC_CHECK_SIZE(TelemetryDamageSource, 0xC);

    class ClientboundSetHealthPacket : public Packet
    {
    public:
        ClientboundSetHealthPacket(float _health, int _food, float _saturation, const TelemetryDamageSource &_source)
        {
            MLINK_FUNC(void, 0x02220EF4, ClientboundSetHealthPacket *, float, int, float, const TelemetryDamageSource &)(this, _health, _food,
                                                                                                                         _saturation, _source);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        TelemetryDamageSource source;
        float health;
        int food;
        float saturation;
    };
    MC_CHECK_SIZE(ClientboundSetHealthPacket, 0x30);
} // namespace mc
