#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class MobEffect;

    class MobEffectInstance
    {
    public:
        MobEffectInstance(MobEffect *effect)
        {
            MLINK_FUNC(void, 0x02692AC4, MobEffectInstance *, MobEffect *)(this, effect);
        }

        MobEffectInstance(MobEffect *effect, int duration)
        {
            MLINK_FUNC(void, 0x02692B40, MobEffectInstance *, MobEffect *, int)(this, effect, duration);
        }

        MobEffectInstance(MobEffect *effect, int duration, int amplifier)
        {
            MLINK_FUNC(void, 0x02692BC8, MobEffectInstance *, MobEffect *, int, int)(this, effect, duration, amplifier);
        }

        MobEffectInstance(MobEffect *effect, int duration, int amplifier, bool ambient, bool visible)
        {
            MLINK_FUNC(void, 0x02692C5C, MobEffectInstance *, MobEffect *, int, int, bool, bool)(this, effect, duration, amplifier, ambient, visible);
        }

        int getAmplifier()
        {
            return MLINK_FUNC(int, 0x02692DF0, MobEffectInstance *)(this);
        }

        int getDescriptionId()
        {
            return MLINK_FUNC(int, 0x02692EF0, MobEffectInstance *)(this);
        }

        int getDuration()
        {
            return MLINK_FUNC(int, 0x02691790, MobEffectInstance *)(this);
        }

        MobEffect *getEffect()
        {
            return MLINK_FUNC(MobEffect *, 0x02692DE8, MobEffectInstance *)(this);
        }

        bool isNoCounter()
        {
            return MLINK_FUNC(bool, 0x02691814, MobEffectInstance *)(this);
        }

        MobEffect *effect;
        int duration;
        int amplifier;
        bool field_0xC;
        bool field_0xD;
        bool ambient;
        bool visible;
        uint32_t field_0x10;
    };
    MC_CHECK_SIZE(MobEffectInstance, 0x14);
} // namespace mc
