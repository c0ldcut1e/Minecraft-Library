#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace mboost::detail
{
    class sp_counted_base
    {
    public:
        sp_counted_base() = default;

        void add_ref_copy()
        {
            __sync_fetch_and_add(&useCount, 1);
        }

        void destroy()
        {
            callVirtual(0x1C);
        }

        void dispose()
        {
            callVirtual(0x14);
        }

        void release()
        {
            if (__sync_sub_and_fetch(&useCount, 1) == 0)
            {
                dispose();
                weak_release();
            }
        }

        [[nodiscard]] int use_count() const
        {
            return (const volatile int &) useCount;
        }

        void weak_add_ref()
        {
            __sync_fetch_and_add(&weakCount, 1);
        }

        void weak_release()
        {
            if (__sync_sub_and_fetch(&weakCount, 1) == 0)
            {
                destroy();
            }
        }

        int useCount{};
        int weakCount{};
        uint32_t *vtable{};

        using VirtualFunction = void (*)(sp_counted_base *countedBase);

        void callVirtual(uint32_t offset)
        {
            ((VirtualFunction) vtable[offset / sizeof(uint32_t)])(this);
        }
    };
    MC_CHECK_SIZE(sp_counted_base, 0xC);
} // namespace mboost::detail
