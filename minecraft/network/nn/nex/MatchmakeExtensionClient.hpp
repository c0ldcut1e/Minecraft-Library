#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "JoinMatchmakeSessionParam.hpp"
#include "MatchMakingClient.hpp"
#include "MatchmakeSession.hpp"
#include "ProtocolCallContext.hpp"
#include "qVector.hpp"

namespace nn::nex
{
    class MatchmakeExtensionClient : public MatchMakingClient
    {
    public:
        bool JoinMatchmakeSession(ProtocolCallContext *context, const JoinMatchmakeSessionParam &param, MatchmakeSession *session)
        {
            return MLINK_FUNC(bool, 0x03650BFC, MatchmakeExtensionClient *, ProtocolCallContext *, const JoinMatchmakeSessionParam &,
                              MatchmakeSession *)(this, context, param, session);
        }

        // The game passes the buffer by value as a pointer to a caller owned copy, so the caller keeps ownership of its data
        bool UpdateApplicationBuffer(ProtocolCallContext *context, uint32_t gatheringId, const qVector<uint8_t> &buffer)
        {
            return MLINK_FUNC(bool, 0x03650F08, MatchmakeExtensionClient *, ProtocolCallContext *, uint32_t,
                              const qVector<uint8_t> *)(this, context, gatheringId, &buffer);
        }
    };
} // namespace nn::nex
