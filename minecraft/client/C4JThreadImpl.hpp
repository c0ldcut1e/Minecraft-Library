#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class C4JThreadImpl
    {
    public:
        C4JThreadImpl(int (*function)(void *data), void *data, const char *name, int stackSize)
        {
            MLINK_FUNC(void, 0x034ACAC0, C4JThreadImpl *, int (*)(void *), void *, const char *, int)(this, function, data, name, stackSize);
        }

        C4JThreadImpl(const char *name)
        {
            MLINK_FUNC(void, 0x034ACC90, C4JThreadImpl *, const char *)(this, name);
        }

        ~C4JThreadImpl()
        {
            MLINK_FUNC(void, 0x034ACE48, C4JThreadImpl *)(this);
        }

        static C4JThreadImpl *getCurrentThread()
        {
            return MLINK_FUNC(C4JThreadImpl *, 0x034ABAA8)();
        }

        static bool isMainThread()
        {
            return MLINK_FUNC(bool, 0x034ABBB0)();
        }

        static const char *getCurrentThreadName()
        {
            return MLINK_FUNC(const char *, 0x034ABC00)();
        }

        bool isRunning()
        {
            return MLINK_FUNC(bool, 0x034ACFCC, C4JThreadImpl *)(this);
        }

        bool hasStarted()
        {
            return MLINK_FUNC(bool, 0x034ACFD4, C4JThreadImpl *)(this);
        }

        void SetProcessor(int processor)
        {
            MLINK_FUNC(void, 0x034ACFDC, C4JThreadImpl *, int)(this, processor);
        }

        int GetProcessor()
        {
            return MLINK_FUNC(int, 0x034AD01C, C4JThreadImpl *)(this);
        }

        void SetPriority(int priority)
        {
            MLINK_FUNC(void, 0x034AD024, C4JThreadImpl *, int)(this, priority);
        }

        int WaitForCompletion(int timeoutMs)
        {
            return MLINK_FUNC(int, 0x034AD07C, C4JThreadImpl *, int)(this, timeoutMs);
        }

        int GetExitCode()
        {
            return MLINK_FUNC(int, 0x034AD0A0, C4JThreadImpl *)(this);
        }

        const char *getName()
        {
            return MLINK_FUNC(const char *, 0x034AD0A8, C4JThreadImpl *)(this);
        }

        void Run()
        {
            MLINK_FUNC(void, 0x034ACF6C, C4JThreadImpl *)(this);
        }

        void SetDeleteOnExit(bool value)
        {
            MLINK_FUNC(void, 0x034AD0B0, C4JThreadImpl *, bool)(this, value);
        }

        uint8_t data[0x78];
    };
    MC_CHECK_SIZE(C4JThreadImpl, 0x78);
} // namespace mc
