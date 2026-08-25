#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "DamageSource.hpp"
#include "Entity.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "effect/MobEffect.hpp"
#include "effect/MobEffectInstance.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"
#include "utils/InteractionHand.hpp"
#include "world/Level.hpp"

namespace mc
{
    class LivingEntity : public Entity
    {
    public:
        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026027A4)();
        }

        void activateElytraSpeedBoost(double boost)
        {
            MLINK_FUNC(void, 0x02582848, LivingEntity *, double)(this, boost);
        }

        void addEffect(MobEffectInstance *effect)
        {
            MLINK_FUNC(void, 0x0257840C, LivingEntity *, MobEffectInstance *)(this, effect);
        }

        void completeUsingItem()
        {
            MLINK_FUNC(void, 0x0258CDC0, LivingEntity *)(this);
        }

        float getAbsorptionAmount()
        {
            return MLINK_FUNC(float, 0x0258BB30, LivingEntity *)(this);
        }

        mstd::vector<MobEffectInstance *> *getActiveEffects()
        {
            return MLINK_FUNC(mstd::vector<MobEffectInstance *> *, 0x025780BC, LivingEntity *)(this);
        }

        int getArmorValue()
        {
            return MLINK_FUNC(int, 0x0257E4F4, LivingEntity *)(this);
        }

        int getArrowCount()
        {
            return MLINK_FUNC(int, 0x0257F6F0, LivingEntity *)(this);
        }

        float getAttackAnim(float partialTicks)
        {
            return MLINK_FUNC(float, 0x0258B95C, LivingEntity *, float)(this, partialTicks);
        }

        MobEffectInstance *getEffect(MobEffect *effect)
        {
            return MLINK_FUNC(MobEffectInstance *, 0x0257822C, LivingEntity *, MobEffect *)(this, effect);
        }

        int getFallFlyingTicks()
        {
            return MLINK_FUNC(int, 0x0258DAE0, LivingEntity *)(this);
        }

        float getFrictionForTravel()
        {
            return MLINK_FUNC(float, 0x02582368, LivingEntity *)(this);
        }

        float getHealth()
        {
            return MLINK_FUNC(float, 0x025793F8, LivingEntity *)(this);
        }

        float getMaxHealth()
        {
            return MLINK_FUNC(float, 0x0257F6A8, LivingEntity *)(this);
        }

        bool hasEffect(MobEffect *effect)
        {
            return MLINK_FUNC(bool, 0x025781EC, LivingEntity *, MobEffect *)(this, effect);
        }

        void hurt(DamageSource *source, float dmg)
        {
            MLINK_FUNC(void, 0x025796CC, LivingEntity *, DamageSource *, float)(this, source, dmg);
        }

        bool isUsingItem()
        {
            return MLINK_FUNC(bool, 0x0258BB60, LivingEntity *)(this);
        }

        void knockback(const mboost::shared_ptr<Entity> &entity, float strength, double xPos, double zPos)
        {
            MLINK_FUNC(void, 0x0257D85C, LivingEntity *, const mboost::shared_ptr<Entity> &, float, double, double)(this, entity, strength, xPos,
                                                                                                                    zPos);
        }

        bool onLadder()
        {
            return MLINK_FUNC(bool, 0x0257DCB4, LivingEntity *)(this);
        }

        void removeAllEffects()
        {
            MLINK_FUNC(void, 0x02577F90, LivingEntity *)(this);
        }

        void removeEffect(MobEffect *effect)
        {
            MLINK_FUNC(void, 0x025787E0, LivingEntity *, MobEffect *)(this, effect);
        }

        void setHealth(float amount)
        {
            MLINK_FUNC(void, 0x02579530, LivingEntity *, float)(this, amount);
        }

        void spawnItemUseParticles(const mboost::not_null_ptr<ItemInstance> &item, int count)
        {
            MLINK_FUNC(void, 0x0258C738, LivingEntity *, const mboost::not_null_ptr<ItemInstance> &, int)(this, item, count);
        }

        void startUsingItem(InteractionHand::EInteractionHand hand)
        {
            MLINK_FUNC(void, 0x0258BF98, LivingEntity *, InteractionHand::EInteractionHand)(this, hand);
        }

        void stopUsingItem()
        {
            MLINK_FUNC(void, 0x0258D75C, LivingEntity *)(this);
        }

        void updatingUsingItem()
        {
            MLINK_FUNC(void, 0x0258BC88, LivingEntity *)(this);
        }

        int attributes;
        void *combatTracker;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        mc_double field_0x360;
        mc_double field_0x368;
        mc_double field_0x370;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
        uint32_t field_0x388;
        uint32_t field_0x38C;
        bool isArmMoving;
        uint32_t field_0x394;
        int armMotionTimer;
        int armMotionTimer2;
        uint32_t field_0x3A0;
        int hurtTime;
        int hurtDuration;
        uint32_t field_0x3AC;
        uint8_t field_0x3B0;
        uint8_t field_0x3B1;
        short deathTime;
        float armMotionTimer3;
        float armMotionTimer4;
        int noMovingArmTimer;
        uint32_t field_0x3C0;
        uint32_t field_0x3C4;
        uint32_t field_0x3C8;
        int invulnerableDuration;
        uint32_t field_0x3D0;
        uint32_t field_0x3D4;
        uint32_t field_0x3D8;
        float field_0x3DC;
        float yBodyRotation;
        float yBodyRotation2;
        float yHeadRotation;
        float yHeadRotation2;
        float flyingSpeed;
        uint32_t field_0x3F4;
        uint32_t field_0x3F8;
        uint32_t field_0x3FC;
        uint32_t field_0x400;
        uint32_t field_0x404;
        uint32_t field_0x408;
        uint32_t field_0x40C;
        uint32_t field_0x410;
        uint32_t field_0x414;
        uint32_t field_0x418;
        uint32_t field_0x41C;
        uint32_t field_0x420;
        uint32_t field_0x424;
        uint32_t field_0x428;
        uint32_t field_0x42C;
        uint32_t field_0x430;
        uint32_t field_0x434;
        uint32_t field_0x438;
        uint32_t field_0x43C;
        uint32_t field_0x440;
        uint32_t field_0x444;
        uint32_t field_0x448;
        uint32_t field_0x44C;
        mstd::basic_string<wchar_t> field_0x450;
        uint32_t field_0x470;
        uint32_t field_0x474;
        uint32_t field_0x478;
        uint32_t field_0x47C;
        uint32_t field_0x480;
        uint32_t field_0x484;
        uint32_t field_0x488;
        uint32_t field_0x48C;
        uint32_t field_0x490;
        uint32_t field_0x494;
        uint32_t field_0x498;
        uint32_t field_0x49C;
        float lastHurt;
        bool isJumping;
        uint8_t field_0x4A5;
        uint8_t field_0x4A6;
        uint8_t field_0x4A7;
        int insomniaComponent;
        float positionXxa;
        float positionYya;
        float positionZza;
        uint32_t field_0x4B8;
        uint32_t field_0x4BC;
        uint32_t field_0x4C0;
        uint32_t field_0x4C4;
        uint32_t field_0x4C8;
        uint32_t field_0x4CC;
        uint32_t field_0x4D0;
        uint32_t field_0x4D4;
        uint32_t field_0x4D8;
        uint32_t field_0x4DC;
        uint32_t field_0x4E0;
        uint32_t field_0x4E4;
        uint32_t field_0x4E8;
        uint32_t field_0x4EC;
        uint32_t field_0x4F0;
        int hurtByTimestamp;
        uint32_t field_0x4F8;
        uint32_t field_0x4FC;
        uint32_t field_0x500;
        float speed;
        uint32_t field_0x508;
        uint32_t field_0x50C;
        uint32_t field_0x510;
        uint32_t field_0x514;
        int usingItem;
        uint32_t field_0x51C;
        uint32_t useItemRemainingTicks;
        uint32_t elytraFallFlyingTicks;
        BlockPos position5;
        uint32_t field_0x534;
        uint32_t field_0x538;
        uint32_t field_0x53C;
        uint32_t field_0x540;
        uint32_t field_0x544;
        int positionX5;
        int positionX6;
        int positionY5;
        int positionY6;
        int positionZ5;
        int positionZ6;
        uint32_t field_0x560;
        uint32_t field_0x564;
        uint32_t field_0x568;
        uint32_t field_0x56C;
        uint32_t field_0x570;
        uint32_t field_0x574;
        uint32_t field_0x578;
        uint32_t field_0x57C;
        uint32_t field_0x580;
        uint32_t field_0x584;
        uint32_t field_0x588;
        uint32_t field_0x58C;
        uint32_t field_0x590;
        uint32_t field_0x594;
        uint32_t field_0x598;
        uint32_t field_0x59C;
        uint32_t field_0x5A0;
        uint32_t field_0x5A4;
        uint32_t field_0x5A8;
        uint32_t field_0x5AC;
        uint32_t field_0x5B0;
        uint32_t field_0x5B4;
        uint32_t field_0x5B8;
        uint32_t field_0x5BC;
        uint32_t field_0x5C0;
        uint32_t field_0x5C4;
        uint32_t field_0x5C8;
        uint32_t field_0x5CC;
        uint32_t field_0x5D0;
        uint32_t field_0x5D4;
        uint32_t field_0x5D8;
        uint32_t field_0x5DC;
        uint32_t field_0x5E0;
        uint32_t field_0x5E4;
        uint32_t field_0x5E8;
        uint32_t field_0x5EC;
    };
    MC_CHECK_SIZE(LivingEntity, 0x5F0);
} // namespace mc
