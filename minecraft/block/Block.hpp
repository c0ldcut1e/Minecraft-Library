#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "BlockPos.hpp"
#include "BlockState.hpp"
#include "Material.hpp"
#include "MaterialColor.hpp"
#include "MinecraftLib.hpp"
#include "SoundType.hpp"
#include "client/resource/texture/TextureAtlasSprite.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "item/Item.hpp"
#include "utils/AABB.hpp"
#include "utils/Common.hpp"
#include "utils/Direction.hpp"
#include "utils/MCRandom.hpp"
#include "world/level/LevelSource.hpp"

namespace mc
{
    class VTable_Block;

    class Block
    {
    public:
        Block() = default;

        Block(Material *material)
        {
            MLINK_FUNC(void, 0x020C9644, Block *, Material *)(this, material);
        }

        Block(Material *material, const MaterialColor *color)
        {
            MLINK_FUNC(void, 0x020C9890, Block *, Material *, const MaterialColor *)(this, material, color);
        }

        ~Block()
        {
            MLINK_FUNC(void, 0x020BD410, Block *, uint32_t)(this, 0);
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

        static void createNewThreadStorage()
        {
            MLINK_FUNC(void, 0x020C9318)();
        }

        static void releaseThreadStorage()
        {
            MLINK_FUNC(void, 0x020C93E8)();
        }

        static void staticCtor()
        {
            MLINK_FUNC(void, 0x020CA378)();
        }

        static int getId(const Block *block)
        {
            return MLINK_FUNC(int, 0x020E6100, const Block *)(block);
        }

        static Block *byString(const mstd::basic_string<wchar_t> &name)
        {
            return MLINK_FUNC(Block *, 0x020E63C8, const mstd::basic_string<wchar_t> &)(name);
        }

        static bool isMatching(const Block *first, const Block *second)
        {
            return MLINK_FUNC(bool, 0x020EB194, const Block *, const Block *)(first, second);
        }

        BlockState *defaultBlockState()
        {
            return MLINK_FUNC(BlockState *, 0x020C9700, Block *)(this);
        }

        AABB *getOutlineAABB(const BlockState *blockState, Level *level, const BlockPos &pos)
        {
            return MLINK_FUNC(AABB *, 0x020E7B9C, Block *, const BlockState *, Level *, const BlockPos &)(this, blockState, level, pos);
        }

        bool isTopSolidBlocking(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E6554, Block *, const BlockState *)(this, blockState);
        }

        uint32_t getLightEmission(const BlockState *blockState)
        {
            return MLINK_FUNC(uint32_t, 0x020B16CC, Block *, const BlockState *)(this, blockState);
        }

        void particlesSurviveWithin()
        {
            MLINK_FUNC(void, 0x020B16D4, Block *)(this);
        }

        bool shouldBlockTick(Level *level, const BlockPos &pos, const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020B16DC, Block *, Level *, const BlockPos &, const BlockState *)(this, level, pos, blockState);
        }

        bool isLiquidBlock()
        {
            return MLINK_FUNC(bool, 0x020B16E4, Block *)(this);
        }

        bool canProvideSupport(const BlockState *blockState, const Direction *direction, uint32_t supportType)
        {
            return MLINK_FUNC(bool, 0x020E65D8, Block *, const BlockState *, const Direction *, uint32_t)(this, blockState, direction, supportType);
        }

        bool isValidSpawn(const BlockState *blockState, mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(bool, 0x020E685C, Block *, const BlockState *, mboost::shared_ptr<Entity>)(this, blockState, entity);
        }

        BlockState *getBlockState(int data)
        {
            return MLINK_FUNC(BlockState *, 0x020E701C, Block *, int)(this, data);
        }

        int convertBlockStateToLegacyData(const BlockState *blockState)
        {
            return MLINK_FUNC(int, 0x020E702C, Block *, const BlockState *)(this, blockState);
        }

        void clearDerivedInit()
        {
            MLINK_FUNC(void, 0x020E7168, Block *)(this);
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

        void setDestroyTime(float time)
        {
            MLINK_FUNC(void, 0x020C943C, Block *, float)(this, time);
        }

        void calculateIsWaterBlocking()
        {
            MLINK_FUNC(void, 0x020C9460, Block *)(this);
        }

        void setThickness(float thickness)
        {
            MLINK_FUNC(void, 0x020C94F0, Block *, float)(this, thickness);
        }

        void setSoundType(const SoundType *soundType)
        {
            MLINK_FUNC(void, 0x020C9888, Block *, const SoundType *)(this, soundType);
        }

        void setIndestructible()
        {
            MLINK_FUNC(void, 0x020C9B58, Block *)(this);
        }

        void sendBlockData(uint8_t data)
        {
            MLINK_FUNC(void, 0x020C9B9C, Block *, uint8_t)(this, data);
        }

        void setLightBlock(int lightBlock)
        {
            MLINK_FUNC(void, 0x020C9BA4, Block *, int)(this, lightBlock);
        }

        void setTicking(bool value)
        {
            MLINK_FUNC(void, 0x020C9C34, Block *, bool)(this, value);
        }

        int getId() const
        {
            return getId(this);
        }

        void setLightEmission(float lightEmission)
        {
            MLINK_FUNC(void, 0x020E71C8, Block *, float)(this, lightEmission);
        }

        void setExplodeable(float resistance)
        {
            MLINK_FUNC(void, 0x020E71F4, Block *, float)(this, resistance);
        }

        bool hasInHandRenderOffset()
        {
            return MLINK_FUNC(bool, 0x020E758C, Block *)(this);
        }

        bool isSolidBlockingCube(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E73B4, Block *, const BlockState *)(this, blockState);
        }

        bool isSolidBlockingCubeAndNotSignalSource(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E7428, Block *, const BlockState *)(this, blockState);
        }

        bool isViewBlocking(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E74B8, Block *, const BlockState *)(this, blockState);
        }

        bool isCubeShaped(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E753C, Block *, const BlockState *)(this, blockState);
        }

        bool hasCustomBreakingProgress(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E7544, Block *, const BlockState *)(this, blockState);
        }

        bool isPathfindable(LevelSource *level, const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x020E754C, Block *, LevelSource *, const BlockPos &)(this, level, pos);
        }

        int getRenderShape(const BlockState *blockState)
        {
            return MLINK_FUNC(int, 0x020E7584, Block *, const BlockState *)(this, blockState);
        }

        bool mayReplaceWithPlace(LevelSource *level, const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x020E7594, Block *, LevelSource *, const BlockPos &)(this, level, pos);
        }

        bool isTransparent(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E75A4, Block *, const BlockState *)(this, blockState);
        }

        float getDestroySpeed(const BlockState *blockState, Level *level, const BlockPos &pos)
        {
            return MLINK_FUNC(float, 0x020E75C8, Block *, const BlockState *, Level *, const BlockPos &)(this, blockState, level, pos);
        }

        uint32_t getBaseItemType()
        {
            return MLINK_FUNC(uint32_t, 0x020E759C, Block *)(this);
        }

        bool isTicking()
        {
            return MLINK_FUNC(bool, 0x020E75E8, Block *)(this);
        }

        bool isSlabBlock()
        {
            return MLINK_FUNC(bool, 0x020E75F0, Block *)(this);
        }

        bool isWaterBlocking()
        {
            return MLINK_FUNC(bool, 0x020E75F8, Block *)(this);
        }

        bool canContainLiquid(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E7600, Block *, const BlockState *)(this, blockState);
        }

        bool isStrippable()
        {
            return MLINK_FUNC(bool, 0x020E7638, Block *)(this);
        }

        BlockState *getStrippedBlock(const BlockState *blockState)
        {
            return MLINK_FUNC(BlockState *, 0x020E7640, Block *, const BlockState *)(this, blockState);
        }

        bool liquidCanFlowIntoFromDirection(LevelSource *level, const BlockPos &pos, const Direction *direction)
        {
            return MLINK_FUNC(bool, 0x020E7648, Block *, LevelSource *, const BlockPos &, const Direction *)(this, level, pos, direction);
        }

        bool isSolidFace(LevelSource *level, const BlockPos &pos, const Direction *direction)
        {
            return MLINK_FUNC(bool, 0x020E7B40, Block *, LevelSource *, const BlockPos &, const Direction *)(this, level, pos, direction);
        }

        AABB *getClipAABB(const BlockState *blockState, LevelSource *level, const BlockPos &pos)
        {
            return MLINK_FUNC(AABB *, 0x020E8300, Block *, const BlockState *, LevelSource *, const BlockPos &)(this, blockState, level, pos);
        }

        bool isSolidRender(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x020E831C, Block *, const BlockState *)(this, blockState);
        }

        bool mayPick(const BlockState *blockState, bool value)
        {
            return MLINK_FUNC(bool, 0x020E8324, Block *, const BlockState *, bool)(this, blockState, value);
        }

        bool mayPick()
        {
            return MLINK_FUNC(bool, 0x020E8334, Block *)(this);
        }

        void randomTick(Level *level, const BlockPos &pos, const BlockState *blockState, MCRandom *random)
        {
            MLINK_FUNC(void, 0x020E833C, Block *, Level *, const BlockPos &, const BlockState *, MCRandom *)(this, level, pos, blockState, random);
        }

        void tick(Level *level, const BlockPos &pos, const BlockState *blockState, MCRandom *random)
        {
            MLINK_FUNC(void, 0x020E834C, Block *, Level *, const BlockPos &, const BlockState *, MCRandom *)(this, level, pos, blockState, random);
        }

        void animateTick(const BlockState *blockState, Level *level, const BlockPos &pos, MCRandom *random)
        {
            MLINK_FUNC(void, 0x020E8350, Block *, const BlockState *, Level *, const BlockPos &, MCRandom *)(this, blockState, level, pos, random);
        }

        void destroy(Level *level, const BlockPos &pos, const BlockState *blockState)
        {
            MLINK_FUNC(void, 0x020E8354, Block *, Level *, const BlockPos &, const BlockState *)(this, level, pos, blockState);
        }

        void neighborChanged(const BlockState *blockState, Level *level, const BlockPos &pos, Block *neighbor, const BlockPos &neighborPos)
        {
            MLINK_FUNC(void, 0x020E8358, Block *, const BlockState *, Level *, const BlockPos &, Block *,
                       const BlockPos &)(this, blockState, level, pos, neighbor, neighborPos);
        }

        void onPlace(Level *level, const BlockPos &pos, const BlockState *blockState)
        {
            MLINK_FUNC(void, 0x020E8368, Block *, Level *, const BlockPos &, const BlockState *)(this, level, pos, blockState);
        }

        void onRemove(Level *level, const BlockPos &pos, const BlockState *blockState)
        {
            MLINK_FUNC(void, 0x020E836C, Block *, Level *, const BlockPos &, const BlockState *)(this, level, pos, blockState);
        }

        int getResourceCount(MCRandom *random)
        {
            return MLINK_FUNC(int, 0x020E8370, Block *, MCRandom *)(this, random);
        }

        Item *getResource(const BlockState *blockState, MCRandom *random, int fortune)
        {
            return MLINK_FUNC(Item *, 0x020E8378, Block *, const BlockState *, MCRandom *, int)(this, blockState, random, fortune);
        }

        void spawnResources(Level *level, const BlockPos &pos, const BlockState *blockState, int fortune)
        {
            MLINK_FUNC(void, 0x020E8540, Block *, Level *, const BlockPos &, const BlockState *, int)(this, level, pos, blockState, fortune);
        }

        void spawnResources(Level *level, const BlockPos &pos, const BlockState *blockState, float chance, int fortune)
        {
            MLINK_FUNC(void, 0x020E8C44, Block *, Level *, const BlockPos &, const BlockState *, float, int)(this, level, pos, blockState, chance,
                                                                                                             fortune);
        }

        void popExperience(Level *level, const BlockPos &pos, int amount)
        {
            MLINK_FUNC(void, 0x020E90AC, Block *, Level *, const BlockPos &, int)(this, level, pos, amount);
        }

        int getSpawnResourcesAuxValue(const BlockState *blockState)
        {
            return MLINK_FUNC(int, 0x020E9634, Block *, const BlockState *)(this, blockState);
        }

        float getExplosionResistance(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(float, 0x020E963C, Block *, mboost::shared_ptr<Entity>)(this, entity);
        }

        int getTickDelay(Level *level)
        {
            return MLINK_FUNC(int, 0x020E8360, Block *, Level *)(this, level);
        }

        void addLights(Level *level, const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x020E835C, Block *, Level *, const BlockPos &)(this, level, pos);
        }

        int getRenderLayer()
        {
            return MLINK_FUNC(int, 0x020E9E14, Block *)(this);
        }

        bool isCollectStatistics()
        {
            return MLINK_FUNC(bool, 0x020EAC6C, Block *)(this);
        }

        void setNotCollectStatistics()
        {
            MLINK_FUNC(void, 0x020EAC74, Block *)(this);
        }

        bool canInstantlyTick()
        {
            return MLINK_FUNC(bool, 0x020EB174, Block *)(this);
        }

        bool isMatching(const Block *other)
        {
            return MLINK_FUNC(bool, 0x020EB184, Block *, const Block *)(this, other);
        }

        const SoundType *getSoundType()
        {
            return MLINK_FUNC(const SoundType *, 0x020EC924, Block *)(this);
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
        uint32_t blockId;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        const SoundType *soundType;
        uint32_t field_0x60;
        Material *material;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        BlockState *_defaultBlockState;
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
        MC_VFUNC(BlockState *, Block, getBlockState, int);
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
