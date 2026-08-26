#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/StationIndex.hpp"

namespace nn::pia::session
{
    class Mesh
    {
    public:
        static Mesh *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<Mesh>(0x104D1CE4);
        }

        StationIndex GetHostStationIndex()
        {
            return MLINK_FUNC(StationIndex, 0x0350A9D0, Mesh *)(this);
        }

        StationIndex GetLocalStationIndex()
        {
            return MLINK_FUNC(StationIndex, 0x0350A9D8, Mesh *)(this);
        }

        [[nodiscard]] bool IsCreateMeshCompleted() const
        {
            return MLINK_FUNC(bool, 0x03509784, const Mesh *)(this);
        }

        [[nodiscard]] Result GetCreateMeshResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0350982C, const Mesh *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsHost() const
        {
            return MLINK_FUNC(bool, 0x03509834, const Mesh *)(this);
        }

        [[nodiscard]] uint16_t GetStationNum() const
        {
            return MLINK_FUNC(uint16_t, 0x0350985C, const Mesh *)(this);
        }

        [[nodiscard]] bool IsMeshStartTimeValid() const
        {
            return MLINK_FUNC(bool, 0x035098E8, const Mesh *)(this);
        }

        Result DestroyMeshAsync()
        {
            Result result;
            MLINK_FUNC(void, 0x03509CCC, Mesh *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsDestroyMeshCompleted() const
        {
            return MLINK_FUNC(bool, 0x03509D94, const Mesh *)(this);
        }

        [[nodiscard]] Result GetDestroyMeshResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x03509D9C, const Mesh *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsHostMigrationEnabled() const
        {
            return MLINK_FUNC(bool, 0x03509DA4, const Mesh *)(this);
        }

        [[nodiscard]] bool IsLeaveMeshWithHostMigrationCompleted() const
        {
            return MLINK_FUNC(bool, 0x0350A048, const Mesh *)(this);
        }

        [[nodiscard]] Result GetLeaveMeshWithHostMigrationResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0350A050, const Mesh *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsProcessingLeaveMesh() const
        {
            return MLINK_FUNC(bool, 0x0350A058, const Mesh *)(this);
        }

        [[nodiscard]] bool IsJoinMeshCompleted() const
        {
            return MLINK_FUNC(bool, 0x0350A670, const Mesh *)(this);
        }

        [[nodiscard]] Result GetJoinMeshResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0350A678, const Mesh *, Result *)(this, &result);
            return result;
        }

        Result CancelJoinMeshAsync()
        {
            Result result;
            MLINK_FUNC(void, 0x0350A720, Mesh *, Result *)(this, &result);
            return result;
        }

        Result LeaveMeshAsync()
        {
            Result result;
            MLINK_FUNC(void, 0x0350A8F8, Mesh *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsLeaveMeshCompleted() const
        {
            return MLINK_FUNC(bool, 0x0350A9C0, const Mesh *)(this);
        }

        [[nodiscard]] Result GetLeaveMeshResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0350A9C8, const Mesh *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] Result CheckConnectionError() const
        {
            Result result;
            MLINK_FUNC(void, 0x0350A9E0, const Mesh *, Result *)(this, &result);
            return result;
        }

        void SetSyncClockPulseInterval(int interval)
        {
            MLINK_FUNC(void, 0x0350AC00, Mesh *, int)(this, interval);
        }

        void SetHostMigrationStarted(bool started)
        {
            MLINK_FUNC(void, 0x0350AC64, Mesh *, bool)(this, started);
        }

        [[nodiscard]] bool IsHostMigrationStarted() const
        {
            return MLINK_FUNC(bool, 0x0350AC6C, const Mesh *)(this);
        }

        [[nodiscard]] uint8_t GetLocalPlayerCount() const
        {
            return MLINK_FUNC(uint8_t, 0x0350AEDC, const Mesh *)(this);
        }

        [[nodiscard]] bool IsPlayersCountedAsParticipants() const
        {
            return MLINK_FUNC(bool, 0x0350AEE4, const Mesh *)(this);
        }

        [[nodiscard]] bool IsRecentPlayRecordEnabled() const
        {
            return MLINK_FUNC(bool, 0x0350AEEC, const Mesh *)(this);
        }

        void SetDenyJoinRequestByInvalidState(bool deny)
        {
            MLINK_FUNC(void, 0x0350AF8C, Mesh *, bool)(this, deny);
        }

        void SetDenyJoinRequestBySessionIsFull(bool deny)
        {
            MLINK_FUNC(void, 0x0350AF94, Mesh *, bool)(this, deny);
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
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t hostStationIndex;
        uint32_t localStationIndex;
    };
    MC_CHECK_SIZE(Mesh, 0x60);
} // namespace nn::pia::session
