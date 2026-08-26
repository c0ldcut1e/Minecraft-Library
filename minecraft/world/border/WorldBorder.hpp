#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/VTable.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/AABB.hpp"

namespace mc
{
    class BorderChangeListener;
    class Entity;
    class Level;

    class WorldBorder
    {
    public:
        WorldBorder(Level *level)
        {
            MLINK_FUNC(void, 0x02A33B10, WorldBorder *, Level *)(this, level);
        }

        ~WorldBorder()
        {
            MLINK_FUNC(void, 0x02A33C3C, WorldBorder *, uint32_t)(this, 0);
        }

        int getStatus()
        {
            return MLINK_FUNC(int, 0x02A33CA4, WorldBorder *)(this);
        }

        void getListeners()
        {
            MLINK_FUNC(void, 0x02A33CE0, WorldBorder *)(this);
        }

        void setSize(double size)
        {
            MLINK_FUNC(void, 0x02A33CE4, WorldBorder *, double)(this, size);
        }

        double getSize()
        {
            return MLINK_FUNC(double, 0x02A33DB4, WorldBorder *)(this);
        }

        double getMinX()
        {
            return MLINK_FUNC(double, 0x02A33EE8, WorldBorder *)(this);
        }

        double getMaxX()
        {
            return MLINK_FUNC(double, 0x02A33F90, WorldBorder *)(this);
        }

        double getMinZ()
        {
            return MLINK_FUNC(double, 0x02A34034, WorldBorder *)(this);
        }

        double getMaxZ()
        {
            return MLINK_FUNC(double, 0x02A340DC, WorldBorder *)(this);
        }

        bool isWithinBounds(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02A34180, WorldBorder *, const BlockPos &)(this, pos);
        }

        bool isWithinBounds(AABB *bounds)
        {
            return MLINK_FUNC(bool, 0x02A342E4, WorldBorder *, AABB *)(this, bounds);
        }

        double getDistanceToBorder(double x, double z)
        {
            return MLINK_FUNC(double, 0x02A343A8, WorldBorder *, double, double)(this, x, z);
        }

        double getDistanceToBorder(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(double, 0x02A344A0, WorldBorder *, mboost::shared_ptr<Entity>)(this, entity);
        }

        double getCenterX()
        {
            return MLINK_FUNC(double, 0x02A34558, WorldBorder *)(this);
        }

        double getCenterZ()
        {
            return MLINK_FUNC(double, 0x02A34560, WorldBorder *)(this);
        }

        void setCenter(double x, double z)
        {
            MLINK_FUNC(void, 0x02A34568, WorldBorder *, double, double)(this, x, z);
        }

        uint64_t getLerpRemainingTime()
        {
            return MLINK_FUNC(uint64_t, 0x02A34630, WorldBorder *)(this);
        }

        double getLerpTarget()
        {
            return MLINK_FUNC(double, 0x02A346C0, WorldBorder *)(this);
        }

        void lerpSizeBetween(double fromSize, double toSize, uint64_t time)
        {
            MLINK_FUNC(void, 0x02A346C8, WorldBorder *, double, double, uint64_t)(this, fromSize, toSize, time);
        }

        void addListener(BorderChangeListener *listener)
        {
            MLINK_FUNC(void, 0x02A34D5C, WorldBorder *, BorderChangeListener *)(this, listener);
        }

        void setAbsoluteMaxSize(int size)
        {
            MLINK_FUNC(void, 0x02A34D90, WorldBorder *, int)(this, size);
        }

        int getAbsoluteMaxSize()
        {
            return MLINK_FUNC(int, 0x02A34D98, WorldBorder *)(this);
        }

        double getDamageSafeZone()
        {
            return MLINK_FUNC(double, 0x02A34DA0, WorldBorder *)(this);
        }

        void setDamageSafeZone(double safeZone)
        {
            MLINK_FUNC(void, 0x02A34DA8, WorldBorder *, double)(this, safeZone);
        }

        double getDamagePerBlock()
        {
            return MLINK_FUNC(double, 0x02A34E50, WorldBorder *)(this);
        }

        void setDamagePerBlock(double damagePerBlock)
        {
            MLINK_FUNC(void, 0x02A34E58, WorldBorder *, double)(this, damagePerBlock);
        }

        int getWarningTime()
        {
            return MLINK_FUNC(int, 0x02A34F00, WorldBorder *)(this);
        }

        void setWarningTime(int warningTime)
        {
            MLINK_FUNC(void, 0x02A34F08, WorldBorder *, int)(this, warningTime);
        }

        int getWarningBlocks()
        {
            return MLINK_FUNC(int, 0x02A34FA0, WorldBorder *)(this);
        }

        void setWarningBlocks(int warningBlocks)
        {
            MLINK_FUNC(void, 0x02A34FA8, WorldBorder *, int)(this, warningBlocks);
        }

        VTable *vtable;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        double centerX;
        double centerZ;
        double size;
        double lerpTarget;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        double damagePerBlock;
        double damageSafeZone;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        Level *level;
        uint32_t field_0x64;
    };
    MC_CHECK_SIZE(WorldBorder, 0x68);
} // namespace mc
