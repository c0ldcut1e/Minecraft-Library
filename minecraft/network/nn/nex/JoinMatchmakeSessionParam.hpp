#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "String.hpp"
#include "qList.hpp"

namespace nn::nex
{
    class JoinMatchmakeSessionParam
    {
    public:
        uint8_t version;
        uint32_t gatheringId;
        qList<uint32_t> additionalParticipants;
        uint32_t gatheringIdForParticipationCheck;
        uint32_t option;
        uint8_t behavior;
        String userPassword;
        String systemPassword;
        String joinMessage;
        uint16_t participationCount;
        uint16_t extraParticipants;
        void *vtable;
    };
    MC_CHECK_SIZE(JoinMatchmakeSessionParam, 0x40);
} // namespace nn::nex
