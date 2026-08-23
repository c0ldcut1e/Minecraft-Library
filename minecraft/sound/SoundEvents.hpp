#pragma once

#include "mlink/MLink.hpp"

#include "SoundEvent.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class SoundEvents
    {
    public:
        static SoundEvent *registerSound(const mstd::basic_string<wchar_t> &name)
        {
            return MLINK_FUNC(SoundEvent *, 0x028E28C4, const mstd::basic_string<wchar_t> &)(name);
        }

        static SoundEvent *registerSound(SoundEvent *sound)
        {
            return MLINK_FUNC(SoundEvent *, 0x028E25E4, SoundEvent *)(sound);
        }

        static void staticCtor()
        {
            MLINK_FUNC(void, 0x028E2970)();
        }
    };
} // namespace mc
