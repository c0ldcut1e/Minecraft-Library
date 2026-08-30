#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "DateTime.hpp"
#include "Gathering.hpp"
#include "MatchmakeParam.hpp"
#include "MinecraftLib.hpp"
#include "String.hpp"
#include "qVector.hpp"

namespace nn::nex
{
    enum class MatchmakeSystemType : uint32_t
    {
    };

    class MatchmakeSession : public Gathering
    {
    public:
        MatchmakeSession()
        {
            MLINK_FUNC(void, 0x036306F8, MatchmakeSession *)(this);
        }

        ~MatchmakeSession()
        {
            MLINK_FUNC(void, 0x036520F4, MatchmakeSession *, uint32_t)(this, 2);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x036305F4, MatchmakeSession *)(this);
        }

        void SetMatchmakeSystemType(MatchmakeSystemType type, uint32_t policyArgument)
        {
            MLINK_FUNC(void, 0x036305C0, MatchmakeSession *, MatchmakeSystemType, uint32_t)(this, type, policyArgument);
        }

        void SetGameMode(uint32_t value)
        {
            MLINK_FUNC(void, 0x03630988, MatchmakeSession *, uint32_t)(this, value);
        }

        void SetAttribute(uint32_t index, uint32_t value)
        {
            MLINK_FUNC(void, 0x03630990, MatchmakeSession *, uint32_t, uint32_t)(this, index, value);
        }

        void SetApplicationBuffer(const qVector<uint8_t> &value)
        {
            MLINK_FUNC(void, 0x036309A0, MatchmakeSession *, const qVector<uint8_t> *)(this, &value);
        }

        void SetOpenParticipation(bool value)
        {
            MLINK_FUNC(void, 0x036309A8, MatchmakeSession *, bool)(this, value);
        }

        [[nodiscard]] uint32_t GetAttribute(uint32_t index) const
        {
            return MLINK_FUNC(uint32_t, 0x036309B0, const MatchmakeSession *, uint32_t)(this, index);
        }

        void SetProgressScore(uint8_t value)
        {
            MLINK_FUNC(void, 0x036309C0, MatchmakeSession *, uint8_t)(this, value);
        }

        uint8_t dataVersion;
        uint8_t field_0x31;
        uint8_t field_0x32;
        uint8_t field_0x33;
        uint32_t sessionId;
        qVector<uint32_t> attributes;
        bool openParticipation;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        MatchmakeSystemType matchmakeSystemType;
        qVector<uint8_t> applicationBuffer;
        uint32_t gameMode;
        uint8_t progressScore;
        uint8_t field_0x65;
        uint8_t field_0x66;
        uint8_t field_0x67;
        qVector<uint8_t> sessionKey;
        uint32_t field_0x78;
        MatchmakeParam matchmakeParam;
        DateTime startedTime;
        String field_0x98;
        uint32_t field_0xA0;
        uint8_t field_0xA4;
        uint8_t field_0xA5;
        uint8_t field_0xA6;
        uint8_t field_0xA7;
    };
    MC_CHECK_SIZE(MatchmakeSession, 0xA8);
} // namespace nn::nex
