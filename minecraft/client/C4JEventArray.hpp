#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/C4JEvent.hpp"

namespace mc
{
    class C4JEventArray
    {
    public:
        enum EMode : uint32_t
        {
            EMode_AutoClear   = 0,
            EMode_ManualClear = 1,
        };
    };

    class C4JEventArrayImpl
    {
    public:
        C4JEventArrayImpl(int count, C4JEventArray::EMode mode = C4JEventArray::EMode_AutoClear)
        {
            MLINK_FUNC(C4JEventArrayImpl *, 0x034A9D9C, C4JEventArrayImpl *, int, C4JEventArray::EMode)(this, count, mode);
        }

        ~C4JEventArrayImpl()
        {
            MLINK_FUNC(void, 0x034AB740, C4JEventArrayImpl *, uint32_t)(this, 0);
        }

        void Set(int index)
        {
            MLINK_FUNC(void, 0x034AA00C, C4JEventArrayImpl *, int)(this, index);
        }

        void Clear(int index)
        {
            MLINK_FUNC(void, 0x034AA028, C4JEventArrayImpl *, int)(this, index);
        }

        void SetAll()
        {
            MLINK_FUNC(void, 0x034AA044, C4JEventArrayImpl *)(this);
        }

        void ClearAll()
        {
            MLINK_FUNC(void, 0x034AA0AC, C4JEventArrayImpl *)(this);
        }

        int WaitForAll(int timeoutMs)
        {
            return MLINK_FUNC(int, 0x034AA114, C4JEventArrayImpl *, int)(this, timeoutMs);
        }

        int WaitForAny(int timeoutMs)
        {
            return MLINK_FUNC(int, 0x034AA29C, C4JEventArrayImpl *, int)(this, timeoutMs);
        }

        int WaitForSingle(int index, int timeoutMs)
        {
            return MLINK_FUNC(int, 0x034AA424, C4JEventArrayImpl *, int, int)(this, index, timeoutMs);
        }

        void Cancel()
        {
            MLINK_FUNC(void, 0x034AA49C, C4JEventArrayImpl *)(this);
        }

        C4JEventImpl *events;
        uint32_t count;
        uint32_t field_0x8;
        uint32_t field_0xC;
    };
    MC_CHECK_SIZE(C4JEventArrayImpl, 0x10);
} // namespace mc
