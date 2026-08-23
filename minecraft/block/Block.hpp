#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "BlockPos.hpp"
#include "MinecraftLib.hpp"
#include "client/resource/texture/TextureAtlasSprite.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "item/Item.hpp"
#include "utils/AABB.hpp"
#include "utils/Common.hpp"
#include "utils/Direction.hpp"
#include "utils/MCRandom.hpp"

namespace mc
{
    class VTable_Block;

    class Block
    {
    public:
        Block() = default;

        Block(void *material)
        {
            MLINK_FUNC(void, 0x020C9644, mc::Block *, void *)(this, material);
        }

        static Block *byId(int blockId)
        {
            return MLINK_FUNC(Block *, 0x02019F40, int)(blockId);
        }

        static Block *byItem(Item *item)
        {
            return MLINK_FUNC(Block *, 0x020E634C, struct Item *)(item);
        }

        static void registerBlock(int blockId, const ResourceLocation &resourceLocation, Block *block)
        {
            MLINK_FUNC(void, 0x020C99EC, int, const ResourceLocation &, Block *)(blockId, resourceLocation, block);
        }

        static void registerBlock(int blockId, const mstd::basic_string<wchar_t> &str, Block *block)
        {
            MLINK_FUNC(void, 0x020C9A90, int, const mstd::basic_string<wchar_t> &, Block *)(blockId, str, block);
        }

        uint32_t defaultBlockState()
        {
            return MLINK_FUNC(uint32_t, 0x020C9700, Block *)(this);
        }

        AABB *getOutlineAABB(uint32_t blockState, Level *level, const BlockPos &pos)
        {
            return MLINK_FUNC(AABB *, 0x020E7B9C, Block *, uint32_t, Level *, const BlockPos &)(this, blockState, level, pos);
        }

        bool isIndestructible()
        {
            return MLINK_FUNC(bool, 0x020E75AC, Block *)(this);
        }

        void setBaseItemTypeAndMaterial(int param_1, int param_2)
        {
            MLINK_FUNC(void, 0x020C9430, Block *, int, int)(this, param_1, param_2);
        }

        void setIconName(const mstd::basic_string<wchar_t> &iconName)
        {
            MLINK_FUNC(void, 0x020C9840, Block *, const mstd::basic_string<wchar_t> &)(this, iconName);
        }

        void setNameAndDescriptionId(int param_1, int param_2)
        {
            MLINK_FUNC(void, 0x020C9A84, Block *, int, int)(this, param_1, param_2);
        }

        void setSoundType(const void *soundType)
        {
            MLINK_FUNC(void, 0x020C9888, mc::Block *, const void *)(this, soundType);
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
        uint32_t lightEmission;
        uint32_t field_0x3C;
        float destroySpeed;
        uint32_t field_0x44;
        uint8_t field_0x48;
        bool ticking;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        uint32_t material;
        uint32_t baseItemType;
        uint32_t field_0x54;
        uint32_t field_0x58;
        const void *soundType;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t _defaultBlockState;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        TextureAtlasSprite *texture;
        uint32_t field_0x84;
        uint32_t field_0x88;
        VTable_Block *vtable;
    };
    MC_CHECK_SIZE(Block, 0x90);

    class VTable_Block : public VTable
    {
    public:
        MC_VFUNC(bool, Block, isTopSolidBlocking);
        MC_VFUNC(void, Block, canProvideSupport);
        MC_VFUNC(bool, Block, isValidSpawn);
        MC_VFUNC(uint32_t, Block, getLightEmission, const void *);
        MC_VFUNC(void, Block, ParticlesSurviveWithin);
        MC_VFUNC(void, Block, GetInteractTooltip);
        MC_VFUNC(void, Block, GetHitTooltip);
        MC_VFUNC(void, Block, getMapColor);
        MC_VFUNC(uint32_t, Block, getBlockState, int);
        MC_VFUNC(uint32_t, Block, convertBlockStateToLegacyData, uint32_t);
        MC_VFUNC(void, Block, setPropertyValueFromString);
        MC_VFUNC(void, Block, fillVirtualBlockStateProperties);
        MC_VFUNC(void, Block, rotate);
        MC_VFUNC(void, Block, mirror);
        MC_VFUNC(void, Block, Dtor);
        MC_VFUNC(void, Block, DerivedInit);
        MC_VFUNC(void, Block, sendBlockData);
        MC_VFUNC(void, Block, setsoundType, uint32_t);
        MC_VFUNC(void, Block, setLightBlock);
        MC_VFUNC(void, Block, setLightEmission);
        MC_VFUNC(void, Block, setexplodable, bool);
        MC_VFUNC(bool, Block, isSolidBlockingCube);
        MC_VFUNC(bool, Block, isSolidBlockingCubeAndNotSignalSource);
        MC_VFUNC(bool, Block, isViewBlocking, const void *);
        MC_VFUNC(bool, Block, isCubeShaped, const void *);
        MC_VFUNC(bool, Block, hasCustomBreakingProgress);
        MC_VFUNC(bool, Block, isPathfindable);
        MC_VFUNC(int, Block, getRenderShape, const void *);
        MC_VFUNC(void, Block, hasInHandRenderOffset);
        MC_VFUNC(void, Block, mayReplaceWithPlace);
        MC_VFUNC(bool, Block, isTransparent, const void *);
        MC_VFUNC(void, Block, setDestroyTime);
        MC_VFUNC(void, Block, setIndeible);
        MC_VFUNC(void, Block, getDestroySpeed);
        MC_VFUNC(void, Block, setTicking, bool);
        MC_VFUNC(bool, Block, disableMipmap);
        MC_VFUNC(void, Block, setSemiTransparent);
        MC_VFUNC(bool, Block, isTicking);
        MC_VFUNC(bool, Block, isSlabBlock);
        MC_VFUNC(bool, Block, isWaterBlocking);
        MC_VFUNC(bool, Block, canContainLiquid);
        MC_VFUNC(bool, Block, isStrippable);
        MC_VFUNC(void, Block, getStrippedBlock);
        MC_VFUNC(void, Block, liquidCanFlowIntoFromDirection);
        MC_VFUNC(void, Block, getShape);
        MC_VFUNC(void, Block, getLightColor);
        MC_VFUNC(bool, Block, shouldRenderFace, const void *, void *, const BlockPos &, const Direction *);
        MC_VFUNC(void, Block, getShapes);
        MC_VFUNC(bool, Block, isSolidFace);
        MC_VFUNC(void, Block, getBlockFaceShape);
        MC_VFUNC(void, Block, getOutlineAABB);
        MC_VFUNC(void, Block, addCollisionAABBs);
        MC_VFUNC(void, Block, addCollisionAABB);
        MC_VFUNC(void, Block, getClipAABB);
        MC_VFUNC(bool, Block, isSolidRender, const void *);
        MC_VFUNC(bool, Block, mayPick__5BlockFPC10BlockStateb);
        MC_VFUNC(bool, Block, mayPick__5BlockFv);
        MC_VFUNC(void, Block, randomTick);
        MC_VFUNC(void, Block, tick, Level *, const BlockPos &, const void *, MCRandom *);
        MC_VFUNC(void, Block, animateTick);
        MC_VFUNC(void, Block, destroy);
        MC_VFUNC(void, Block, neighborChanged);
        MC_VFUNC(void, Block, addLights);
        MC_VFUNC(void, Block, getTickDelay);
        MC_VFUNC(void, Block, onPlace, Level *, const BlockPos &, const void *);
        MC_VFUNC(void, Block, onRemove);
        MC_VFUNC(void, Block, getResourceCount);
        MC_VFUNC(void, Block, getResource);
        MC_VFUNC(void, Block, getDestroyProgress);
        MC_VFUNC(void, Block, spawnResources__5BlockFP5LevelRC8BlockPosPC10BlockStatei);
        MC_VFUNC(void, Block, spawnResources__5BlockFP5LevelRC8BlockPosPC10BlockStatefi);
        MC_VFUNC(void, Block, popExperience);
        MC_VFUNC(void, Block, getSpawnResourcesAuxValue);
        MC_VFUNC(void, Block, getExplosionResistance);
        MC_VFUNC(void, Block, clip__5BlockFPC10BlockStateP5LevelRC8BlockPos);
        MC_VFUNC(void, Block, clip__5BlockFRC8BlockPosP4Vec3T2PC4AABB);
        MC_VFUNC(void, Block, wasExploded);
        MC_VFUNC(uint32_t, Block, getRenderLayer);
        MC_VFUNC(void, Block, mayPlace__5BlockFP5LevelRC8BlockPosPC9Direction);
        MC_VFUNC(void, Block, mayPlace__5BlockFP5LevelRC8BlockPos);
        MC_VFUNC(void, Block, mayPlaceOn__5BlockFP5LevelRC8BlockPosPC10Block);
        MC_VFUNC(void, Block, TestUse);
        MC_VFUNC(void, Block, TestUse__5BlockFP5LevelRC8BlockPosPC10BlockSta);
        MC_VFUNC(void, Block, use);
        MC_VFUNC(void, Block, stepOn);
        MC_VFUNC(void, Block, getStateForPlacement);
        MC_VFUNC(void, Block, prepareRender, Level *, const BlockPos &);
        MC_VFUNC(void, Block, attack);
        MC_VFUNC(void, Block, handleEntityInside);
        MC_VFUNC(void, Block, getColor__5BlockCFv);
        MC_VFUNC(void, Block, getColor__5BlockFPC10BlockState);
        MC_VFUNC(void, Block, getColor__5BlockFP11LevelSourceRC8BlockPosi);
        MC_VFUNC(void, Block, getColor__5BlockFP11LevelSourceRC8BlockPos);
        MC_VFUNC(void, Block, getColor__5BlockFP11LevelSourceRC8BlockPosPC10);
        MC_VFUNC(void, Block, getSignal);
        MC_VFUNC(bool, Block, isSignalSource);
        MC_VFUNC(bool, Block, entityInside);
        MC_VFUNC(void, Block, getDirectSignal);
        MC_VFUNC(bool, Block, waterSpreadCausesSpawn);
        MC_VFUNC(void, Block, playerDestroy);
        MC_VFUNC(void, Block, isSilkTouchable);
        MC_VFUNC(void, Block, getSilkTouchItemInstance);
        MC_VFUNC(void, Block, canSurvive);
        MC_VFUNC(void, Block, getResourceCountForLootBonus);
        MC_VFUNC(void, Block, setPlacedBy);
        MC_VFUNC(void, Block, setNameAndDescriptionId);
        MC_VFUNC(void, Block, isPossibleToRespawnInThis);
        MC_VFUNC(void, Block, getName);
        MC_VFUNC(void, Block, getDescriptionId);
        MC_VFUNC(void, Block, getUseDescriptionId);
        MC_VFUNC(void, Block, triggerEvent);
        MC_VFUNC(void, Block, isCollectStatistics);
        MC_VFUNC(void, Block, shouldBlockTick);
        MC_VFUNC(void, Block, setNotCollectStatistics);
        MC_VFUNC(void, Block, getPistonPushReaction);
        MC_VFUNC(void, Block, getShadeBrightness);
        MC_VFUNC(void, Block, fallOn);
        MC_VFUNC(void, Block, updateEntityAfterFallOn);
        MC_VFUNC(void, Block, getCloneItemInstance);
        MC_VFUNC(void, Block, playerWillDestroy);
        MC_VFUNC(void, Block, handleRain);
        MC_VFUNC(void, Block, canInstantlyTick);
        MC_VFUNC(void, Block, dropFromExplosion);
        MC_VFUNC(void, Block, isMatching);
        MC_VFUNC(void, Block, hasAnalogOutputSignal);
        MC_VFUNC(void, Block, getAnalogOutputSignal);
        MC_VFUNC(void, Block, setIconName);
        MC_VFUNC(void, Block, getIconName);
        MC_VFUNC(void, Block, registerIcons);
        MC_VFUNC(void, Block, getTileItemIconName);
        MC_VFUNC(void, Block, getIconTexture);
        MC_VFUNC(TextureAtlasSprite *, Block, getTexture__5BlockFP11LevelSourceRC8BlockPosPC9Direction, void *, const BlockPos &, const Direction *);
        MC_VFUNC(TextureAtlasSprite *, Block, getTexture__5BlockFPC9DirectionPC10BlockState, const Direction *, const uint32_t *);
        MC_VFUNC(TextureAtlasSprite *, Block, getTexture__5BlockFPC9Direction, const Direction *);
        MC_VFUNC(uint32_t, Block, getInventoryRenderState);
        MC_VFUNC(void, Block, createBlockStateDefinition);
        MC_VFUNC(void, Block, getBlockStateDefinition);
        MC_VFUNC(void, Block, getOffsetType);
        MC_VFUNC(void, Block, getOffset);
        MC_VFUNC(void, Block, getSoundType);
        MC_VFUNC(void, Block, toString);
        MC_VFUNC(void, Block, appendHoverText);
        MC_VFUNC(void, Block, isLiquidBlock);
    };
    MC_CHECK_SIZE(VTable_Block, 0x480);
} // namespace mc
