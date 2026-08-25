#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class EvocationFangs : public Entity
    {
    public:
        EvocationFangs(Level *level)
        {
            MLINK_FUNC(void, 0x023AB89C, EvocationFangs *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E6FD8)();
        }

        void setOwner(const mboost::shared_ptr<LivingEntity> &entity)
        {
            MLINK_FUNC(void, 0x023BA764, EvocationFangs *, const mboost::shared_ptr<LivingEntity> &)(this, entity);
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
    };
    MC_CHECK_SIZE(EvocationFangs, 0x388);
} // namespace mc
