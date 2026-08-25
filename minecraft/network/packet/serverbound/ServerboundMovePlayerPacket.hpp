#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"
#include "utils/Vec3.hpp"

namespace mc
{
    class ServerboundMovePlayerPacket : public Packet, public mboost::enable_shared_from_this<ServerboundMovePlayerPacket>
    {
    public:
        class PosRot;

        class Pos;

        class Rot;

        ServerboundMovePlayerPacket() = default;

        ServerboundMovePlayerPacket(bool onGround, bool isFlying)
        {
            MLINK_FUNC(void, 0x028ACF38, ServerboundMovePlayerPacket *, bool, bool)(this, onGround, isFlying);
        }

        Vec3 pos;
        float yRot;
        float xRot;
        bool isOnGround;
        bool hasPos;
        bool hasRot;
        bool flying;
        uint32_t field_0x3C;
    };
    MC_CHECK_SIZE(ServerboundMovePlayerPacket, 0x40);

    class ServerboundMovePlayerPacket::PosRot : public ServerboundMovePlayerPacket
    {
    public:
        PosRot(double xPos, double yPos, double zPos, float yaw, float pitch, bool onGround, bool isFlying)
        {
            MLINK_FUNC(void, 0x028AD398, ServerboundMovePlayerPacket::PosRot *, double, double, double, float, float, bool,
                       bool)(this, xPos, yPos, zPos, yaw, pitch, onGround, isFlying);
        }
    };

    class ServerboundMovePlayerPacket::Pos : public ServerboundMovePlayerPacket
    {
    public:
        Pos(double xPos, double yPos, double yView, double zPos, bool onGround, bool isFlying)
        {
            MLINK_FUNC(void, 0x028AD6C4, ServerboundMovePlayerPacket::Pos *, double, double, double, double, bool, bool)(this, xPos, yPos, yView,
                                                                                                                         zPos, onGround, isFlying);
        }
    };

    class ServerboundMovePlayerPacket::Rot : public ServerboundMovePlayerPacket
    {
    public:
        Rot(float yaw, float pitch, bool onGround, bool isFlying)
        {
            MLINK_FUNC(void, 0x028AD954, ServerboundMovePlayerPacket::Rot *, float, float, bool, bool)(this, yaw, pitch, onGround, isFlying);
        }
    };
} // namespace mc
