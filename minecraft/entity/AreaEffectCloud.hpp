#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Entity.hpp"
#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"
#include "world/level/ServerLevel.hpp"

namespace mc
{
    class AreaEffectCloud : public Entity
    {
    public:
        AreaEffectCloud(Level *level)
        {
            MLINK_FUNC(void, 0x02085B3C, AreaEffectCloud *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x020B3CDC)();
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, AreaEffectCloud *cloud)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308DBEC, mboost::shared_ptr<Entity> *, AreaEffectCloud *)(out, cloud);
        }

        int getDuration()
        {
            return MLINK_FUNC(int, 0x02086C14, AreaEffectCloud *)(this);
        }

        void particleSpawnRateOnTick(int rate)
        {
            MLINK_FUNC(void, 0x020869CC, AreaEffectCloud *, int)(this, rate);
        }

        void setDuration(int duration)
        {
            MLINK_FUNC(void, 0x02086C1C, AreaEffectCloud *, int)(this, duration);
        }

        void setParticle(ParticleType *type)
        {
            MLINK_FUNC(void, 0x02086658, AreaEffectCloud *, ParticleType *)(this, type);
        }

        void setPotion(void *potion)
        {
            MLINK_FUNC(void, 0x020864B0, AreaEffectCloud *, void *)(this, potion);
        }

        void setRadius(float radius)
        {
            MLINK_FUNC(void, 0x02082644, AreaEffectCloud *, float)(this, radius);
        }

        void setRadiusOnUse(float radius)
        {
            MLINK_FUNC(void, 0x02086E98, AreaEffectCloud *, float)(this, radius);
        }

        void setRadiusPerTick(float radius)
        {
            MLINK_FUNC(void, 0x02086EA0, AreaEffectCloud *, float)(this, radius);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
        uint32_t field_0x370;
        uint32_t field_0x374;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
        uint32_t field_0x388;
        uint32_t field_0x38C;
        uint32_t field_0x390;
        uint32_t field_0x394;
        uint32_t field_0x398;
        uint32_t field_0x39C;
        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
        uint32_t field_0x3B8;
        uint32_t field_0x3BC;
    };
    MC_CHECK_SIZE(AreaEffectCloud, 0x3C0);
} // namespace mc
