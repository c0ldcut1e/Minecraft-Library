#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/inet/NexCreateSessionSetting.hpp"

namespace nn::pia::session
{
    class Session
    {
    public:
        static Session *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<Session>(0x104D1CEC);
        }

        Result CreateSessionAsync(const inet::NexCreateSessionSetting *createSessionSetting)
        {
            Result result;
            MLINK_FUNC(void, 0x0351F058, Session *, Result *, const inet::NexCreateSessionSetting *)(this, &result, createSessionSetting);
            return result;
        }

        [[nodiscard]] Result GetCreateSessionResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F27C, const Session *, Result *)(this, &result);
            return result;
        }

        uint32_t GetJointSessionId()
        {
            return MLINK_FUNC(uint32_t, 0x0352046C, Session *)(this);
        }

        [[nodiscard]] Result GetLeaveSessionResult() const
        {
            Result result;
            MLINK_FUNC(void, 0x0351F630, const Session *, Result *)(this, &result);
            return result;
        }

        [[nodiscard]] bool IsCreateSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F274, const Session *)(this);
        }

        [[nodiscard]] bool IsLeaveSessionCompleted() const
        {
            return MLINK_FUNC(bool, 0x0351F628, const Session *)(this);
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
