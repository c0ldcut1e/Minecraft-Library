#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "network/nn/pia/Result.hpp"

namespace nn::pia::inet
{
    class NexCreateSessionSetting
    {
    public:
        static NexCreateSessionSetting *Create()
        {
            return MLINK_FUNC(NexCreateSessionSetting *, 0x035734CC, NexCreateSessionSetting *)((NexCreateSessionSetting *) nullptr);
        }

        void Destroy()
        {
            MLINK_FUNC(void, 0x03573808, NexCreateSessionSetting *, uint32_t)(this, 3);
        }

        Result SetApplicationData(const void *applicationData, uint32_t applicationDataSize)
        {
            Result result;
            MLINK_FUNC(void, 0x03573A7C, NexCreateSessionSetting *, Result *, const void *, uint32_t)(this, &result, applicationData,
                                                                                                      applicationDataSize);
            return result;
        }

        void SetGameMode(uint32_t gameMode)
        {
            MLINK_FUNC(void, 0x035738CC, NexCreateSessionSetting *, uint32_t)(this, gameMode);
        }

        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03506BD4, NexCreateSessionSetting *, uint16_t)(this, participantCount);
        }

        void SetOpenSession(bool openSession)
        {
            MLINK_FUNC(void, 0x03573D1C, NexCreateSessionSetting *, bool)(this, openSession);
        }

        void SetSessionType(uint32_t sessionType)
        {
            MLINK_FUNC(void, 0x035738F4, NexCreateSessionSetting *, uint32_t)(this, sessionType);
        }
    };
} // namespace nn::pia::inet
