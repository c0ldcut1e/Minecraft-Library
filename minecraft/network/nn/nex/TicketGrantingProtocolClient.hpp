#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "ProtocolCallContext.hpp"
#include "String.hpp"

namespace nn::nex
{
    class TicketGrantingProtocolClient
    {
    public:
        TicketGrantingProtocolClient(uint16_t protocolId)
        {
            MLINK_FUNC(TicketGrantingProtocolClient *, 0x037F7AE0, TicketGrantingProtocolClient *, uint16_t)(this, protocolId);
        }

        ~TicketGrantingProtocolClient()
        {
            MLINK_FUNC(void, 0x038066AC, TicketGrantingProtocolClient *, uint32_t)(this, 2);
        }

        bool CallGetName(ProtocolCallContext *context, String *name, const uint32_t &principalId)
        {
            return MLINK_FUNC(bool, 0x037F98C0, TicketGrantingProtocolClient *, ProtocolCallContext *, String *, const uint32_t &)(this, context,
                                                                                                                                   name, principalId);
        }

        bool CallGetPID(ProtocolCallContext *context, uint32_t *principalId, const String &name)
        {
            return MLINK_FUNC(bool, 0x037F9270, TicketGrantingProtocolClient *, ProtocolCallContext *, uint32_t *, const String &)(this, context,
                                                                                                                                   principalId, name);
        }

        uint32_t data[18];
    };
    MC_CHECK_SIZE(TicketGrantingProtocolClient, 0x48);
} // namespace nn::nex
