#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/global/GlobalEntity.hpp"
#include "internal/vector.hpp"
#include "nbt/CompoundTag.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class LightningBolt : public GlobalEntity
    {
    public:
        LightningBolt(Level *level, double xPos, double yPos, double zPos, bool visualOnly)
        {
            MLINK_FUNC(LightningBolt *, 0x025D4CAC, LightningBolt *, Level *, double, double, double, bool)(this, level, xPos, yPos, zPos,
                                                                                                            visualOnly);
        }

        ~LightningBolt()
        {
            MLINK_FUNC(void, 0x02602058, LightningBolt *, uint32_t)(this, 0);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02603AA4)();
        }

        int getSoundSource()
        {
            return MLINK_FUNC(int, 0x025D525C, LightningBolt *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x025D5264, LightningBolt *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x025D5C90, LightningBolt *)(this);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025D5C94, LightningBolt *, CompoundTag *)(this, tag);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025D5C98, LightningBolt *, CompoundTag *)(this, tag);
        }

        bool shouldRender(double distance)
        {
            return MLINK_FUNC(bool, 0x025D5C9C, LightningBolt *, double)(this, distance);
        }

        int life;
        mstd::vector<int> hitEntityIds;
        uint32_t field_0x364;
        uint64_t seed;
        int flashes;
        bool visualOnly;
        uint8_t field_0x375;
        uint8_t field_0x376;
        uint8_t field_0x377;
    };
    MC_CHECK_SIZE(LightningBolt, 0x378);
} // namespace mc
