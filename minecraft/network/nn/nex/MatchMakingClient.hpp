#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ProtocolCallContext.hpp"

namespace nn::nex
{
    class MatchMakingClient
    {
    public:
        bool UnregisterGathering(ProtocolCallContext *context, uint32_t gatheringId)
        {
            return MLINK_FUNC(bool, 0x036E50B8, MatchMakingClient *, ProtocolCallContext *, uint32_t)(this, context, gatheringId);
        }
    };
} // namespace nn::nex
