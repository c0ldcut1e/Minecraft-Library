#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

namespace nn::pia::inet
{
    class NexSessionSearchCriteria
    {
    public:
        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x035817DC, NexSessionSearchCriteria *, uint16_t)(this, participantCount);
        }
    };
} // namespace nn::pia::inet
