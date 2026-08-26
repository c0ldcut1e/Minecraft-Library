#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class Material;

    class MobCategory
    {
    public:
        MobCategory(int id, Material *material, bool friendly, bool persistent, uint64_t maxInstances, bool singleType)
        {
            MLINK_FUNC(void, 0x02610070, MobCategory *, int, Material *, bool, bool, uint64_t, bool)(this, id, material, friendly, persistent,
                                                                                                     maxInstances, singleType);
        }

        int getMaxInstancesPerLevelWithSpawnEgg()
        {
            return MLINK_FUNC(int, 0x02610254, MobCategory *)(this);
        }

        int getEnumBaseClass()
        {
            return MLINK_FUNC(int, 0x02652544, MobCategory *)(this);
        }

        int getMaxInstancesPerLevel()
        {
            return MLINK_FUNC(int, 0x02652550, MobCategory *)(this);
        }

        int getMaxInstancesPerLevelWithBreeding()
        {
            return MLINK_FUNC(int, 0x02652558, MobCategory *)(this);
        }

        bool isFriendly()
        {
            return MLINK_FUNC(bool, 0x02652560, MobCategory *)(this);
        }

        bool isSingleType()
        {
            return MLINK_FUNC(bool, 0x02652568, MobCategory *)(this);
        }

        bool isPersistent()
        {
            return MLINK_FUNC(bool, 0x02652570, MobCategory *)(this);
        }

        uint32_t field_0x0;
        int id;
        int maxInstancesPerLevel;
        int maxInstancesPerLevelWithBreeding;
        uint32_t field_0x10;
        bool friendly;
        bool persistent;
        bool singleType;
        uint8_t field_0x17;
        int maxInstancesPerLevelWithSpawnEgg;
        int field_0x1C;
    };
    MC_CHECK_SIZE(MobCategory, 0x20);
} // namespace mc
