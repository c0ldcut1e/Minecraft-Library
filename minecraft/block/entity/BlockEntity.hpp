#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockPos.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class BlockEntity
    {
    public:
        BlockEntity()
        {
            MLINK_FUNC(void, 0x02144C4C, BlockEntity *)(this);
        }

        void clearCache()
        {
            MLINK_FUNC(void, 0x02146D4C, BlockEntity *)(this);
        }

        void clearRemoved()
        {
            MLINK_FUNC(void, 0x02146D38, BlockEntity *)(this);
        }

        double distanceToSqr(double x, double y, double z)
        {
            return MLINK_FUNC(double, 0x02146B40, BlockEntity *, double, double, double)(this, x, y, z);
        }

        Block *getBlock()
        {
            return MLINK_FUNC(Block *, 0x02146BEC, BlockEntity *)(this);
        }

        void getData()
        {
            MLINK_FUNC(void, 0x02146AB8, BlockEntity *)(this);
        }

        Level *getLevel()
        {
            return MLINK_FUNC(Level *, 0x02145EF0, BlockEntity *)(this);
        }

        CompoundTag *getUpdateTag()
        {
            return MLINK_FUNC(CompoundTag *, 0x02146CA8, BlockEntity *)(this);
        }

        double getViewDistance()
        {
            return MLINK_FUNC(double, 0x02146BC4, BlockEntity *)(this);
        }

        bool hasLevel()
        {
            return MLINK_FUNC(bool, 0x02145F00, BlockEntity *)(this);
        }

        bool isRemoved()
        {
            return MLINK_FUNC(bool, 0x02146D24, BlockEntity *)(this);
        }

        void load(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x02145F10, BlockEntity *, CompoundTag *)(this, tag);
        }

        bool onlyOpCanSetNbt()
        {
            return MLINK_FUNC(bool, 0x02146D7C, BlockEntity *)(this);
        }

        void save(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x02146420, BlockEntity *, CompoundTag *)(this, tag);
        }

        void saveMetadata(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x0214611C, BlockEntity *, CompoundTag *)(this, tag);
        }

        void setChanged()
        {
            MLINK_FUNC(void, 0x020BF7FC, BlockEntity *)(this);
        }

        void setData(int data)
        {
            MLINK_FUNC(void, 0x02146B38, BlockEntity *, int)(this, data);
        }

        void setLevel(Level *level)
        {
            MLINK_FUNC(void, 0x02145EF8, BlockEntity *, Level *)(this, level);
        }

        void setLevelForLoading(Level *level)
        {
            MLINK_FUNC(void, 0x02146AB4, BlockEntity *, Level *)(this, level);
        }

        void setPosition(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x02146D60, BlockEntity *, const BlockPos &)(this, pos);
        }

        void setRemoved()
        {
            MLINK_FUNC(void, 0x02146D2C, BlockEntity *)(this);
        }

        void setRenderRemoveStage(uint8_t stage)
        {
            MLINK_FUNC(void, 0x02145EBC, BlockEntity *, uint8_t)(this, stage);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02146430, BlockEntity *)(this);
        }

        bool triggerEvent(int eventId, int eventParam)
        {
            return MLINK_FUNC(bool, 0x02146D44, BlockEntity *, int, int)(this, eventId, eventParam);
        }

        void upgradeRenderRemoveStage()
        {
            MLINK_FUNC(void, 0x02145EC4, BlockEntity *)(this);
        }

        mboost::shared_ptr<BlockEntity> thisShared;
        bool removed;
        uint8_t renderRemoveStage;
        uint8_t field_0xA;
        uint8_t field_0xB;
        Level *level;
        BlockPos position;
        int cachedData;
        Block *cachedBlock;
        void *vtable;
    };
    MC_CHECK_SIZE(BlockEntity, 0x28);
} // namespace mc
