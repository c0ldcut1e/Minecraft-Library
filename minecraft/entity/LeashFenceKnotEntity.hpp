#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class LeashFenceKnotEntity : public Entity
    {
    public:
        LeashFenceKnotEntity(Level *level)
        {
            MLINK_FUNC(void, 0x025C2E20, LeashFenceKnotEntity *, Level *)(this, level);
        }

        static LeashFenceKnotEntity *Create(Level *level)
        {
            return MLINK_FUNC(LeashFenceKnotEntity *, 0x023E6130, Level *)(level);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, LeashFenceKnotEntity *knot)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308D8D4, mboost::shared_ptr<Entity> *, LeashFenceKnotEntity *)(out, knot);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0260343C)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x025C3134, LeashFenceKnotEntity *)(this);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
    };
    MC_CHECK_SIZE(LeashFenceKnotEntity, 0x368);
} // namespace mc
