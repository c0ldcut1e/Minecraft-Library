#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/common/FixedString.hpp"
#include "network/nn/pia/session/JoinSessionSetting.hpp"

namespace nn::pia::inet
{
    class NexJoinSessionSetting : public session::JoinSessionSetting
    {
    public:
        NexJoinSessionSetting()
        {
            MLINK_FUNC(void, 0x0357A6AC, NexJoinSessionSetting *)(this);
        }

        ~NexJoinSessionSetting()
        {
            MLINK_FUNC(void, 0x0357A89C, NexJoinSessionSetting *, uint32_t)(this, 2);
        }

        [[nodiscard]] const common::FixedString128 *GetSessionUserPassword() const
        {
            return MLINK_FUNC(const common::FixedString128 *, 0x0357A8F0, const NexJoinSessionSetting *)(this);
        }

        [[nodiscard]] const common::FixedString64 *GetSessionSystemPassword() const
        {
            return MLINK_FUNC(const common::FixedString64 *, 0x0357A8F8, const NexJoinSessionSetting *)(this);
        }

        [[nodiscard]] uint16_t GetExtraParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x0357A900, const NexJoinSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetMatchmakeSessionOption() const
        {
            return MLINK_FUNC(uint32_t, 0x0357A908, const NexJoinSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetMatchmakeSessionOption() const
        {
            return MLINK_FUNC(bool, 0x0357A910, const NexJoinSessionSetting *)(this);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x0357A918, NexJoinSessionSetting *)(this);
        }

        common::FixedString128 sessionUserPassword;
        common::FixedString64 sessionSystemPassword;
        uint16_t extraParticipantCount;
        uint16_t field_0x102;
        uint32_t matchmakeSessionOption;
        bool isMatchmakeSessionOptionSet;
        uint8_t field_0x109;
        uint8_t field_0x10A;
        uint8_t field_0x10B;
    };
    MC_CHECK_SIZE(NexJoinSessionSetting, 0x10C);
} // namespace nn::pia::inet
