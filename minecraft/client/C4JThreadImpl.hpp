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

        bool isRunning()
        {
            return MLINK_FUNC(bool, 0x034ACFCC, C4JThreadImpl *)(this);
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
