#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

namespace mc
{
    class PlatformSoundEngineImpl
    {
    public:
        PlatformSoundEngineImpl()
        {
            MLINK_FUNC(void, 0x034AD62C, PlatformSoundEngineImpl *)(this);
        }

        static void initAX(void *context)
        {
            MLINK_FUNC(void, 0x034AD688, void *)(context);
        }

        static void errorCallback(int64_t error, const char *message)
        {
            MLINK_FUNC(void, 0x034AD6B8, int64_t, const char *)(error, message);
        }

        static float custom_falloff_function(void *sample, float distance, float rolloffFactor, float minDistance, float maxDistance)
        {
            return MLINK_FUNC(float, 0x034AD9D4, void *, float, float, float, float)(sample, distance, rolloffFactor, minDistance, maxDistance);
        }
    };
} // namespace mc
