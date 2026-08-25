#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Abilities.hpp"
#include "FoodData.hpp"
#include "MinecraftLib.hpp"
#include "PlayerUID.hpp"
#include "block/BlockPos.hpp"
#include "entity/DamageSource.hpp"
#include "entity/LivingEntity.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemCooldowns.hpp"
#include "item/ItemInstance.hpp"
#include "utils/Common.hpp"
#include "utils/Vec3.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Abilities;
    class AbstractContainerMenu;
    class CameraController;
    class EquipmentSlot;
    class FoodData;
    class GameType;
    class HumanoidArm;
    class Inventory;
    class PlayerUID;

    class Player : public LivingEntity
    {
    public:
        Player() = default;

        Player(Level *level, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0270E1A8, Player *, Level *, const mstd::basic_string<wchar_t> &)(this, level, name);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0323FB68)();
        }

        void addItem(const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x027265C4, Player *, const mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0270EC80, Player *)(this);
        }

        void enableAllPlayerPrivileges(bool enabled)
        {
            MLINK_FUNC(void, 0x0272B838, Player *, bool)(this, enabled);
        }

        float getAbsorptionAmount()
        {
            return MLINK_FUNC(float, 0x02727718, Player *)(this);
        }

        float getArmorCoverPercentage()
        {
            return MLINK_FUNC(float, 0x0271B884, Player *)(this);
        }

        float getCurrentItemAttackStrengthDelay()
        {
            return MLINK_FUNC(float, 0x02728794, Player *)(this);
        }

        void getDisplayName(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x026D2EDC, Player *, mstd::basic_string<wchar_t> &)(this, result);
        }

        mstd::basic_string<wchar_t> getDisplayName()
        {
            mstd::basic_string<wchar_t> result;
            getDisplayName(result);
            return result;
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x027272C8, Player *)(this);
        }

        const HumanoidArm *getMainArm()
        {
            return MLINK_FUNC(const HumanoidArm *, 0x0272858C, mc::Player *)(this);
        }

        uint32_t getPlayerGamePrivilege(int privilege)
        {
            return MLINK_FUNC(uint32_t, 0x0270F65C, Player *, int)(this, privilege);
        }

        float getSpeed()
        {
            return MLINK_FUNC(float, 0x027229DC, Player *)(this);
        }

        float getUnderwaterLightLevel()
        {
            return MLINK_FUNC(float, 0x0272CEE0, Player *)(this);
        }

        bool hasInvisiblePrivilege()
        {
            return MLINK_FUNC(bool, 0x0271B6A0, mc::Player *)(this);
        }

        void hurt(DamageSource *src, float damage)
        {
            MLINK_FUNC(void, 0x0271AA90, Player *, DamageSource *, float)(this, src, damage);
        }

        bool isAllowedToAttackAnimals()
        {
            return MLINK_FUNC(bool, 0x0272B304, Player *)(this);
        }

        bool isAllowedToFly()
        {
            return MLINK_FUNC(bool, 0x0271AA10, Player *)(this);
        }

        bool isAllowedToMine()
        {
            return MLINK_FUNC(bool, 0x0272B284, Player *)(this);
        }

        bool isAllowedToUse(Block *block)
        {
            return MLINK_FUNC(bool, 0x0272A584, Player *, Block *)(this, block);
        }

        bool isModerator()
        {
            return MLINK_FUNC(bool, 0x0272B714, Player *)(this);
        }

        void jumpFromGround()
        {
            MLINK_FUNC(void, 0x02721E08, Player *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0270E7A0, Player *)(this);
        }

        void respawn()
        {
            MLINK_FUNC(void, 0x0271FE88, mc::Player *)(this);
        }

        void setAbsorptionAmount(float amount)
        {
            MLINK_FUNC(void, 0x027275DC, Player *, float)(this, amount);
        }

        void setEquipmentItem(const EquipmentSlot *slot, const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x02725F70, Player *, const EquipmentSlot *, const mboost::not_null_ptr<ItemInstance> &)(this, slot, item);
        }

        void setGameMode(const GameType *gameType)
        {
            MLINK_FUNC(void, 0x02725A0C, mc::Player *, const GameType *)(this, gameType);
        }

        void setPlayerGamePrivilege(int privilege, uint32_t value)
        {
            MLINK_FUNC(void, 0x0272A570, Player *, int, uint32_t)(this, privilege, value);
        }

        void setRespawnPosition(BlockPos *pos, bool isForced)
        {
            MLINK_FUNC(void, 0x02721D64, Player *, BlockPos *, bool)(this, pos, isForced);
        }

        void setUnderwaterLightLevel(float underwaterLightLevel)
        {
            MLINK_FUNC(void, 0x0272CEE8, Player *, float)(this, underwaterLightLevel);
        }

        void setXuid(PlayerUID xuid)
        {
            MLINK_FUNC(void, 0x0272A178, Player *, PlayerUID)(this, xuid);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02710080, Player *)(this);
        }

        // Taken from the PS3 Source Code Leak
        enum EPlayerGamePrivileges
        {
            ePlayerGamePrivilege_CannotMine          = 0, // Only checked if trust system is on
            ePlayerGamePrivilege_CannotBuild         = 1, // Only checked if trust system is on
            ePlayerGamePrivilege_CannotAttackMobs    = 2, // Only checked if trust system is on
            ePlayerGamePrivilege_CannotAttackPlayers = 3, // Only checked if trust system is on
            ePlayerGamePrivilege_Op                  = 4,
            ePlayerGamePrivilege_CanFly              = 5,
            ePlayerGamePrivilege_ClassicHunger       = 6,
            ePlayerGamePrivilege_Invisible           = 7,
            ePlayerGamePrivilege_Invulnerable        = 8,

            ePlayerGamePrivilege_CreativeMode =
                    9, // Used only to transfer across network, should never be used to determine if a player is in creative mode

            ePlayerGamePrivilege_CannotAttackAnimals    = 10, // Only checked if trust system is on
            ePlayerGamePrivilege_CanUseDoorsAndSwitches = 11, // Only checked if trust system is on
            ePlayerGamePrivilege_CanUseContainers       = 12, // Only checked if trust system is on

            ePlayerGamePrivilege_CanToggleInvisible     = 13,
            ePlayerGamePrivilege_CanToggleFly           = 14,
            ePlayerGamePrivilege_CanToggleClassicHunger = 15,
            ePlayerGamePrivilege_CanTeleport            = 16,

            // Currently enum is used to bitshift into an unsigned int
            ePlayerGamePrivilege_MAX  = 32,
            ePlayerGamePrivilege_All  = 33,
            ePlayerGamePrivilege_HOST = 34,
        };
        Inventory *inventory;
        uint32_t field_0x5F4;
        uint32_t field_0x5F8;
        uint32_t field_0x5FC;
        AbstractContainerMenu *otherContainer;
        AbstractContainerMenu *currentContainer;
        FoodData foodData;
        uint32_t field_0x61C;
        uint32_t field_0x620;
        uint32_t field_0x624;
        uint32_t field_0x628;
        mstd::basic_string<wchar_t> customSkinPath;
        mstd::basic_string<wchar_t> customCapePath;
        uint32_t field_0x66C;
        uint32_t field_0x670;
        uint32_t field_0x674;
        uint32_t field_0x678;
        uint32_t field_0x67C;
        uint32_t field_0x680;
        uint32_t field_0x684;
        Vec3 capePosition;
        mstd::basic_string<wchar_t> displayName;
        bool isSleeping;
        uint8_t field_0x6C1;
        uint8_t field_0x6C2;
        uint8_t field_0x6C3;
        uint32_t field_0x6C4;
        int sleepTimer;
        uint32_t field_0x6CC;
        uint32_t field_0x6D0;
        uint32_t field_0x6D4;
        uint32_t field_0x6D8;
        uint32_t field_0x6DC;
        BlockPos *spawnPosition;
        bool spawnForced;
        uint8_t field_0x6E5;
        uint8_t field_0x6E6;
        uint8_t field_0x6E7;
        uint32_t field_0x6E8;
        uint32_t field_0x6EC;
        long deathLootTableSeed;
        uint32_t field_0x6F4;
        uint32_t field_0x6F8;
        uint32_t field_0x6FC;
        uint32_t field_0x700;
        uint32_t field_0x704;
        uint32_t field_0x708;
        Abilities abilities;
        uint32_t xpLevel;
        uint32_t xpTotal;
        float xpProgress;
        mboost::shared_ptr<Entity> thrownItem;
        int xpSeed;
        float redirection;
        ItemCooldowns *cooldowns;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
        uint32_t field_0x758;
        uint32_t field_0x75C;
        uint32_t field_0x760;
        uint32_t field_0x764;
        uint32_t field_0x768;
        uint32_t field_0x76C;
        uint32_t field_0x770;
        uint32_t field_0x774;
        uint32_t field_0x778;
        CameraController *field_0x77C;
        uint32_t field_0x780;
        PlayerUID xuid;
        PlayerUID onlineXuid;
        uint32_t field_0x7AC;
        uint32_t field_0x7B0;
        uint32_t field_0x7B4;
        uint32_t field_0x7B8;
        uint32_t field_0x7BC;
        uint32_t field_0x7C0;
        uint32_t field_0x7C4;
        uint32_t field_0x7C8;
        uint32_t field_0x7CC;
        uint32_t field_0x7D0;
        uint32_t field_0x7D4;
        uint32_t field_0x7D8;
        uint32_t customSkinId;
        uint32_t customCapeId;
        uint32_t playerIndex;
        uint32_t field_0x7E8;
        uint32_t field_0x7EC;
        uint32_t field_0x7F0;
        uint32_t field_0x7F4;
        uint32_t field_0x7F8;
        int playerGamePrivileges;
        uint32_t field_0x800;
        uint32_t field_0x804;
        uint32_t field_0x808;
        Entity *entitySpectating;
        uint32_t field_0x810;
        bool positionLocked;
        bool takeGlideCollisionDamage;
        uint8_t field_0x816;
        uint8_t field_0x817;
        uint32_t field_0x818;
        uint32_t field_0x81C;
        uint32_t field_0x820;
        uint32_t field_0x824;
        uint32_t field_0x828;
        uint32_t field_0x82C;
        uint32_t field_0x830;
        uint32_t field_0x834;
        uint32_t field_0x838;
        uint32_t field_0x83C;
        float field_0x840;
        float field_0x844;
        float field_0x848;
        float field_0x84C;
        uint32_t field_0x850;
        float underwaterLightLevel;
        float underwaterVisionScale;
        uint32_t field_0x85C;
        uint32_t field_0x860;
        uint32_t field_0x864;
    };
    MC_CHECK_SIZE(Player, 0x868);

    class VTable_Player : public VTable
    {
    public:
        MC_VFUNC(void, Player, GetType);
        MC_VFUNC(void, Player, Dtor);
        MC_VFUNC(void, Player, fjDerivedCtorCalls);
        MC_VFUNC(void, Player, kill);
        MC_VFUNC(void, Player, defineSynchedData);
        MC_VFUNC(void, Player, resetPos);
        MC_VFUNC(void, Player, remove);
        MC_VFUNC(void, Player, setDropContainerContent);
        MC_VFUNC(void, Player, setSize);
        MC_VFUNC(void, Player, setPos);
        MC_VFUNC(void, Player, tick);
        MC_VFUNC(void, Player, baseTick);
        MC_VFUNC(void, Player, processDimensionDelay);
        MC_VFUNC(void, Player, getPortalWaitTime);
        MC_VFUNC(void, Player, setSecondsOnFire);
        MC_VFUNC(void, Player, clearFire);
        MC_VFUNC(void, Player, outOfWorld);
        MC_VFUNC(void, Player, move);
        MC_VFUNC(void, Player, updateDeltaAfterMove);
        MC_VFUNC(void, Player, setLocationFromBoundingbox);
        MC_VFUNC(void, Player, getSwimSound);
        MC_VFUNC(void, Player, getSwimSplashSound);
        MC_VFUNC(void, Player, getHeavySplashSound);
        MC_VFUNC(void, Player, checkInsideBlocks);
        MC_VFUNC(void, Player, onInsideBlock);
        MC_VFUNC(void, Player, playStepSound);
        MC_VFUNC(void, Player, playUnderwaterSound);
        MC_VFUNC(void, Player, playFlySound);
        MC_VFUNC(void, Player, makeFlySound);
        MC_VFUNC(void, Player, playSound);
        MC_VFUNC(void, Player, isSilent);
        MC_VFUNC(void, Player, setSilent);
        MC_VFUNC(void, Player, isNoGravity);
        MC_VFUNC(void, Player, setNoGravity);
        MC_VFUNC(void, Player, isMoving);
        MC_VFUNC(void, Player, setMoving);
        MC_VFUNC(void, Player, makeStepSound);
        MC_VFUNC(void, Player, checkFallDamage);
        MC_VFUNC(void, Player, getCollideBox);
        MC_VFUNC(void, Player, burn);
        MC_VFUNC(void, Player, causeFallDamage);
        MC_VFUNC(void, Player, isInWater);
        MC_VFUNC(void, Player, headInWater);
        MC_VFUNC(void, Player, isOverWater);
        MC_VFUNC(void, Player, updateInWaterState);
        MC_VFUNC(void, Player, doWaterSplashEffect);
        MC_VFUNC(void, Player, updateSprintingState);
        MC_VFUNC(void, Player, doSprintParticleEffect);
        MC_VFUNC(void, Player, isUnderLiquid);
        MC_VFUNC(void, Player, isInLiquid);
        MC_VFUNC(void, Player, getLightColor);
        MC_VFUNC(void, Player, getBrightness);
        MC_VFUNC(void, Player, setLevel);
        MC_VFUNC(void, Player, moveTo);
        MC_VFUNC(void, Player, playerTouch);
        MC_VFUNC(void, Player, push_1);
        MC_VFUNC(void, Player, push_2);
        MC_VFUNC(void, Player, markHurt);
        MC_VFUNC(void, Player, hurt);
        MC_VFUNC(void, Player, getViewVector);
        MC_VFUNC(void, Player, isPickable);
        MC_VFUNC(void, Player, isPushable);
        MC_VFUNC(void, Player, awardKillScore);
        MC_VFUNC(void, Player, shouldRender_1);
        MC_VFUNC(void, Player, shouldRender_2);
        MC_VFUNC(void, Player, shouldRenderAtSqrDistance);
        MC_VFUNC(void, Player, save);
        MC_VFUNC(void, Player, load);
        MC_VFUNC(void, Player, shouldTick);
        MC_VFUNC(void, Player, repositionEntityAfterLoad);
        MC_VFUNC(void, Player, readAdditionalSaveData);
        MC_VFUNC(void, Player, addAdditonalSaveData);
        MC_VFUNC(void, Player, readAdditionContructionTag);
        MC_VFUNC(void, Player, getAdditionContructionTag);
        MC_VFUNC(void, Player, spawnAtLocation_1);
        MC_VFUNC(void, Player, spawnAtLocation_2);
        MC_VFUNC(void, Player, spawnAtLocation_3);
        MC_VFUNC(void, Player, isAlive);
        MC_VFUNC(void, Player, isInWall);
        MC_VFUNC(void, Player, interact);
        MC_VFUNC(void, Player, getCollideAgainstBox);
        MC_VFUNC(void, Player, rideTick);
        MC_VFUNC(void, Player, positionRider);
        MC_VFUNC(void, Player, onPassengerTurned);
        MC_VFUNC(void, Player, getRidingHeight);
        MC_VFUNC(void, Player, getRideHeight);
        MC_VFUNC(void, Player, showVehicleHealth);
        MC_VFUNC(void, Player, startRiding_1);
        MC_VFUNC(void, Player, startRiding_2);
        MC_VFUNC(void, Player, GetInteractTooltip);
        MC_VFUNC(void, Player, GetHitTooltip);
        MC_VFUNC(void, Player, HideUseTooltips);
        MC_VFUNC(void, Player, canRide);
        MC_VFUNC(void, Player, ejectPassengers);
        MC_VFUNC(void, Player, stopRiding);
        MC_VFUNC(void, Player, stopRidingBeforeTeleport);
        MC_VFUNC(void, Player, addPassenger);
        MC_VFUNC(void, Player, removePassenger);
        MC_VFUNC(void, Player, canAddPassenger);
        MC_VFUNC(void, Player, lerpTo);
        MC_VFUNC(void, Player, getPickRadius);
        MC_VFUNC(void, Player, getLookAngle);
        MC_VFUNC(void, Player, getRotationVector);
        MC_VFUNC(void, Player, getForward);
        MC_VFUNC(void, Player, handleInsidePortal);
        MC_VFUNC(void, Player, getDimensionChangingDelay);
        MC_VFUNC(void, Player, lerpMotion);
        MC_VFUNC(void, Player, handleEntityEvent);
        MC_VFUNC(void, Player, animateHurt);
        MC_VFUNC(void, Player, getHandSlots);
        MC_VFUNC(void, Player, getArmorSlots);
        MC_VFUNC(void, Player, getAllSlots);
        MC_VFUNC(void, Player, setItemSlot);
        MC_VFUNC(void, Player, isOnFire);
        MC_VFUNC(void, Player, isPassenger);
        MC_VFUNC(void, Player, isVehicle);
        MC_VFUNC(void, Player, isSneaking);
        MC_VFUNC(void, Player, setSneaking);
        MC_VFUNC(void, Player, isIdle);
        MC_VFUNC(void, Player, setIsIdle);
        MC_VFUNC(void, Player, isSprinting);
        MC_VFUNC(void, Player, setSprinting);
        MC_VFUNC(void, Player, isSwimming);
        MC_VFUNC(void, Player, isSwimmer);
        MC_VFUNC(void, Player, startSwimming);
        MC_VFUNC(void, Player, stopSwimming);
        MC_VFUNC(void, Player, setSwimmer);
        MC_VFUNC(void, Player, setDamageNearbyMobs);
        MC_VFUNC(void, Player, getDamageNearbyMobs);
        MC_VFUNC(void, Player, isGlowing);
        MC_VFUNC(void, Player, setGlowing);
        MC_VFUNC(void, Player, isInvisible);
        MC_VFUNC(void, Player, isInvisibleTo);
        MC_VFUNC(void, Player, getTeam);
        MC_VFUNC(void, Player, isAlliedTo_1);
        MC_VFUNC(void, Player, isAlliedTo_2);
        MC_VFUNC(void, Player, setInvisible);
        MC_VFUNC(void, Player, ShouldRenderShadow);
        MC_VFUNC(void, Player, canFly);
        MC_VFUNC(void, Player, getAttachPos);
        MC_VFUNC(void, Player, getMaxAirSupply);
        MC_VFUNC(void, Player, setAirSupply);
        MC_VFUNC(void, Player, thunderHit);
        MC_VFUNC(void, Player, onAboveBubbleCol);
        MC_VFUNC(void, Player, killed);
        MC_VFUNC(void, Player, checkInBlock);
        MC_VFUNC(void, Player, spawnEatParticles);
        MC_VFUNC(void, Player, makeStuckInWeb);
        MC_VFUNC(void, Player, getName);
        MC_VFUNC(void, Player, isInvulnerableTo);
        MC_VFUNC(void, Player, isInvulnerable);
        MC_VFUNC(void, Player, setInvulnerable);
        MC_VFUNC(void, Player, getSubEntities);
        MC_VFUNC(void, Player, is);
        MC_VFUNC(void, Player, getYHeadRot);
        MC_VFUNC(void, Player, setYHeadRot);
        MC_VFUNC(void, Player, setYBodyRot);
        MC_VFUNC(void, Player, isAttackable);
        MC_VFUNC(void, Player, skipAttackInteraction);
        MC_VFUNC(void, Player, copyPosition);
        MC_VFUNC(void, Player, changeDimension);
        MC_VFUNC(void, Player, canChangeDimensions);
        MC_VFUNC(void, Player, getBlockExplosionResistance);
        MC_VFUNC(void, Player, shouldBlockExplode);
        MC_VFUNC(void, Player, getMaxFallDistance);
        MC_VFUNC(void, Player, getPortalEntranceBlock);
        MC_VFUNC(void, Player, getPortalEntranceOffset);
        MC_VFUNC(void, Player, getPortalEntranceForwards);
        MC_VFUNC(void, Player, isIgnoringBlockTriggers);
        MC_VFUNC(void, Player, displayFireAnimation);
        MC_VFUNC(void, Player, setUUID);
        MC_VFUNC(void, Player, getUUID);
        MC_VFUNC(void, Player, getStringUUID);
        MC_VFUNC(void, Player, isPushedByWater);
        MC_VFUNC(void, Player, getViewScale);
        MC_VFUNC(void, Player, setViewScale);
        MC_VFUNC(void, Player, getDisplayName);
        MC_VFUNC(void, Player, getNetworkName);
        MC_VFUNC(void, Player, setCustomName);
        MC_VFUNC(void, Player, getCustomName);
        MC_VFUNC(void, Player, hasCustomName);
        MC_VFUNC(void, Player, setCustomNameVisible);
        MC_VFUNC(void, Player, isCustomNameVisible);
        MC_VFUNC(void, Player, teleportTo);
        MC_VFUNC(void, Player, shouldShowName);
        MC_VFUNC(void, Player, onSyncedDataUpdated);
        MC_VFUNC(void, Player, getDirection);
        MC_VFUNC(void, Player, getMotionDirection);
        MC_VFUNC(void, Player, broadcastToPlayer);
        MC_VFUNC(void, Player, getBoundingBoxForCulling);
        MC_VFUNC(void, Player, setBoundingBox);
        MC_VFUNC(void, Player, getEyeHeight);
        MC_VFUNC(void, Player, setSlot);
        MC_VFUNC(void, Player, sendMessage);
        MC_VFUNC(void, Player, hasPermission);
        MC_VFUNC(void, Player, getCommandSenderBlockPosition);
        MC_VFUNC(void, Player, getCommandSenderWorldPosition);
        MC_VFUNC(void, Player, getCommandSenderWorld);
        MC_VFUNC(void, Player, getCommandSenderEntity);
        MC_VFUNC(void, Player, isSendMessageEnabled);
        MC_VFUNC(void, Player, setCommandStats);
        MC_VFUNC(void, Player, getServer);
        MC_VFUNC(void, Player, interactAt);
        MC_VFUNC(void, Player, ignoreExplosion);
        MC_VFUNC(void, Player, startSeenByPlayer);
        MC_VFUNC(void, Player, stopSeenByPlayer);
        MC_VFUNC(void, Player, rotate);
        MC_VFUNC(void, Player, mirror);
        MC_VFUNC(void, Player, onlyOpCanSetNbt);
        MC_VFUNC(void, Player, checkAndResetTeleportedFlag);
        MC_VFUNC(void, Player, getControllingPassenger);
        MC_VFUNC(void, Player, getPassengers);
        MC_VFUNC(void, Player, hasPassenger_1);
        MC_VFUNC(void, Player, hasPassenger_2);
        MC_VFUNC(void, Player, __CPR215__fillIndirectPassengers);
        MC_VFUNC(void, Player, getIndirectPassengers_1);
        MC_VFUNC(void, Player, getIndirectPassengers_2);
        MC_VFUNC(void, Player, getRootVehicle);
        MC_VFUNC(void, Player, isPassengerOfSameVehicle);
        MC_VFUNC(void, Player, hasIndirectPassenger_1);
        MC_VFUNC(void, Player, hasIndirectPassenger_2);
        MC_VFUNC(void, Player, isControlledByLocalInstance);
        MC_VFUNC(void, Player, getVehicle);
        MC_VFUNC(void, Player, getPistonPushReaction);
        MC_VFUNC(void, Player, getSoundSource);
        MC_VFUNC(void, Player, isCreative);
        MC_VFUNC(void, Player, isDespawnProtected);
        MC_VFUNC(void, Player, setDespawnProtected);
        MC_VFUNC(void, Player, couldWander);
        MC_VFUNC(void, Player, canCreateParticles);
        MC_VFUNC(void, Player, stopCurrentLerp);
        MC_VFUNC(void, Player, PositionLocked);
        MC_VFUNC(void, Player, SetPositionLocked);
        MC_VFUNC(void, Player, TakeGlideCollisionDamage);
        MC_VFUNC(void, Player, SetGlideCollisionDamage);
        MC_VFUNC(void, Player, GetLiftForceModifier);
        MC_VFUNC(void, Player, SetLiftForceModifier);
        MC_VFUNC(void, Player, onLoadedFromSave);
        MC_VFUNC(void, Player, isUsingItemFlag);
        MC_VFUNC(void, Player, setUsingItemFlag);
        MC_VFUNC(void, Player, DoAutoAttackOnTouch);
        MC_VFUNC(void, Player, startSpinAttack);
        MC_VFUNC(void, Player, stopSpinAttack);
        MC_VFUNC(void, Player, tickLeash);
        MC_VFUNC(void, Player, dropLeash);
        MC_VFUNC(void, Player, canBeLeashed);
        MC_VFUNC(void, Player, isLeashed);
        MC_VFUNC(void, Player, getLeashHolder);
        MC_VFUNC(void, Player, isLeashedToPlayer);
        MC_VFUNC(void, Player, setLeashedTo);
        MC_VFUNC(void, Player, restoreLeashFromSave);
        MC_VFUNC(void, Player, registerAttributes);
        MC_VFUNC(void, Player, isWaterMob);
        MC_VFUNC(void, Player, breathesWater);
        MC_VFUNC(void, Player, breathesAir);
        MC_VFUNC(void, Player, breathesLava);
        MC_VFUNC(void, Player, breathesSolids);
        MC_VFUNC(void, Player, GetSuffocateTime);
        MC_VFUNC(void, Player, GetInhaleTime);
        MC_VFUNC(void, Player, generatesBubbles);
        MC_VFUNC(void, Player, onChangedBlock);
        MC_VFUNC(void, Player, isBaby);
        MC_VFUNC(void, Player, tickDeath);
        MC_VFUNC(void, Player, shouldDropExperience);
        MC_VFUNC(void, Player, decreaseAirSupply);
        MC_VFUNC(void, Player, getExperienceReward);
        MC_VFUNC(void, Player, isAlwaysExperienceDropper);
        MC_VFUNC(void, Player, getRandom);
        MC_VFUNC(void, Player, getLastHurtByMob);
        MC_VFUNC(void, Player, getLastHurtByMobTimestamp);
        MC_VFUNC(void, Player, setLastHurtByMob);
        MC_VFUNC(void, Player, getLastHurtMob);
        MC_VFUNC(void, Player, getLastHurtMobTimestamp);
        MC_VFUNC(void, Player, setLastHurtMob);
        MC_VFUNC(void, Player, getNoActionTime);
        MC_VFUNC(void, Player, tickEffects);
        MC_VFUNC(void, Player, updateInvisibilityStatus);
        MC_VFUNC(void, Player, removeEffectParticles);
        MC_VFUNC(void, Player, removeAllEffects);
        MC_VFUNC(void, Player, getActiveEffects);
        MC_VFUNC(void, Player, hasEffect);
        MC_VFUNC(void, Player, getEffect);
        MC_VFUNC(void, Player, addEffect);
        MC_VFUNC(void, Player, addEffectNoUpdate);
        MC_VFUNC(void, Player, canBeAffected);
        MC_VFUNC(void, Player, isInvertedHealAndHarm);
        MC_VFUNC(void, Player, removeEffectNoUpdate);
        MC_VFUNC(void, Player, removeEffect);
        MC_VFUNC(void, Player, onEffectAdded);
        MC_VFUNC(void, Player, onEffectUpdated);
        MC_VFUNC(void, Player, onEffectRemoved);
        MC_VFUNC(void, Player, heal);
        MC_VFUNC(void, Player, getHealth);
        MC_VFUNC(void, Player, setHealth);
        MC_VFUNC(void, Player, getLastDamageSource);
        MC_VFUNC(void, Player, blockUsingShield);
        MC_VFUNC(void, Player, playHurtSound);
        MC_VFUNC(void, Player, checkTotemDeathProtection);
        MC_VFUNC(void, Player, isDamageSourceBlocked);
        MC_VFUNC(void, Player, breakItem);
        MC_VFUNC(void, Player, die);
        MC_VFUNC(void, Player, dropEquipment);
        MC_VFUNC(void, Player, knockback);
        MC_VFUNC(void, Player, getHurtSound);
        MC_VFUNC(void, Player, getDeathSound);
        MC_VFUNC(void, Player, getFallDamageSound);
        MC_VFUNC(void, Player, dropAllDeathLoot);
        MC_VFUNC(void, Player, dropDeathLoot);
        MC_VFUNC(void, Player, onLadder);
        MC_VFUNC(void, Player, isShootable);
        MC_VFUNC(void, Player, getArmorValue);
        MC_VFUNC(void, Player, hurtArmor);
        MC_VFUNC(void, Player, hurtCurrentlyUsedShield);
        MC_VFUNC(void, Player, getDamageAfterArmorAbsorb);
        MC_VFUNC(void, Player, getDamageAfterMagicAbsorb);
        MC_VFUNC(void, Player, actuallyHurt);
        MC_VFUNC(void, Player, getCombatTracker);
        MC_VFUNC(void, Player, getKillCredit);
        MC_VFUNC(void, Player, getMaxHealth);
        MC_VFUNC(void, Player, getArrowCount);
        MC_VFUNC(void, Player, setArrowCount);
        MC_VFUNC(void, Player, swing);
        MC_VFUNC(void, Player, updateSwingTime);
        MC_VFUNC(void, Player, getAttribute);
        MC_VFUNC(void, Player, getAttributes);
        MC_VFUNC(void, Player, getMobType);
        MC_VFUNC(void, Player, getMainHandItem);
        MC_VFUNC(void, Player, getOffhandItem);
        MC_VFUNC(void, Player, getItemInHand);
        MC_VFUNC(void, Player, setItemInHand);
        MC_VFUNC(void, Player, hasItemInSlot);
        MC_VFUNC(void, Player, getItemSlot);
        MC_VFUNC(void, Player, getItemInHandIcon);
        MC_VFUNC(void, Player, getSoundVolume);
        MC_VFUNC(void, Player, getVoicePitch);
        MC_VFUNC(void, Player, isImmobile);
        MC_VFUNC(void, Player, findStandUpPosition);
        MC_VFUNC(void, Player, getJumpPower);
        MC_VFUNC(void, Player, jumpFromGround);
        MC_VFUNC(void, Player, jumpInWater);
        MC_VFUNC(void, Player, goDownInWater);
        MC_VFUNC(void, Player, jumpInLava);
        MC_VFUNC(void, Player, getWaterSlowDown);
        MC_VFUNC(void, Player, travel);
        MC_VFUNC(void, Player, updateModelAnimation);
        MC_VFUNC(void, Player, getSpeed);
        MC_VFUNC(void, Player, setSpeed);
        MC_VFUNC(void, Player, doHurtTarget);
        MC_VFUNC(void, Player, isSleeping);
        MC_VFUNC(void, Player, tickHeadTurn);
        MC_VFUNC(void, Player, aiStep);
        MC_VFUNC(void, Player, serverAiStep);
        MC_VFUNC(void, Player, pushEntities);
        MC_VFUNC(void, Player, doPush);
        MC_VFUNC(void, Player, setJumping);
        MC_VFUNC(void, Player, take);
        MC_VFUNC(void, Player, canSee);
        MC_VFUNC(void, Player, getAttackAnim);
        MC_VFUNC(void, Player, getSweptVolume);
        MC_VFUNC(void, Player, isEffectiveAi);
        MC_VFUNC(void, Player, getAbsorptionAmount);
        MC_VFUNC(void, Player, setAbsorptionAmount);
        MC_VFUNC(void, Player, onEnterCombat);
        MC_VFUNC(void, Player, onLeaveCombat);
        MC_VFUNC(void, Player, updateEffectVisibility);
        MC_VFUNC(void, Player, getMainArm);
        MC_VFUNC(void, Player, isUsingItem);
        MC_VFUNC(void, Player, getUsedItemHand);
        MC_VFUNC(void, Player, updatingUsingItem);
        MC_VFUNC(void, Player, startUsingItem);
        MC_VFUNC(void, Player, spawnItemUseParticles);
        MC_VFUNC(void, Player, completeUsingItem);
        MC_VFUNC(void, Player, getTicksUsingItem);
        MC_VFUNC(void, Player, releaseUsingItem_1);
        MC_VFUNC(void, Player, releaseUsingItem_2);
        MC_VFUNC(void, Player, stopUsingItem);
        MC_VFUNC(void, Player, isBlocking);
        MC_VFUNC(void, Player, isFallFlying);
        MC_VFUNC(void, Player, getFallFlyingTicks);
        MC_VFUNC(void, Player, isAffectedByPotions);
        MC_VFUNC(void, Player, attackable);
        MC_VFUNC(void, Player, setRecordPlayingNearby);
        MC_VFUNC(void, Player, IsCreativeFlying);
        MC_VFUNC(void, Player, updateFrameTick);
        MC_VFUNC(void, Player, closeContainer);
        MC_VFUNC(void, Player, touch);
        MC_VFUNC(void, Player, getScore);
        MC_VFUNC(void, Player, setScore);
        MC_VFUNC(void, Player, increaseScore);
        MC_VFUNC(void, Player, drop);
        MC_VFUNC(void, Player, reallyDrop);
        MC_VFUNC(void, Player, GetThirdPersonView);
        MC_VFUNC(void, Player, SetThirdPersonView);
        MC_VFUNC(void, Player, CanChangeThirdPersonView);
        MC_VFUNC(void, Player, GetCameraController);
        MC_VFUNC(void, Player, SetCameraController);
        MC_VFUNC(void, Player, canHarmPlayer_1);
        MC_VFUNC(void, Player, canHarmPlayer_2);
        MC_VFUNC(void, Player, getArmorCoverPercentage);
        MC_VFUNC(void, Player, openTextEdit);
        MC_VFUNC(void, Player, openMinecartCommandBlock);
        MC_VFUNC(void, Player, openCommandBlock);
        MC_VFUNC(void, Player, openTrading);
        MC_VFUNC(void, Player, openContainer);
        MC_VFUNC(void, Player, openHorseInventory);
        MC_VFUNC(void, Player, startBlockInteraction);
        MC_VFUNC(void, Player, openItemInstanceGui);
        MC_VFUNC(void, Player, interactOn);
        MC_VFUNC(void, Player, attack);
        MC_VFUNC(void, Player, disableShield);
        MC_VFUNC(void, Player, crit);
        MC_VFUNC(void, Player, magicCrit);
        MC_VFUNC(void, Player, respawn);
        MC_VFUNC(void, Player, isLocalPlayer);
        MC_VFUNC(void, Player, getGameProfile);
        MC_VFUNC(void, Player, startSleepInBed);
        MC_VFUNC(void, Player, stopSleepInBed);
        MC_VFUNC(void, Player, displayClientMessage);
        MC_VFUNC(void, Player, getRespawnPosition);
        MC_VFUNC(void, Player, isRespawnForced);
        MC_VFUNC(void, Player, setRespawnPosition);
        MC_VFUNC(void, Player, hasAchievement);
        MC_VFUNC(void, Player, awardStat);
        MC_VFUNC(void, Player, resetStat);
        MC_VFUNC(void, Player, checkMovementStatistiscs);
        MC_VFUNC(void, Player, increaseXp);
        MC_VFUNC(void, Player, getEnchantmentSeed);
        MC_VFUNC(void, Player, onEnchantmentPerformed);
        MC_VFUNC(void, Player, giveExperienceLevels);
        MC_VFUNC(void, Player, mayBuild);
        MC_VFUNC(void, Player, mayUseItemAt);
        MC_VFUNC(void, Player, onUpdateAbilities);
        MC_VFUNC(void, Player, setGameMode);
        MC_VFUNC(void, Player, pure_virtual_called_1);
        MC_VFUNC(void, Player, GetScoreboard);
        MC_VFUNC(void, Player, onCrafted);
        MC_VFUNC(void, Player, getTexture);
        MC_VFUNC(void, Player, setCustomSkin);
        MC_VFUNC(void, Player, setCustomCape);
        MC_VFUNC(void, Player, handleCollectItem);
        MC_VFUNC(void, Player, SetCamera);
        MC_VFUNC(void, Player, SpectatePlayerNext);
        MC_VFUNC(void, Player, SpectatePlayerPrev);
        MC_VFUNC(void, Player, StopSpectatingPlayer);
        MC_VFUNC(void, Player, IsSpectatingOtherPlayer);
        MC_VFUNC(void, Player, pure_virtual_called_2);
        MC_VFUNC(void, Player, GetGameMode);
        MC_VFUNC(void, Player, AutoEquip);
        MC_VFUNC(void, Player, OnEquipArmor);
        MC_VFUNC(void, Player, OnTakeFromAnvil);
    };
} // namespace mc
