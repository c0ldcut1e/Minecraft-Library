#pragma once

#include <cstdint>

#include "MatchmakeSession.hpp"
#include "String.hpp"
#include "qList.hpp"

namespace nn::nex
{
    class CreateMatchmakeSessionParam
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        MatchmakeSession matchmakeSession;
        qList<uint32_t> additionalParticipants;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        String joinMessage;
    };
} // namespace nn::nex
