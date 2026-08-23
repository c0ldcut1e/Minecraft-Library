#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"
#include "utils/Vec3.hpp"

namespace mc
{
    class ClientboundPlayerPositionPacket : public Packet
    {
    public:
        enum class RelativeArgument : uint8_t
        {
            X     = 1 << 0,
            Y     = 1 << 1,
            Z     = 1 << 2,
            Y_ROT = 1 << 3,
            X_ROT = 1 << 4
        };

        ClientboundPlayerPositionPacket(double xPos, double yPos, double zPos, float yaw_, float pitch_, int relativeArgs_, int param_7)
        {
            MLINK_FUNC(void, 0x021CC884, ClientboundPlayerPositionPacket *, double, double, double, float, float, int,
                       int)(this, xPos, yPos, zPos, yaw_, pitch_, relativeArgs_, param_7);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        Vec3 pos;
        uint32_t field_0x30;
        float yRot;
        float xRot;
        bool hasRot;
        int8_t field_0x3D;
        int8_t field_0x3E;
        int8_t field_0x3F;
        int relativeArgs;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        int id;
    };
    MC_CHECK_SIZE(ClientboundPlayerPositionPacket, 0x60);
} // namespace mc
