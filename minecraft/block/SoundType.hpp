#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "sound/SoundEvent.hpp"

namespace mc
{
    class SoundType
    {
    public:
        static void staticCtor()
        {
            MLINK_FUNC(void, 0x029494D0)();
        }

        SoundType(float volume, float pitch, const SoundEvent *breakSound, const SoundEvent *stepSound, const SoundEvent *placeSound,
                  const SoundEvent *hitSound, const SoundEvent *fallSound)
        {
            MLINK_FUNC(void, 0x02949424, SoundType *, float, float, const SoundEvent *, const SoundEvent *, const SoundEvent *, const SoundEvent *,
                       const SoundEvent *)(this, volume, pitch, breakSound, stepSound, placeSound, hitSound, fallSound);
        }

        const SoundEvent *getPlaceSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x0290670C, SoundType *)(this);
        }

        float getVolume()
        {
            return MLINK_FUNC(float, 0x02906714, SoundType *)(this);
        }

        float getPitch()
        {
            return MLINK_FUNC(float, 0x0290671C, SoundType *)(this);
        }

        const SoundEvent *getBreakSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x029498A4, SoundType *)(this);
        }

        const SoundEvent *getStepSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x029498AC, SoundType *)(this);
        }

        const SoundEvent *getHitSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x029498B4, SoundType *)(this);
        }

        const SoundEvent *getFallSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x029498BC, SoundType *)(this);
        }

        float volume;
        float pitch;
        const SoundEvent *breakSound;
        const SoundEvent *stepSound;
        const SoundEvent *placeSound;
        const SoundEvent *hitSound;
        const SoundEvent *fallSound;
    };
    MC_CHECK_SIZE(SoundType, 0x1C);
} // namespace mc
