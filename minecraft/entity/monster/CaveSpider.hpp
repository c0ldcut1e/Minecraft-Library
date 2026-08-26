#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/monster/Spider.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class CaveSpider : public Spider
    {
    public:
        CaveSpider(Level *level)
        {
            MLINK_FUNC(void, 0x021CA3D0, CaveSpider *, Level *)(this, level);
        }

        static CaveSpider *Create(Level *level)
        {
            return MLINK_FUNC(CaveSpider *, 0x023E6594, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x022058EC)();
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x021CA4B0, CaveSpider *)(this);
        }

        bool doHurtTarget(mboost::shared_ptr<Entity> target)
        {
            return MLINK_FUNC(bool, 0x021CA51C, CaveSpider *, mboost::shared_ptr<Entity>)(this, target);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x021CBD28, CaveSpider *)(this);
        }
    };
    MC_CHECK_SIZE(CaveSpider, 0x730);
} // namespace mc
