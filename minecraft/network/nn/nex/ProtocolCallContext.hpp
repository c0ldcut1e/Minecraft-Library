#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Credentials.hpp"
#include "MinecraftLib.hpp"

namespace nn::nex
{
    enum eCallContextState
    {
        eCallContextState_Ready          = 0,
        eCallContextState_CallInProgress = 1,
        eCallContextState_Success        = 2,
        eCallContextState_Failure        = 3,
        eCallContextState_Cancelled      = 4,
    };

    class ProtocolCallContext
    {
    public:
        ProtocolCallContext(Credentials *credentials)
        {
            MLINK_FUNC(ProtocolCallContext *, 0x037E2C98, ProtocolCallContext *, Credentials *)(this, credentials);
        }
        ~ProtocolCallContext()
        {
            MLINK_FUNC(void, 0x037E2D40, ProtocolCallContext *, uint32_t)(this, 2);
        }

        [[nodiscard]] eCallContextState GetState() const
        {
            return static_cast<eCallContextState>(data[5]);
        }

        [[nodiscard]] bool IsFinished() const
        {
            return GetState() == eCallContextState_Success || GetState() == eCallContextState_Failure || GetState() == eCallContextState_Cancelled;
        }

        [[nodiscard]] bool IsSuccess() const
        {
            return GetState() == eCallContextState_Success;
        }

        bool Wait(uint32_t timeoutMilliseconds)
        {
            return MLINK_FUNC(bool, 0x036FD610, ProtocolCallContext *, uint32_t)(this, timeoutMilliseconds);
        }

        uint32_t data[30];
    };
    MC_CHECK_SIZE(ProtocolCallContext, 0x78);
} // namespace nn::nex
