#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "sound/SoundEvent.hpp"
#include "utils/HitResult.hpp"
#include "utils/Vec3.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class AbstractRotatedItemProjectile : public Entity
    {
    public:
        static void staticCtor()
        {
            MLINK_FUNC(void, 0x0205C9D4)();
        }

        AbstractRotatedItemProjectile() = default;

        AbstractRotatedItemProjectile(Level *level)
        {
            MLINK_FUNC(void, 0x0205CB30, AbstractRotatedItemProjectile *, Level *)(this, level);
        }

        AbstractRotatedItemProjectile(Level *level, double x, double y, double z)
        {
            MLINK_FUNC(void, 0x0205CCBC, AbstractRotatedItemProjectile *, Level *, double, double, double)(this, level, x, y, z);
        }

        AbstractRotatedItemProjectile(Level *level, mboost::shared_ptr<LivingEntity> owner)
        {
            MLINK_FUNC(void, 0x0205CEB4, AbstractRotatedItemProjectile *, Level *, mboost::shared_ptr<LivingEntity>)(this, level, owner);
        }

        ~AbstractRotatedItemProjectile()
        {
            MLINK_FUNC(void, 0x020B0D28, AbstractRotatedItemProjectile *, uint32_t)(this, 0);
        }

        void shoot(double x, double y, double z, float velocity, float inaccuracy)
        {
            MLINK_FUNC(void, 0x02005D44, AbstractRotatedItemProjectile *, double, double, double, float, float)(this, x, y, z, velocity, inaccuracy);
        }

        void shootFromRotation(mboost::shared_ptr<Entity> entity, float xRotation, float yRotation, float offset, float velocity, float inaccuracy)
        {
            MLINK_FUNC(void, 0x02005F44, AbstractRotatedItemProjectile *, mboost::shared_ptr<Entity>, float, float, float, float,
                       float)(this, entity, xRotation, yRotation, offset, velocity, inaccuracy);
        }

        void setCritArrow(bool critical)
        {
            MLINK_FUNC(void, 0x02006308, AbstractRotatedItemProjectile *, bool)(this, critical);
        }

        void setFlag(int flag, bool value)
        {
            MLINK_FUNC(void, 0x020061DC, AbstractRotatedItemProjectile *, int, bool)(this, flag, value);
        }

        void onHit(const HitResult *hitResult)
        {
            MLINK_FUNC(void, 0x020063F0, AbstractRotatedItemProjectile *, const HitResult *)(this, hitResult);
        }

        void _init()
        {
            MLINK_FUNC(void, 0x0205CA94, AbstractRotatedItemProjectile *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0205D1FC, AbstractRotatedItemProjectile *)(this);
        }

        const SoundEvent *getOnHitSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x0205D27C, AbstractRotatedItemProjectile *)(this);
        }

        void doPostHurtEffects(const mboost::shared_ptr<LivingEntity> &entity)
        {
            MLINK_FUNC(void, 0x0205D288, AbstractRotatedItemProjectile *, const mboost::shared_ptr<LivingEntity> &)(this, entity);
        }

        uint32_t findHitEntity(Vec3 *start, Vec3 *end)
        {
            return MLINK_FUNC(uint32_t, 0x0205D28C, AbstractRotatedItemProjectile *, Vec3 *, Vec3 *)(this, start, end);
        }

        void checkDespawn()
        {
            MLINK_FUNC(void, 0x0205D91C, AbstractRotatedItemProjectile *)(this);
        }

        uint32_t makeStepSound()
        {
            return MLINK_FUNC(uint32_t, 0x0205D940, AbstractRotatedItemProjectile *)(this);
        }

        double getWaterInertia()
        {
            return MLINK_FUNC(double, 0x0205D948, AbstractRotatedItemProjectile *)(this);
        }

        bool canChangeDimensions()
        {
            return MLINK_FUNC(bool, 0x0205D954, AbstractRotatedItemProjectile *)(this);
        }

        bool shouldRenderAtSqrDistance(double distance)
        {
            return MLINK_FUNC(bool, 0x0205D95C, AbstractRotatedItemProjectile *, double)(this, distance);
        }

        bool isNoPhysics()
        {
            return MLINK_FUNC(bool, 0x0205DA18, AbstractRotatedItemProjectile *)(this);
        }

        bool isCritArrow()
        {
            return MLINK_FUNC(bool, 0x0205DAC4, AbstractRotatedItemProjectile *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0205DB48, AbstractRotatedItemProjectile *)(this);
        }

        void lerpTo(double x, double y, double z, float yaw, float pitch, int steps, bool teleport)
        {
            MLINK_FUNC(void, 0x0205EEC4, AbstractRotatedItemProjectile *, double, double, double, float, float, int, bool)(this, x, y, z, yaw, pitch,
                                                                                                                           steps, teleport);
        }

        void lerpMotion(double x, double y, double z)
        {
            MLINK_FUNC(void, 0x0205EF4C, AbstractRotatedItemProjectile *, double, double, double)(this, x, y, z);
        }

        void move(MoverType type, double x, double y, double z, bool value)
        {
            MLINK_FUNC(void, 0x0205F084, AbstractRotatedItemProjectile *, MoverType, double, double, double, bool)(this, type, x, y, z, value);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x0205F224, AbstractRotatedItemProjectile *, CompoundTag *)(this, tag);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x0205F854, AbstractRotatedItemProjectile *, CompoundTag *)(this, tag);
        }

        void playerTouch(mboost::shared_ptr<Player> player)
        {
            MLINK_FUNC(void, 0x02060154, AbstractRotatedItemProjectile *, mboost::shared_ptr<Player>)(this, player);
        }

        bool isAttackable()
        {
            return MLINK_FUNC(bool, 0x02060690, AbstractRotatedItemProjectile *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02060698, AbstractRotatedItemProjectile *)(this);
        }

        void setNoPhysics(bool value)
        {
            MLINK_FUNC(void, 0x020606A4, AbstractRotatedItemProjectile *, bool)(this, value);
        }

        bool shouldTick()
        {
            return MLINK_FUNC(bool, 0x020B2390, AbstractRotatedItemProjectile *)(this);
        }

        uint32_t projectileField_0x350;
        uint32_t projectileField_0x354;
        uint32_t projectileField_0x358;
        uint32_t projectileVtable;
        int xTile;
        int yTile;
        int zTile;
        Block *inBlock;
        uint32_t inBlockData;
        int life;
        bool inGround;
        uint8_t field_0x379;
        uint8_t field_0x37A;
        uint8_t field_0x37B;
        int ticksInGround;
        int ticksInAir;
        bool noPhysics;
        uint8_t field_0x385;
        uint8_t field_0x386;
        uint8_t field_0x387;
        uint32_t pickup;
        uint32_t shakeTime;
        mboost::shared_ptr<LivingEntity> owner;
    };
    MC_CHECK_SIZE(AbstractRotatedItemProjectile, 0x398);
} // namespace mc
