#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "network/nn/pia/session/SessionSearchCriteria.hpp"

namespace nn::pia::lan
{
    class LanSessionSearchCriteria : public session::SessionSearchCriteria
    {
    public:
        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03612E38, LanSessionSearchCriteria *, uint16_t)(this, participantCount);
        }
    };
} // namespace nn::pia::lan
