#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "world/Level.hpp"

namespace mc
{
    class AbstractRotatedItemProjectile : public Entity
    {
    public:
        AbstractRotatedItemProjectile() = default;

        AbstractRotatedItemProjectile(Level *level)
        {
            MLINK_FUNC(void, 0x0205CB30, AbstractRotatedItemProjectile *, Level *)(this, level);
        }

        void shoot(double x, double y, double z, float velocity, float inaccuracy)
        {
            MLINK_FUNC(void, 0x02005D44, AbstractRotatedItemProjectile *, double, double, double, float, float)(this, x, y, z, velocity, inaccuracy);
        }

        void setCritArrow(bool critical)
        {
            MLINK_FUNC(void, 0x02006308, AbstractRotatedItemProjectile *, bool)(this, critical);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0205D1FC, AbstractRotatedItemProjectile *)(this);
        }

        bool isCritArrow()
        {
            return MLINK_FUNC(bool, 0x0205DAC4, AbstractRotatedItemProjectile *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0205DB48, AbstractRotatedItemProjectile *)(this);
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
    };
    MC_CHECK_SIZE(AbstractRotatedItemProjectile, 0x398);
} // namespace mc
