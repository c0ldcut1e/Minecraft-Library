#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "PlatformTypes.hpp"

namespace mc
{
    class C4JEvent
    {
    public:
        enum EMode : uint32_t
        {
            EMode_AutoClear   = 0,
            EMode_ManualClear = 1,
        };
    };

    class C4JEventImpl
    {
    public:
        C4JEventImpl(C4JEvent::EMode mode = C4JEvent::EMode_AutoClear)
        {
            MLINK_FUNC(C4JEventImpl *, 0x034A9BB8, C4JEventImpl *, C4JEvent::EMode)(this, mode);
        }

        ~C4JEventImpl()
        {
            MLINK_FUNC(void, 0x034A9C48, C4JEventImpl *, uint32_t)(this, 0);
        }

        void Set()
        {
            MLINK_FUNC(void, 0x034A9CD4, C4JEventImpl *)(this);
        }

        void Clear()
        {
            MLINK_FUNC(void, 0x034A9CE8, C4JEventImpl *)(this);
        }

        uint32_t WaitForSignal(int timeoutMs)
        {
            return MLINK_FUNC(uint32_t, 0x034A9CFC, C4JEventImpl *, int)(this, timeoutMs);
        }

        void *vtable;
        C4JEvent::EMode mode;
        int waitingThreadCount;
        OSEvent event;
    };
    MC_CHECK_SIZE(C4JEventImpl, 0x30);
} // namespace mc
