#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "EntityTickCache.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "utils/AABB.hpp"
#include "utils/Common.hpp"
#include "utils/MCRandom.hpp"
#include "utils/Vec3.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class MultiPlayerLevel;

    enum MoverType
    {
        MoverType_SELF        = 0,
        MoverType_PLAYER      = 1,
        MoverType_PISTON      = 2,
        MoverType_SHULKER_BOX = 3,
        MoverType_SHULKER     = 4,
    };
    class VTable_Entity;

    class Entity
    {
    public:
        Entity() = default;

        Entity(Level *level, bool param_2)
        {
            MLINK_FUNC(void, 0x02329E64, Entity *, Level *, bool)(this, level, param_2);
        }

        static bool instanceof(const mboost::shared_ptr<Entity> &entity, uint64_t type)
        {
            return MLINK_FUNC(bool, 0x02706FF0, const mboost::shared_ptr<Entity> &, uint64_t)(entity, type);
        }

        void absMoveTo(double xPos, double yPos, double zPos, float yaw, float pitch)
        {
            MLINK_FUNC(void, 0x023344B0, Entity *, double, double, double, float, float)(this, xPos, yPos, zPos, yaw, pitch);
        }

        const Vec3 &calculateViewVector()
        {
            return MLINK_FUNC(const Vec3 &, 0x02334FB8, Entity *)(this);
        }

        int getAirSupply()
        {
            return MLINK_FUNC(int, 0x02336938, Entity *)(this);
        }

        void getControllingPassenger(mboost::shared_ptr<Entity> *out)
        {
            MLINK_FUNC(void, 0x023479BC, Entity *, mboost::shared_ptr<Entity> *)(this, out);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02347618, Entity *)(this);
        }

        uint32_t getLightColor()
        {
            return MLINK_FUNC(uint32_t, 0x02334318, Entity *)(this);
        }

        int getMaxAirSupply()
        {
            return MLINK_FUNC(int, 0x02329C04, Entity *)(this);
        }

        void getName(mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x0234174C, Entity *, mstd::basic_string<wchar_t> &)(this, str);
        }

        bool getSharedFlag(int index)
        {
            return MLINK_FUNC(bool, 0x023369B8, Entity *, int)(this, index);
        }

        int getSmallId()
        {
            return MLINK_FUNC(int, 0x02328C5C, Entity *)(this);
        }

        void getStringUUID(const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x0234651C, Entity *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        void interpolateTurn(float yaw, float pitch)
        {
            MLINK_FUNC(void, 0x0232BAAC, Entity *, float, float)(this, yaw, pitch);
        }

        bool isIdle()
        {
            return MLINK_FUNC(bool, 0x02340594, Entity *)(this);
        }

        bool isInLava()
        {
            return MLINK_FUNC(bool, 0x0232C2C8, Entity *)(this);
        }

        bool isInvulnerable()
        {
            return MLINK_FUNC(bool, 0x023418C8, Entity *)(this);
        }

        bool isInWall()
        {
            return MLINK_FUNC(bool, 0x0233AE64, Entity *)(this);
        }

        bool isNoGravity()
        {
            return MLINK_FUNC(bool, 0x02331424, Entity *)(this);
        }

        bool isSneaking()
        {
            return MLINK_FUNC(bool, 0x02340568, Entity *)(this);
        }

        bool isSprinting()
        {
            return MLINK_FUNC(bool, 0x023405C0, Entity *)(this);
        }

        bool isSwimming()
        {
            return MLINK_FUNC(bool, 0x023405EC, Entity *)(this);
        }

        void move(MoverType type, double xPos, double yPos, double zPos, bool unk)
        {
            MLINK_FUNC(void, 0x0232D4E0, Entity *, MoverType, double, double, double, bool)(this, type, xPos, yPos, zPos, unk);
        }

        void moveTo(double xPos, double yPos, double zPos, float yaw = 1.0F, float pitch = 1.0F)
        {
            MLINK_FUNC(void, 0x0233474C, Entity *, double, double, double, float, float)(this, xPos, yPos, zPos, yaw, pitch);
        }

        void moveTo(const Vec3 &pos, float yaw = 1.0F, float pitch = 1.0F)
        {
            MLINK_FUNC(void, 0x0233474C, Entity *, double, double, double, float, float)(this, pos.x, pos.y, pos.z, yaw, pitch);
        }

        void push(double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x02334EF4, Entity *, double, double, double)(this, xPos, yPos, zPos);
        }

        void push(const Vec3 &pos)
        {
            MLINK_FUNC(void, 0x02334EF4, Entity *, double, double, double)(this, pos.x, pos.y, pos.z);
        }

        void remove()
        {
            MLINK_FUNC(void, 0x0232B538, Entity *)(this);
        }

        void setCustomName(const mstd::basic_string<wchar_t> &str1, const mstd::basic_string<wchar_t> &str2, bool param_3)
        {
            MLINK_FUNC(void, 0x023467E4, Entity *, const mstd::basic_string<wchar_t> &, const mstd::basic_string<wchar_t> &, bool)(this, str1, str2,
                                                                                                                                   param_3);
        }

        void setCustomNameVisible(bool value)
        {
            MLINK_FUNC(void, 0x02347228, Entity *, bool)(this, value);
        }

        void setInvisible(bool invisible)
        {
            MLINK_FUNC(void, 0x02340C74, Entity *, bool)(this, invisible);
        }

        void setInvulnerable(bool value)
        {
            MLINK_FUNC(void, 0x023418DC, Entity *, bool)(this, value);
        }

        void setNoGravity(bool value)
        {
            MLINK_FUNC(void, 0x023314A4, Entity *, bool)(this, value);
        }

        void setPos(double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x023298E0, Entity *, double, double, double)(this, xPos, yPos, zPos);
        }

        void setPos(const Vec3 &pos)
        {
            MLINK_FUNC(void, 0x023298E0, Entity *, double, double, double)(this, pos.x, pos.y, pos.z);
        }

        void setRot(float yaw, float pitch)
        {
            MLINK_FUNC(void, 0x0232B6E4, Entity *, float, float)(this, yaw, pitch);
        }

        void setSharedFlag(int index, bool value)
        {
            MLINK_FUNC(void, 0x0232BB18, Entity *, int, bool)(this, index, value);
        }

        void setSilent(bool value)
        {
            MLINK_FUNC(void, 0x02331394, Entity *, bool)(this, value);
        }

        void setSize(float _width, float _height)
        {
            MLINK_FUNC(void, 0x0232B554, Entity *, float, float)(this, _width, _height);
        }

        void startRiding(const mboost::shared_ptr<Entity> &entity, bool unk)
        {
            MLINK_FUNC(void, 0x0233BEA0, Entity *, const mboost::shared_ptr<Entity> &, bool)(this, entity, unk);
        }

        void turn(float yaw, float pitch)
        {
            MLINK_FUNC(void, 0x0232B82C, Entity *, float, float)(this, yaw, pitch);
        }

        mboost::shared_ptr<Entity> thisShared;
        void *field_0x8;
        uint32_t entityId;
        uint32_t field_0x10;
        mstd::vector<void *> weakPtrEntity;
        EntityTickCache tickCache;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        Level *multiPlayerLevel2;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        AABB *aabb;
        uint32_t field_0x88;
        int positionX;
        int positionX2;
        int positionY;
        int positionY2;
        int positionZ;
        int positionZ2;
        uint32_t field_0xA4;
        int positionX3;
        int positionX4;
        int positionY3;
        int positionY4;
        int positionZ3;
        int positionZ4;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        Vec3 position2;
        float yRotation2;
        float xRotation2;
        uint32_t field_0xE8;
        mboost::shared_ptr<Entity> riding;
        uint32_t field_0xF4;
        MultiPlayerLevel *multiPlayerLevel;
        uint32_t field_0xFC;
        Vec3 position3;
        Vec3 pos;
        Vec3 velocity;
        float yRot;
        float xRot;
        float yRotation3;
        float xRotation3;
        AABB *bb;
        bool onGround;
        bool onWall;
        bool onGround2;
        bool onGround3;
        uint32_t field_0x160;
        int fire;
        float xRayGround;
        float xRayGround2;
        uint32_t field_0x170;
        uint32_t field_0x174;
        uint32_t field_0x178;
        uint32_t field_0x17C;
        uint32_t field_0x180;
        uint32_t field_0x184;
        uint32_t field_0x188;
        uint32_t field_0x18C;
        uint32_t field_0x190;
        uint8_t field_0x194;
        uint8_t field_0x195;
        uint8_t field_0x196;
        bool removed;
        float width;
        float height;
        float moveShaking;
        float moveShaking2;
        float moveShaking3;
        float fallDistance;
        short fallDistance2;
        short fallCount;
        uint32_t field_0x1B4;
        uint32_t field_0x1B8;
        uint32_t field_0x1BC;
        Vec3 oldPos;
        float step;
        bool noPhysics;
        uint8_t field_0x1DD;
        uint8_t field_0x1DE;
        uint8_t field_0x1DF;
        float field_0x1E0;
        MCRandom *random;
        int totalTickCount;
        bool isInWater;
        bool headInWater;
        uint8_t field_0x1EE;
        uint8_t field_0x1EF;
        int invulnerableTime;
        uint32_t field_0x1F4;
        int synchedEntityData;
        uint32_t field_0x1FC;
        uint32_t field_0x200;
        BlockPos enteredNetherPosition;
        uint32_t field_0x210;
        uint32_t field_0x214;
        uint32_t field_0x218;
        uint32_t field_0x21C;
        uint32_t field_0x220;
        uint32_t field_0x224;
        uint32_t field_0x228;
        uint32_t field_0x22C;
        uint32_t field_0x230;
        int portalCooldown;
        bool isPortalEntering;
        uint8_t field_0x239;
        uint8_t field_0x23A;
        uint8_t field_0x23B;
        uint32_t field_0x23C;
        int dimension;
        uint32_t field_0x244;
        uint32_t field_0x248;
        uint32_t field_0x24C;
        uint32_t field_0x250;
        uint32_t field_0x254;
        uint32_t field_0x258;
        uint32_t field_0x25C;
        uint32_t field_0x260;
        uint32_t field_0x264;
        uint32_t field_0x268;
        uint32_t field_0x26C;
        uint32_t field_0x270;
        uint32_t field_0x274;
        uint32_t field_0x278;
        uint32_t field_0x27C;
        uint32_t field_0x280;
        uint32_t field_0x284;
        uint32_t field_0x288;
        uint32_t field_0x28C;
        int NIDCount;
        uint32_t field_0x294;
        uint32_t field_0x298;
        uint32_t field_0x29C;
        uint32_t field_0x2A0;
        uint32_t field_0x2A4;
        uint32_t field_0x2A8;
        bool glowing;
        uint8_t field_0x2AD;
        uint8_t field_0x2AE;
        uint8_t field_0x2AF;
        int tags;
        uint32_t field_0x2B4;
        uint32_t field_0x2B8;
        uint32_t field_0x2BC;
        uint32_t field_0x2C0;
        uint32_t field_0x2C4;
        uint32_t field_0x2C8;
        uint32_t field_0x2CC;
        uint32_t field_0x2D0;
        uint32_t field_0x2D4;
        uint32_t field_0x2D8;
        uint32_t field_0x2DC;
        uint32_t field_0x2E0;
        int localPlayerType;
        uint32_t field_0x2E8;
        uint32_t field_0x2EC;
        uint32_t field_0x2F0;
        uint32_t field_0x2F4;
        uint32_t field_0x2F8;
        uint32_t field_0x2FC;
        uint32_t field_0x300;
        uint32_t field_0x304;
        uint32_t field_0x308;
        uint32_t field_0x30C;
        uint32_t field_0x310;
        uint32_t field_0x314;
        uint32_t field_0x318;
        uint32_t field_0x31C;
        uint32_t field_0x320;
        uint32_t field_0x324;
        uint32_t field_0x328;
        uint32_t field_0x32C;
        uint32_t field_0x330;
        uint32_t field_0x334;
        uint32_t skinAnim;
        uint32_t field_0x33C;
        uint32_t field_0x340;
        int field_0x344;
        VTable_Entity *vtable;
        uint32_t field_0x34C;
    };
    MC_CHECK_SIZE(Entity, 0x350);

    class VTable_Entity : public VTable
    {
    public:
        MC_VFUNC(uint64_t, Entity, GetType);
        MC_VFUNC(void, Entity, destructor);
        MC_VFUNC(void, Entity, fjDerivedCtorCalls);
        MC_VFUNC(void, Entity, kill);
        MC_VFUNC(void, Entity, pureVirtual0);
        MC_VFUNC(void, Entity, resetPos);
        MC_VFUNC(void, Entity, remove);
        MC_VFUNC(void, Entity, setDropContainerContent);
        MC_VFUNC(void, Entity, setSize);
        MC_VFUNC(void, Entity, setPos);
        MC_VFUNC(void, Entity, tick);
        MC_VFUNC(void, Entity, baseTick);
        MC_VFUNC(void, Entity, processDimensionDelay);
        MC_VFUNC(void, Entity, getPortalWaitTime);
        MC_VFUNC(void, Entity, setSecondsOnFire);
        MC_VFUNC(void, Entity, clearFire);
        MC_VFUNC(void, Entity, outOfWorld);
        MC_VFUNC(void, Entity, move);
        MC_VFUNC(void, Entity, updateDeltaAfterMove);
        MC_VFUNC(void, Entity, setLocationFromBoundingbox);
        MC_VFUNC(void, Entity, getSwimSound);
        MC_VFUNC(void, Entity, getSwimSplashSound);
        MC_VFUNC(void, Entity, getHeavySplashSound);
        MC_VFUNC(void, Entity, checkInsideBlocks);
        MC_VFUNC(void, Entity, onInsideBlock);
        MC_VFUNC(void, Entity, playStepSound);
        MC_VFUNC(void, Entity, playUnderwaterSound);
        MC_VFUNC(void, Entity, playFlySound);
        MC_VFUNC(void, Entity, makeFlySound);
        MC_VFUNC(void, Entity, playSound);
        MC_VFUNC(void, Entity, isSilent);
        MC_VFUNC(void, Entity, setSilent);
        MC_VFUNC(void, Entity, isNoGravity);
        MC_VFUNC(void, Entity, setNoGravity);
        MC_VFUNC(void, Entity, isMoving);
        MC_VFUNC(void, Entity, setMoving);
        MC_VFUNC(void, Entity, makeStepSound);
        MC_VFUNC(void, Entity, checkFallDamage);
        MC_VFUNC(void, Entity, getCollideBox);
        MC_VFUNC(void, Entity, burn);
        MC_VFUNC(void, Entity, causeFallDamage);
        MC_VFUNC(void, Entity, isInWater);
        MC_VFUNC(void, Entity, headInWater);
        MC_VFUNC(void, Entity, isOverWater);
        MC_VFUNC(void, Entity, updateInWaterState);
        MC_VFUNC(void, Entity, doWaterSplashEffect);
        MC_VFUNC(void, Entity, updateSprintingState);
        MC_VFUNC(void, Entity, doSprintParticleEffect);
        MC_VFUNC(void, Entity, isUnderLiquid);
        MC_VFUNC(void, Entity, isInLiquid);
        MC_VFUNC(void, Entity, getLightColor);
        MC_VFUNC(void, Entity, getBrightness);
        MC_VFUNC(void, Entity, setLevel);
        MC_VFUNC(void, Entity, moveTo);
        MC_VFUNC(void, Entity, playerTouch);
        MC_VFUNC(void, Entity, push);
        MC_VFUNC(void, Entity, push2);
        MC_VFUNC(void, Entity, markHurt);
        MC_VFUNC(void, Entity, hurt);
        MC_VFUNC(void, Entity, getViewVector);
        MC_VFUNC(void, Entity, isPickable);
        MC_VFUNC(void, Entity, isPushable);
        MC_VFUNC(void, Entity, awardKillScore);
        MC_VFUNC(void, Entity, shouldRender);
        MC_VFUNC(void, Entity, shouldRender2);
        MC_VFUNC(void, Entity, shouldRenderAtSqrDistance);
        MC_VFUNC(void, Entity, save);
        MC_VFUNC(void, Entity, load);
        MC_VFUNC(void, Entity, shouldTick);
        MC_VFUNC(void, Entity, repositionEntityAfterLoad);
        MC_VFUNC(void, Entity, pureVirtual1);
        MC_VFUNC(void, Entity, pureVirtual2);
        MC_VFUNC(void, Entity, readAdditionContructionTag);
        MC_VFUNC(void, Entity, getAdditionContructionTag);
        MC_VFUNC(void, Entity, spawnAtLocation);
        MC_VFUNC(void, Entity, spawnAtLocation2);
        MC_VFUNC(void, Entity, spawnAtLocation3);
        MC_VFUNC(void, Entity, isAlive);
        MC_VFUNC(void, Entity, isInWall);
        MC_VFUNC(void, Entity, interact);
        MC_VFUNC(void, Entity, getCollideAgainstBox);
        MC_VFUNC(void, Entity, rideTick);
        MC_VFUNC(void, Entity, positionRider);
        MC_VFUNC(void, Entity, onPassengerTurned);
        MC_VFUNC(void, Entity, getRidingHeight);
        MC_VFUNC(void, Entity, getRideHeight);
        MC_VFUNC(void, Entity, showVehicleHealth);
        MC_VFUNC(void, Entity, startRiding);
        MC_VFUNC(void, Entity, startRiding2);
        MC_VFUNC(void, Entity, GetInteractTooltip);
        MC_VFUNC(void, Entity, GetHitTooltip);
        MC_VFUNC(void, Entity, HideUseTooltips);
        MC_VFUNC(void, Entity, canRide);
        MC_VFUNC(void, Entity, ejectPassengers);
        MC_VFUNC(void, Entity, stopRiding);
        MC_VFUNC(void, Entity, stopRidingBeforeTeleport);
        MC_VFUNC(void, Entity, addPassenger);
        MC_VFUNC(void, Entity, removePassenger);
        MC_VFUNC(void, Entity, canAddPassenger);
        MC_VFUNC(void, Entity, lerpTo);
        MC_VFUNC(float, Entity, getPickRadius);
        MC_VFUNC(void, Entity, getLookAngle);
        MC_VFUNC(void, Entity, getRotationVector);
        MC_VFUNC(void, Entity, getForward);
        MC_VFUNC(void, Entity, handleInsidePortal);
        MC_VFUNC(void, Entity, getDimensionChangingDelay);
        MC_VFUNC(void, Entity, lerpMotion);
        MC_VFUNC(void, Entity, handleEntityEvent);
        MC_VFUNC(void, Entity, animateHurt);
        MC_VFUNC(void, Entity, getHandSlots);
        MC_VFUNC(void, Entity, getArmorSlots);
        MC_VFUNC(void, Entity, getAllSlots);
        MC_VFUNC(void, Entity, setItemSlot);
        MC_VFUNC(void, Entity, isOnFire);
        MC_VFUNC(void, Entity, isPassenger);
        MC_VFUNC(void, Entity, isVehicle);
        MC_VFUNC(bool, Entity, isSneaking);
        MC_VFUNC(void, Entity, setSneaking);
        MC_VFUNC(void, Entity, isIdle);
        MC_VFUNC(void, Entity, setIsIdle);
        MC_VFUNC(void, Entity, isSprinting);
        MC_VFUNC(void, Entity, setSprinting);
        MC_VFUNC(void, Entity, isSwimming);
        MC_VFUNC(void, Entity, isSwimmer);
        MC_VFUNC(void, Entity, startSwimming);
        MC_VFUNC(void, Entity, stopSwimming);
        MC_VFUNC(void, Entity, setSwimmer);
        MC_VFUNC(void, Entity, setDamageNearbyMobs);
        MC_VFUNC(void, Entity, getDamageNearbyMobs);
        MC_VFUNC(void, Entity, isGlowing);
        MC_VFUNC(void, Entity, setGlowing);
        MC_VFUNC(void, Entity, isInvisible);
        MC_VFUNC(void, Entity, isInvisibleTo);
        MC_VFUNC(void, Entity, getTeam);
        MC_VFUNC(void, Entity, isAlliedTo);
        MC_VFUNC(void, Entity, isAlliedTo2);
        MC_VFUNC(void, Entity, setInvisible);
        MC_VFUNC(void, Entity, ShouldRenderShadow);
        MC_VFUNC(void, Entity, canFly);
        MC_VFUNC(void, Entity, getAttachPos);
        MC_VFUNC(void, Entity, getMaxAirSupply);
        MC_VFUNC(void, Entity, setAirSupply);
        MC_VFUNC(void, Entity, thunderHit);
        MC_VFUNC(void, Entity, onAboveBubbleCol);
        MC_VFUNC(void, Entity, killed);
        MC_VFUNC(void, Entity, checkInBlock);
        MC_VFUNC(void, Entity, spawnEatParticles);
        MC_VFUNC(void, Entity, makeStuckInWeb);
        MC_VFUNC(void, Entity, getName);
        MC_VFUNC(void, Entity, isInvulnerableTo);
        MC_VFUNC(void, Entity, isInvulnerable);
        MC_VFUNC(void, Entity, setInvulnerable);
        MC_VFUNC(void, Entity, getSubEntities);
        MC_VFUNC(void, Entity, is);
        MC_VFUNC(void, Entity, getYHeadRot);
        MC_VFUNC(void, Entity, setYHeadRot);
        MC_VFUNC(void, Entity, setYBodyRot);
        MC_VFUNC(void, Entity, isAttackable);
        MC_VFUNC(void, Entity, skipAttackInteraction);
        MC_VFUNC(void, Entity, copyPosition);
        MC_VFUNC(void, Entity, changeDimension);
        MC_VFUNC(void, Entity, canChangeDimensions);
        MC_VFUNC(void, Entity, getBlockExplosionResistance);
        MC_VFUNC(void, Entity, shouldBlockExplode);
        MC_VFUNC(void, Entity, getMaxFallDistance);
        MC_VFUNC(void, Entity, getPortalEntranceBlock);
        MC_VFUNC(void, Entity, getPortalEntranceOffset);
        MC_VFUNC(void, Entity, getPortalEntranceForwards);
        MC_VFUNC(void, Entity, isIgnoringBlockTriggers);
        MC_VFUNC(void, Entity, displayFireAnimation);
        MC_VFUNC(void, Entity, setUUID);
        MC_VFUNC(void, Entity, getUUID);
        MC_VFUNC(void, Entity, getStringUUID);
        MC_VFUNC(void, Entity, isPushedByWater);
        MC_VFUNC(void, Entity, getViewScale);
        MC_VFUNC(void, Entity, setViewScale);
        MC_VFUNC(void, Entity, getDisplayName);
        MC_VFUNC(void, Entity, getNetworkName);
        MC_VFUNC(void, Entity, setCustomName);
        MC_VFUNC(void, Entity, getCustomName);
        MC_VFUNC(void, Entity, hasCustomName);
        MC_VFUNC(void, Entity, setCustomNameVisible);
        MC_VFUNC(void, Entity, isCustomNameVisible);
        MC_VFUNC(void, Entity, teleportTo);
        MC_VFUNC(void, Entity, shouldShowName);
        MC_VFUNC(void, Entity, onSyncedDataUpdated);
        MC_VFUNC(void, Entity, getDirection);
        MC_VFUNC(void, Entity, getMotionDirection);
        MC_VFUNC(void, Entity, broadcastToPlayer);
        MC_VFUNC(void, Entity, getBoundingBoxForCulling);
        MC_VFUNC(void, Entity, setBoundingBox);
        MC_VFUNC(void, Entity, getEyeHeight);
        MC_VFUNC(void, Entity, setSlot);
        MC_VFUNC(void, Entity, sendMessage);
        MC_VFUNC(void, Entity, hasPermission);
        MC_VFUNC(void, Entity, getCommandSenderBlockPosition);
        MC_VFUNC(void, Entity, getCommandSenderWorldPosition);
        MC_VFUNC(void, Entity, getCommandSenderWorld);
        MC_VFUNC(void, Entity, getCommandSenderEntity);
        MC_VFUNC(void, Entity, isSendMessageEnabled);
        MC_VFUNC(void, Entity, setCommandStats);
        MC_VFUNC(void, Entity, getServer);
        MC_VFUNC(void, Entity, interactAt);
        MC_VFUNC(void, Entity, ignoreExplosion);
        MC_VFUNC(void, Entity, startSeenByPlayer);
        MC_VFUNC(void, Entity, stopSeenByPlayer);
        MC_VFUNC(void, Entity, rotate);
        MC_VFUNC(void, Entity, mirror);
        MC_VFUNC(void, Entity, onlyOpCanSetNbt);
        MC_VFUNC(void, Entity, checkAndResetTeleportedFlag);
        MC_VFUNC(void, Entity, getControllingPassenger);
        MC_VFUNC(void, Entity, getPassengers);
        MC_VFUNC(void, Entity, hasPassenger);
        MC_VFUNC(void, Entity, hasPassenger2);
        MC_VFUNC(void, Entity, fillIndirectPassengers);
        MC_VFUNC(void, Entity, getIndirectPassengers);
        MC_VFUNC(void, Entity, getIndirectPassengers2);
        MC_VFUNC(void, Entity, getRootVehicle);
        MC_VFUNC(void, Entity, isPassengerOfSameVehicle);
        MC_VFUNC(void, Entity, hasIndirectPassenger);
        MC_VFUNC(void, Entity, hasIndirectPassenger2);
        MC_VFUNC(void, Entity, isControlledByLocalInstance);
        MC_VFUNC(void, Entity, getVehicle);
        MC_VFUNC(void, Entity, getPistonPushReaction);
        MC_VFUNC(void, Entity, getSoundSource);
        MC_VFUNC(bool, Entity, isCreative);
        MC_VFUNC(void, Entity, isDespawnProtected);
        MC_VFUNC(void, Entity, setDespawnProtected);
        MC_VFUNC(void, Entity, couldWander);
        MC_VFUNC(void, Entity, canCreateParticles);
        MC_VFUNC(void, Entity, stopCurrentLerp);
        MC_VFUNC(void, Entity, PositionLocked);
        MC_VFUNC(void, Entity, SetPositionLocked);
        MC_VFUNC(void, Entity, TakeGlideCollisionDamage);
        MC_VFUNC(void, Entity, SetGlideCollisionDamage);
        MC_VFUNC(void, Entity, GetLiftForceModifier);
        MC_VFUNC(void, Entity, SetLiftForceModifier);
        MC_VFUNC(void, Entity, onLoadedFromSave);
        MC_VFUNC(void, Entity, isUsingItemFlag);
        MC_VFUNC(void, Entity, setUsingItemFlag);
        MC_VFUNC(void, Entity, DoAutoAttackOnTouch);
        MC_VFUNC(void, Entity, startSpinAttack);
        MC_VFUNC(void, Entity, stopSpinAttack);
        MC_VFUNC(void, Entity, tickLeash);
        MC_VFUNC(void, Entity, dropLeash);
        MC_VFUNC(void, Entity, canBeLeashed);
        MC_VFUNC(void, Entity, isLeashed);
        MC_VFUNC(void, Entity, getLeashHolder);
        MC_VFUNC(void, Entity, isLeashedToPlayer);
        MC_VFUNC(void, Entity, setLeashedTo);
        MC_VFUNC(void, Entity, restoreLeashFromSave);
    };
} // namespace mc
