#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace nn::nex
{
    enum class CallContextState : uint32_t
    {
        Ready          = 0,
        CallInProgress = 1,
        Success        = 2,
        Failure        = 3,
        Cancelled      = 4,
    };

    class CallContext
    {
    public:
        CallContext()
        {
            MLINK_FUNC(void, 0x037263B0, CallContext *)(this);
        }

        ~CallContext()
        {
            MLINK_FUNC(void, 0x0372653C, CallContext *)(this);
        }

        [[nodiscard]] bool IsRegistered() const
        {
            return MLINK_FUNC(bool, 0x036FE480, const CallContext *)(this);
        }

        bool Wait(uint32_t timeoutMilliseconds)
        {
            return MLINK_FUNC(bool, 0x036FD610, CallContext *, uint32_t)(this, timeoutMilliseconds);
        }

        void Unregister()
        {
            MLINK_FUNC(void, 0x036FF560, CallContext *)(this);
        }

        [[nodiscard]] bool FlagIsSet(uint32_t flag) const
        {
            return MLINK_FUNC(bool, 0x036FF640, const CallContext *, uint32_t)(this, flag);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x0372681C, CallContext *)(this);
        }

        void SetCallInProgressState()
        {
            MLINK_FUNC(void, 0x03726920, CallContext *)(this);
        }

        void Register()
        {
            MLINK_FUNC(void, 0x03727320, CallContext *)(this);
        }

        void InitiateCall()
        {
            MLINK_FUNC(void, 0x037273FC, CallContext *)(this);
        }

        void InitiateSpecialCall()
        {
            MLINK_FUNC(void, 0x03727588, CallContext *)(this);
        }

        void SetFlag(uint32_t flag)
        {
            MLINK_FUNC(void, 0x037275D0, CallContext *, uint32_t)(this, flag);
        }

        [[nodiscard]] bool FlagsAreValid() const
        {
            return MLINK_FUNC(bool, 0x037275E0, const CallContext *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint8_t field_0x8;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t field_0xB;
        mc::VTable *vtable;
        uint32_t field_0x10;
        CallContextState state;
        uint8_t field_0x18;
        uint8_t field_0x19;
        uint8_t field_0x1A;
        uint8_t field_0x1B;
        void *field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        void *field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
    };
    MC_CHECK_SIZE(CallContext, 0x58);
} // namespace nn::nex
