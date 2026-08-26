#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/session/CreateSessionSetting.hpp"
#include "network/nn/pia/session/JoinSessionSetting.hpp"
#include "network/nn/pia/session/SessionSearchCriteria.hpp"
#include "network/nn/pia/session/UpdateSessionSetting.hpp"

namespace nn::pia::session
{
    class Session
    {
    public:
        static Session *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<Session>(0x104D1CEC);
        }

        [[nodiscard]] bool IsPostponeNotice() const
        {
            return MLINK_FUNC(bool, 0x0351E040, const Session *)(this);
        }

        [[nodiscard]] uint8_t GetStatus() const
        {
            return MLINK_FUNC(uint8_t, 0x0351E048, const Session *)(this);
        }

        void UpdateSessionStationInfo(uint32_t stationIndex)
        {
            MLINK_FUNC(void, 0x0351E094, Session *, uint32_t)(this, stationIndex);
        }

        void ResetSessionSystemPassword()
        {
            MLINK_FUNC(void, 0x0351E490, Session *)(this);
        }

        void ClearWaitingStationIndex()
        {
            MLINK_FUNC(void, 0x0351E688, Session *)(this);
        }

        void Cleanup()
        {
            MLINK_FUNC(void, 0x0351E694, Session *)(this);
        }

        void ResetInternalAsyncState()
        {
            MLINK_FUNC(void, 0x0351EA8C, Session *)(this);
        }

        [[nodiscard]] bool IsJoinRandomSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351ED38, const Session *)(this);
        }

        [[nodiscard]] bool IsBrowseSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F028, const Session *)(this);
        }

        [[nodiscard]] Result GetBrowseSessionResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F030, const Session *, Result *)(this, &result);
            return result;
        }

        Result BrowseSessionAsync(const SessionSearchCriteria *searchCriteria)
        {
            Result result;
            MLINK_FUNC(void, 0x0351EDE8, Session *, Result *, const SessionSearchCriteria *)(this, &result, searchCriteria);
            return result;
        }

        Result CreateSessionAsync(const CreateSessionSetting *createSessionSetting)
        {
            Result result;
            MLINK_FUNC(void, 0x0351F058, Session *, Result *, const CreateSessionSetting *)(this, &result, createSessionSetting);
            return result;
        }

        [[nodiscard]] Result GetCreateSessionResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F27C, const Session *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsJoinSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F458, const Session *)(this);
        }

        [[nodiscard]] Result GetJoinSessionResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F460, const Session *, Result *)(this, &result);
            return result;
        }

        Result JoinSessionAsync(const JoinSessionSetting *joinSessionSetting)
        {
            Result result;
            MLINK_FUNC(void, 0x0351F284, Session *, Result *, const JoinSessionSetting *)(this, &result, joinSessionSetting);
            return result;
        }

        uint32_t GetJointSessionId()
        {
            return MLINK_FUNC(uint32_t, 0x0352046C, Session *)(this);
        }

        [[nodiscard]] uint64_t GetJointSessionHostStationId() const
        {
            return MLINK_FUNC(uint64_t, 0x035204A4, const Session *)(this);
        }

        [[nodiscard]] Result GetLeaveSessionResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F630, const Session *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsUpdateSessionSettingCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F92C, const Session *)(this);
        }

        [[nodiscard]] Result GetUpdateSessionSettingResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F934, const Session *, Result *)(this, &result);
            return result;
        }

        Result UpdateSessionSettingAsync(const UpdateSessionSetting *updateSessionSetting)
        {
            Result result;
            MLINK_FUNC(void, 0x0351F8C4, Session *, Result *, const UpdateSessionSetting *)(this, &result, updateSessionSetting);
            return result;
        }

        [[nodiscard]] bool IsHost() const
        {
            return MLINK_FUNC(bool, 0x0351F93C, const Session *)(this);
        }

        [[nodiscard]] bool IsOwner() const
        {
            return MLINK_FUNC(bool, 0x0351FEE0, const Session *)(this);
        }

        [[nodiscard]] uint16_t GetValidStationIdNum() const
        {
            return MLINK_FUNC(uint16_t, 0x0351FF18, const Session *)(this);
        }

        [[nodiscard]] uint16_t GetStationNum() const
        {
            return MLINK_FUNC(uint16_t, 0x0351FF20, const Session *)(this);
        }

        [[nodiscard]] uint32_t GetMatchmakeSessionParticipantNum() const
        {
            return MLINK_FUNC(uint32_t, 0x0351FF24, const Session *)(this);
        }

        [[nodiscard]] uint32_t GetMatchmakeSessionStationNum() const
        {
            return MLINK_FUNC(uint32_t, 0x0351FF48, const Session *)(this);
        }

        [[nodiscard]] Result CheckConnectionError() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351FF6C, const Session *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsJointSessionHost() const
        {
            return MLINK_FUNC(bool, 0x035202F0, const Session *)(this);
        }

        [[nodiscard]] bool IsHostMigrationEnabled() const
        {
            return MLINK_FUNC(bool, 0x035203F4, const Session *)(this);
        }

        [[nodiscard]] bool IsCreateSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F274, const Session *)(this);
        }

        [[nodiscard]] bool IsLeaveSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F628, const Session *)(this);
        }

        [[nodiscard]] bool IsProcessingJoin() const
        {
            return MLINK_FUNC(bool, 0x03520650, const Session *)(this);
        }

        void SetSyncClockPulseInterval(int interval)
        {
            MLINK_FUNC(void, 0x03520B00, Session *, int)(this, interval);
        }

        [[nodiscard]] uint32_t GetLocalPlayerCount() const
        {
            return MLINK_FUNC(uint32_t, 0x03521904, const Session *)(this);
        }

        [[nodiscard]] uint16_t GetParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03521928, const Session *)(this);
        }

        Result LeaveSessionAsync()
        {
            Result result;
            MLINK_FUNC(void, 0x0351F468, Session *, Result *)(this, &result);
            return result;
        }

        mc::VTable *vtable;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        void *field_0x10;
        void *field_0x14;
        void *field_0x18;
        void *field_0x1C;
        void *field_0x20;
        void *field_0x24;
        void *field_0x28;
        uint32_t field_0x2C;
        void *field_0x30;
        void *field_0x34;
        void *nexMatchmakeSession;
        uint32_t field_0x3C;
        void *field_0x40;
        void *field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        void *joinNoticeCallback;
        void *joinNoticeUserdata;
        void *field_0x58;
        void *stationIdTable;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t matchmakeStatus;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint64_t ownStationId;
        uint64_t partnerStationId;
        uint64_t jointSessionHostStationId;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t callCtx_0;
        uint32_t callCtx_1;
        uint32_t callCtx_2;
        uint32_t callCtx_3;
        uint32_t callCtx_4;
        uint32_t field_0xAC;
        void *field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t sessionState;
        uint8_t field_0xC0;
        uint8_t field_0xC1;
        uint16_t participantCount0;
        uint16_t participantCount1;
        uint8_t slotIndex;
        uint8_t field_0xC7;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t sessionIds[2];
        void *field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        void *field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        void *field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        uint32_t field_0x14C;
    };
    MC_CHECK_SIZE(Session, 0x150);
} // namespace nn::pia::session
