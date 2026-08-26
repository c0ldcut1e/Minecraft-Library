#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/TamableAnimal.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Wolf : public TamableAnimal
    {
    public:
        Wolf(Level *level)
        {
            MLINK_FUNC(void, 0x02A81418, Wolf *, Level *)(this, level);
        }

        static Wolf *Create(Level *level)
        {
            return MLINK_FUNC(Wolf *, 0x023E66EC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02ACF790)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02A815F0, Wolf *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02A81AE0, Wolf *)(this);
        }
        void setAngry(bool angry)
        {
            MLINK_FUNC(void, 0x02A81C44, Wolf *, bool)(this, angry);
        }

        void setTarget(const mboost::shared_ptr<LivingEntity> &target)
        {
            MLINK_FUNC(void, 0x02A81D68, Wolf *, mboost::shared_ptr<LivingEntity>)(this, target);
        }

        void customServerAiStep()
        {
            MLINK_FUNC(void, 0x02A81EC8, Wolf *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02A81F68, Wolf *)(this);
        }

        bool isAngry()
        {
            return MLINK_FUNC(bool, 0x02A820F4, Wolf *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02A827DC, Wolf *)(this);
        }

        bool isInterested()
        {
            return MLINK_FUNC(bool, 0x02A82C50, Wolf *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02A82CD0, Wolf *)(this);
        }

        float getBodyRollAngle(float partialTick, float offset)
        {
            return MLINK_FUNC(float, 0x02A83578, Wolf *, float, float)(this, partialTick, offset);
        }

        float getHeadRollAngle(float partialTick)
        {
            return MLINK_FUNC(float, 0x02A836C4, Wolf *, float)(this, partialTick);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02A836F0, Wolf *)(this);
        }

        float getTailAngle()
        {
            return MLINK_FUNC(float, 0x02A85DB4, Wolf *)(this);
        }

        float interestedAngle;
        float interestedAngleO;
        bool isWet;
        bool isShaking;
        uint8_t field_0x792;
        uint8_t field_0x793;
        float shakeAnim;
        float shakeAnimO;
        uint32_t field_0x79C;
    };
    MC_CHECK_SIZE(Wolf, 0x7A0);
} // namespace mc
