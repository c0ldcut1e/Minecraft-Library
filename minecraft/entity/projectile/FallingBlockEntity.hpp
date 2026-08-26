#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class FallingBlockEntity : public Entity
    {
    public:
        FallingBlockEntity(Level *level)
        {
            MLINK_FUNC(void, 0x023AB61C, FallingBlockEntity *, Level *)(this, level);
        }

        static FallingBlockEntity *Create(Level *level)
        {
            return MLINK_FUNC(FallingBlockEntity *, 0x023E6250, Level *)(level);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, FallingBlockEntity *entity)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308CC74, mboost::shared_ptr<Entity> *, FallingBlockEntity *)(out, entity);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E78E0)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x023C8BC0, FallingBlockEntity *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023C8C80, FallingBlockEntity *)(this);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
    };
    MC_CHECK_SIZE(FallingBlockEntity, 0x368);
} // namespace mc
