#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "ProtocolCallContext.hpp"
#include "String.hpp"

namespace nn::nex
{
    class AccountManagementProtocolClient
    {
    public:
        AccountManagementProtocolClient(uint16_t protocolId)
        {
            MLINK_FUNC(AccountManagementProtocolClient *, 0x037A491C, AccountManagementProtocolClient *, uint16_t)(this, protocolId);
        }
        ~AccountManagementProtocolClient()
        {
            MLINK_FUNC(void, 0x037DD4E4, AccountManagementProtocolClient *, uint32_t)(this, 2);
        }

        bool CallGetName(ProtocolCallContext *context, const uint32_t &principalId, String *name)
        {
            return MLINK_FUNC(bool, 0x037A6C80, AccountManagementProtocolClient *, ProtocolCallContext *, const uint32_t &,
                              String *)(this, context, principalId, name);
        }

        uint32_t data[18];
    };
    MC_CHECK_SIZE(AccountManagementProtocolClient, 0x48);
} // namespace nn::nex
