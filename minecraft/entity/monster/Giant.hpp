#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Giant : public Monster
    {
    public:
        Giant(Level *level)
        {
            MLINK_FUNC(void, 0x0245AC30, Giant *, Level *)(this, level);
        }

        static Giant *Create(Level *level)
        {
            return MLINK_FUNC(Giant *, 0x023E6504, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0246FEE8)();
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x0245ACF8, Giant *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0245AD10, Giant *)(this);
        }
    };
    MC_CHECK_SIZE(Giant, 0x730);
} // namespace mc
