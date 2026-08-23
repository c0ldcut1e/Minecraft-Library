#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Entity.hpp"
#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class EntityTracker
    {
    public:
        void addEntity(const mboost::shared_ptr<Entity> &entity, int param_2, int param_3, bool param_4)
        {
            MLINK_FUNC(void, 0x0312C630, EntityTracker *, mboost::shared_ptr<Entity>, int, int, bool)(this, entity, param_2, param_3, param_4);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
    };
    MC_CHECK_SIZE(EntityTracker, 0x3C);
} // namespace mc
