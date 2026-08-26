#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Mob.hpp"
#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class AmbientCreature : public Mob
    {
    public:
        AmbientCreature() = default;

        AmbientCreature(Level *level)
        {
            MLINK_FUNC(void, 0x020788DC, AmbientCreature *, Level *)(this, level);
        }

        bool canBeLeashed(const mboost::shared_ptr<Player> &player)
        {
            return MLINK_FUNC(bool, 0x02078964, AmbientCreature *, const mboost::shared_ptr<Player> &)(this, player);
        }
    };
    MC_CHECK_SIZE(AmbientCreature, 0x708);
} // namespace mc
