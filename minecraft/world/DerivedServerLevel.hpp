#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "ServerLevel.hpp"
#include "internal/shared_ptr.hpp"
#include "world/border/WorldBorder.hpp"

namespace mc
{
    class MinecraftServer;

    class DerivedServerLevel : public ServerLevel
    {
    public:
        class DerivedLevelBorderChangeListener
        {
        public:
            DerivedLevelBorderChangeListener(DerivedServerLevel *level)
            {
                MLINK_FUNC(void, 0x030A8DD0, DerivedLevelBorderChangeListener *, DerivedServerLevel *)(this, level);
            }

            ~DerivedLevelBorderChangeListener()
            {
                MLINK_FUNC(void, 0x030DCBCC, DerivedLevelBorderChangeListener *, uint32_t)(this, 0);
            }

            void onBorderSizeSet(WorldBorder *border, double size)
            {
                MLINK_FUNC(void, 0x030A98B4, DerivedLevelBorderChangeListener *, WorldBorder *, double)(this, border, size);
            }

            void onBorderSizeLerping(WorldBorder *border, double oldSize, double newSize, uint64_t time)
            {
                MLINK_FUNC(void, 0x030A9914, DerivedLevelBorderChangeListener *, WorldBorder *, double, double, uint64_t)(this, border, oldSize,
                                                                                                                          newSize, time);
            }

            void onBorderCenterSet(WorldBorder *border, double x, double z)
            {
                MLINK_FUNC(void, 0x030A99B0, DerivedLevelBorderChangeListener *, WorldBorder *, double, double)(this, border, x, z);
            }

            void onBorderSetWarningTime(WorldBorder *border, int warningTime)
            {
                MLINK_FUNC(void, 0x030A9A2C, DerivedLevelBorderChangeListener *, WorldBorder *, int)(this, border, warningTime);
            }

            void onBorderSetWarningBlocks(WorldBorder *border, int warningBlocks)
            {
                MLINK_FUNC(void, 0x030A9A7C, DerivedLevelBorderChangeListener *, WorldBorder *, int)(this, border, warningBlocks);
            }

            void onBorderSetDamagePerBlock(WorldBorder *border, double damagePerBlock)
            {
                MLINK_FUNC(void, 0x030A9ACC, DerivedLevelBorderChangeListener *, WorldBorder *, double)(this, border, damagePerBlock);
            }

            void onBorderSetDamageSafeZOne(WorldBorder *border, double damageSafeZone)
            {
                MLINK_FUNC(void, 0x030A9B2C, DerivedLevelBorderChangeListener *, WorldBorder *, double)(this, border, damageSafeZone);
            }

            uint32_t vtable;
            DerivedServerLevel *level;
        };
        MC_CHECK_SIZE(DerivedLevelBorderChangeListener, 0x8);

        DerivedServerLevel(MinecraftServer *server, mboost::shared_ptr<LevelStorage> levelStorage, int dimensionId, ServerLevel *parentLevel)
        {
            MLINK_FUNC(void, 0x030A8E2C, DerivedServerLevel *, MinecraftServer *, mboost::shared_ptr<LevelStorage>, int,
                       ServerLevel *)(this, server, levelStorage, dimensionId, parentLevel);
        }

        ~DerivedServerLevel()
        {
            MLINK_FUNC(void, 0x030A8FE0, DerivedServerLevel *, uint32_t)(this, 0);
        }

        void saveLevelData()
        {
            MLINK_FUNC(void, 0x030A9084, DerivedServerLevel *)(this);
        }

        void postConstruct()
        {
            MLINK_FUNC(void, 0x030A9088, DerivedServerLevel *)(this);
        }

        void saveDimensionData()
        {
            MLINK_FUNC(void, 0x030A98A0, DerivedServerLevel *)(this);
        }

        int dimensionId;
        ServerLevel *parentLevel;
    };
    MC_CHECK_SIZE(DerivedServerLevel, 0x3C4);
} // namespace mc
