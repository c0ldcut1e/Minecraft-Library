#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "MobEffectInstance.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class MobEffect
    {
    public:
        enum EffectId
        {
            NOTHING,
            SPEED,
            SLOWNESS,
            HASTE,
            MINING_FATIGUE,
            STRENGTH,
            INSTANT_HEALTH,
            INSTANT_DAMAGE,
            JUMP_BOOST,
            NAUSEA,
            REGENERATION,
            RESISTANCE,
            FIRE_RESISTANCE,
            WATER_BREATHING,
            INVISIBILITY,
            BLINDNESS,
            NIGHT_VISION,
            HUNGER,
            WEAKNESS,
            POISON,
            WITHER,
            HEALTH_BOOST,
            ABSORPTION,
            SATURATION,
            GLOWING,
            LEVITATION,
            LUCK,
            BAD_LUCK,
        };

        static MobEffect *byId(int effectId)
        {
            return MLINK_FUNC(MobEffect *, 0x026907A4, int)(effectId);
        }

        static void formatDuration(mstd::basic_string<wchar_t> *out, MobEffectInstance *instance, float durationFactor)
        {
            MLINK_FUNC(void, 0x0269181C, mstd::basic_string<wchar_t> *, MobEffectInstance *, float)(out, instance, durationFactor);
        }

        static int GetEffectCount()
        {
            return MLINK_FUNC(int, 0x02690798)();
        }

        static int getId(MobEffect *effect)
        {
            return MLINK_FUNC(int, 0x026907C0, MobEffect *)(effect);
        }

        int getDescriptionId()
        {
            return MLINK_FUNC(int, 0x02691768, MobEffect *)(this);
        }

        int getIcon()
        {
            return MLINK_FUNC(int, 0x02691780, MobEffect *)(this);
        }

        int getId()
        {
            return getId(this);
        }

        bool hasIcon()
        {
            return MLINK_FUNC(bool, 0x02691770, MobEffect *)(this);
        }

        bool isHarmful()
        {
            return MLINK_FUNC(bool, 0x02691788, MobEffect *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
    };
    MC_CHECK_SIZE(MobEffect, 0x40);
} // namespace mc
