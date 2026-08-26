#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class HangingEntity : public Entity
    {
    public:
        HangingEntity() = default;

        HangingEntity(Level *level)
        {
            MLINK_FUNC(void, 0x024D16CC, HangingEntity *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252CC10)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x024D1860, HangingEntity *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x024D1CA4, HangingEntity *)(this);
        }

        bool survives()
        {
            return MLINK_FUNC(bool, 0x024D1E2C, HangingEntity *)(this);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
    };
    MC_CHECK_SIZE(HangingEntity, 0x368);
} // namespace mc
