#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::session
{
    class CreateSessionSetting
    {
    public:
        CreateSessionSetting()
        {
            MLINK_FUNC(void, 0x03506C10, CreateSessionSetting *)(this);
        }

        ~CreateSessionSetting()
        {
            MLINK_FUNC(void, 0x03506BB0, CreateSessionSetting *)(this);
        }

        void Copy(const CreateSessionSetting &other)
        {
            MLINK_FUNC(void, 0x03506C64, CreateSessionSetting *, const CreateSessionSetting *)(this, &other);
        }

        [[nodiscard]] uint16_t GetMinParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03506BC4, const CreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetMinParticipantNum() const
        {
            return MLINK_FUNC(bool, 0x03506BCC, const CreateSessionSetting *)(this);
        }

        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03506BD4, CreateSessionSetting *, uint16_t)(this, participantCount);
        }

        [[nodiscard]] uint16_t GetMaxParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03506BE4, const CreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetMaxParticipantNum() const
        {
            return MLINK_FUNC(bool, 0x03506BEC, const CreateSessionSetting *)(this);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x03506BF4, CreateSessionSetting *)(this);
        }

        uint16_t minimumParticipantCount;
        uint8_t field_0x2;
        uint8_t field_0x3;
        uint16_t maximumParticipantCount;
        uint8_t field_0x6;
        uint8_t field_0x7;
        void *sessionInfo;
    };
    MC_CHECK_SIZE(CreateSessionSetting, 0xC);
} // namespace nn::pia::session
