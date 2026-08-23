#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Entity.hpp"
#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Minecart : public Entity
    {
    public:
        enum class Type : int
        {
            Rideable,
            Chest,
            Furnace,
            TNT,
            Spawner,
            Hopper,
        };

        Minecart() = default;

        Minecart(Level *level)
        {
            MLINK_FUNC(void, 0x0265261C, Minecart *, Level *)(this, level);
        }

        static void createMinecart(mboost::shared_ptr<Entity> *out, Level *lvl, double xPos, double yPos, double zPos, Type *type)
        {
            MLINK_FUNC(void, 0x02653AA0, mboost::shared_ptr<Entity> *, Level *, double, double, double, Type *)(out, lvl, xPos, yPos, zPos, type);
        }

        static double getMaxSpeed()
        {
            return MLINK_FUNC(double, 0x02658A1C)();
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C4348)();
        }

        void lerpMotion(double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x0265C304, mc::Minecart *, double, double, double)(this, xPos, yPos, zPos);
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
    };
    MC_CHECK_SIZE(Minecart, 0x3A0);
} // namespace mc
