#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "network/nn/pia/session/SessionSearchCriteria.hpp"

namespace nn::pia::inet
{
    class NexSessionSearchCriteria : public session::SessionSearchCriteria
    {
    public:
        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x035817DC, NexSessionSearchCriteria *, uint16_t)(this, participantCount);
        }
    };
} // namespace nn::pia::inet
