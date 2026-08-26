#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class FireworksRocketEntity : public Entity
    {
    public:
        FireworksRocketEntity(Level *level)
        {
            MLINK_FUNC(void, 0x023AB6BC, FireworksRocketEntity *, Level *)(this, level);
        }

        static FireworksRocketEntity *Create(Level *level)
        {
            return MLINK_FUNC(FireworksRocketEntity *, 0x023E6268, Level *)(level);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, FireworksRocketEntity *rocket)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308D5BC, mboost::shared_ptr<Entity> *, FireworksRocketEntity *)(out, rocket);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E6FC0)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x023C489C, FireworksRocketEntity *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023C1D64, FireworksRocketEntity *)(this);
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
    };
    MC_CHECK_SIZE(FireworksRocketEntity, 0x380);
} // namespace mc
