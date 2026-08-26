#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/projectile/Arrow.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class TippableArrow : public Arrow
    {
    public:
        TippableArrow(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x029F988C, TippableArrow *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static TippableArrow *Create(Level *level)
        {
            return MLINK_FUNC(TippableArrow *, 0x023E6160, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A131A4)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x029FA364, TippableArrow *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x029FA97C, TippableArrow *)(this);
        }

        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
    };
    MC_CHECK_SIZE(TippableArrow, 0x3B8);
} // namespace mc
