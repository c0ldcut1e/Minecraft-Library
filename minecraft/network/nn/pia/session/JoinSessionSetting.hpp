#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/session/ISessionInfo.hpp"

namespace nn::pia::session
{
    class JoinSessionSetting
    {
    public:
        JoinSessionSetting()
        {
            MLINK_FUNC(void, 0x03506D40, JoinSessionSetting *)(this);
        }

        ~JoinSessionSetting()
        {
            MLINK_FUNC(void, 0x03506C98, JoinSessionSetting *)(this);
        }

        [[nodiscard]] const ISessionInfo *GetSessionInfoPtr() const
        {
            return MLINK_FUNC(const ISessionInfo *, 0x03506CAC, const JoinSessionSetting *)(this);
        }

        void SetSessionId(uint32_t sessionId)
        {
            MLINK_FUNC(void, 0x03506CB4, JoinSessionSetting *, uint32_t)(this, sessionId);
        }

        [[nodiscard]] uint32_t GetSessionId() const
        {
            return MLINK_FUNC(uint32_t, 0x03506CBC, const JoinSessionSetting *)(this);
        }

        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03506CF4, JoinSessionSetting *, uint16_t)(this, participantCount);
        }

        [[nodiscard]] uint16_t GetMaxParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03506CFC, const JoinSessionSetting *)(this);
        }

        void SetSessionInfoPtr(const ISessionInfo *sessionInfo)
        {
            MLINK_FUNC(void, 0x03506D24, JoinSessionSetting *, const ISessionInfo *)(this, sessionInfo);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x03506D2C, JoinSessionSetting *)(this);
        }

        ISessionInfo *sessionInfo;
        uint32_t sessionId;
        uint16_t maximumParticipantCount;
        uint8_t field_0xA;
        uint8_t field_0xB;
        void *field_0xC;
    };
    MC_CHECK_SIZE(JoinSessionSetting, 0x10);
} // namespace nn::pia::session
