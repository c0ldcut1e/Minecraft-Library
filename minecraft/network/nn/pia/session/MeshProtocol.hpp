#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/StationIndex.hpp"
#include "network/nn/pia/transport/ReliableSlidingWindow.hpp"

namespace nn::pia::session
{
    class MeshProtocol
    {
    public:
        void SendUpdateMesh(bool flag, uint32_t value)
        {
            MLINK_FUNC(void, 0x0350F628, MeshProtocol *, bool, uint32_t)(this, flag, value);
        }

        void ParseJoinResponse(MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor) accessor)
        {
            MLINK_FUNC(void, 0x0350F3D0, MeshProtocol *, MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor))(this, accessor);
        }

        void ParseUpdateMesh(MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor) accessor)
        {
            MLINK_FUNC(void, 0x0350FE84, MeshProtocol *, MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor))(this, accessor);
        }

        void ParseConnectionFailureNotice(MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor) accessor)
        {
            MLINK_FUNC(void, 0x035103C4, MeshProtocol *, MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor))(this, accessor);
        }

        void ParseConnectionReport(MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor) accessor)
        {
            MLINK_FUNC(void, 0x03510A44, MeshProtocol *, MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor))(this, accessor);
        }

        void ParseRelayRouteDirections(MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor) accessor)
        {
            MLINK_FUNC(void, 0x03510B48, MeshProtocol *, MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor))(this, accessor);
        }

        void ParseHelper(MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor) accessor)
        {
            MLINK_FUNC(void, 0x03510C48, MeshProtocol *, MC_UNDEFINED_TYPE(const uint32_t *, transport::ReceivedMessageAccessor))(this, accessor);
        }

        void SendDummyAck(StationIndex stationIndex)
        {
            MLINK_FUNC(void, 0x035101E8, MeshProtocol *, StationIndex)(this, stationIndex);
        }

        void Dispatch()
        {
            MLINK_FUNC(void, 0x03510DE4, MeshProtocol *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        transport::ReliableSlidingWindow *windows;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t updateBufferSize;
        uint8_t *updateBuffer;
    };
} // namespace nn::pia::session
