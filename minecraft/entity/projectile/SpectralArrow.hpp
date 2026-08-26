#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/projectile/Arrow.hpp"
#include "world/Level.hpp"

namespace mc
{
    class SpectralArrow : public Arrow
    {
    public:
        SpectralArrow(Level *level)
        {
            MLINK_FUNC(void, 0x02953DF8, SpectralArrow *, Level *)(this, level);
        }

        static SpectralArrow *Create(Level *level)
        {
            return MLINK_FUNC(SpectralArrow *, 0x023E6298, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297DBD0)();
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02954144, SpectralArrow *)(this);
        }

        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
    };
    MC_CHECK_SIZE(SpectralArrow, 0x3A8);
} // namespace mc
