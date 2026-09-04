#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#define MC_MILES_SAMPLE_FREE    1
#define MC_MILES_SAMPLE_DONE    2
#define MC_MILES_SAMPLE_PLAYING 4
#define MC_MILES_SAMPLE_STOPPED 8

namespace mc
{
    using MilesFalloffFunction = float (*)(void *sample, float distance, float rolloffFactor, float minDistance, float maxDistance);

    inline void *AIL_primary_digital_driver(void *driver)
    {
        return MLINK_FUNC(void *, 0x034BE4E4, void *)(driver);
    }

    inline void *AIL_allocate_sample_handle(void *driver)
    {
        return MLINK_FUNC(void *, 0x034BA914, void *)(driver);
    }

    inline void AIL_release_sample_handle(void *sample)
    {
        MLINK_FUNC(void, 0x034BADB4, void *)(sample);
    }

    inline int32_t AIL_set_named_sample_file(void *sample, const char *fileName, const void *fileImage, int32_t fileSize, int32_t block)
    {
        return MLINK_FUNC(int32_t, 0x034BB034, void *, const char *, const void *, int32_t, int32_t)(sample, fileName, fileImage, fileSize, block);
    }

    inline void AIL_start_sample(void *sample)
    {
        MLINK_FUNC(void, 0x034BB594, void *)(sample);
    }

    inline void AIL_stop_sample(void *sample)
    {
        MLINK_FUNC(void, 0x034BB638, void *)(sample);
    }

    inline uint32_t AIL_sample_status(void *sample)
    {
        return MLINK_FUNC(uint32_t, 0x034BC590, void *)(sample);
    }

    inline void AIL_set_sample_volume_levels(void *sample, float leftLevel, float rightLevel)
    {
        MLINK_FUNC(void, 0x034BC160, void *, float, float)(sample, leftLevel, rightLevel);
    }

    inline void AIL_set_sample_playback_rate_factor(void *sample, float factor)
    {
        MLINK_FUNC(void, 0x034BB8DC, void *, float)(sample, factor);
    }

    inline void AIL_set_sample_loop_count(void *sample, int32_t loopCount)
    {
        MLINK_FUNC(void, 0x034BC40C, void *, int32_t)(sample, loopCount);
    }

    inline void AIL_set_sample_is_3D(void *sample, int32_t is3D)
    {
        MLINK_FUNC(void, 0x034BBD74, void *, int32_t)(sample, is3D);
    }

    inline int32_t AIL_set_sample_3D_position(void *sample, float x, float y, float z)
    {
        return MLINK_FUNC(int32_t, 0x034BEC80, void *, float, float, float)(sample, x, y, z);
    }

    inline int32_t AIL_set_sample_3D_distances(void *sample, float maxDistance, float minDistance, int32_t autoWetAttenuation)
    {
        return MLINK_FUNC(int32_t, 0x034BE928, void *, float, float, int32_t)(sample, maxDistance, minDistance, autoWetAttenuation);
    }

    inline void AIL_register_falloff_function_callback(void *sample, MilesFalloffFunction callback)
    {
        MLINK_FUNC(void, 0x034BD34C, void *, MilesFalloffFunction)(sample, callback);
    }
} // namespace mc
