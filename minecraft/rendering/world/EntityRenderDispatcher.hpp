#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/Vec3.hpp"

namespace mc
{
    class EntityRenderDispatcher
    {
    public:
        bool shouldRender(mboost::shared_ptr<Entity> &entity, MC_UNDEFINED_TYPE(void *, Culler *) culler, double xPos, double yPos, double zPos)
        {
            return MLINK_FUNC(bool, 0x030F9578, EntityRenderDispatcher *, mboost::shared_ptr<Entity> &, MC_UNDEFINED_TYPE(void *, Culler *), double,
                              double, double)(this, entity, culler, xPos, yPos, zPos);
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
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        float yRot;
        float xRot;
        uint32_t field_0x70;
        uint32_t field_0x74;
        Vec3 offsetPosition;
        uint32_t field_0x90;
        uint32_t field_0x94;
    };
    MC_CHECK_SIZE(EntityRenderDispatcher, 0x98);
} // namespace mc
