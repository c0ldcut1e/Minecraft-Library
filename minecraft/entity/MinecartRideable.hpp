#pragma once

#include "mlink/MLink.hpp"

#include "Minecart.hpp"
#include "world/Level.hpp"

namespace mc
{
    class MinecartRideable : public Minecart
    {
    public:
        MinecartRideable(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x026539A0, MinecartRideable *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }
    };
} // namespace mc
