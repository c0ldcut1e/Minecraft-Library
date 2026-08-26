#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/projectile/AbstractRotatedItemProjectile.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Arrow : public AbstractRotatedItemProjectile
    {
    public:
        Arrow() = default;

        Arrow(Level *level)
        {
            MLINK_FUNC(void, 0x02061DF8, Arrow *, Level *)(this, level);
        }

        uint32_t field_0x398;
        uint32_t field_0x39C;
    };
    MC_CHECK_SIZE(Arrow, 0x3A0);
} // namespace mc
