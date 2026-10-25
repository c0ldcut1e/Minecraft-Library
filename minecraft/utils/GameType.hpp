#pragma once

#include "mlink/MLink.hpp"

#include "entity/player/Abilities.hpp"

namespace mc
{
    class GameType
    {
    public:
        static GameType *byId(int id)
        {
            return MLINK_FUNC(GameType *, 0x02457008, int)(id);
        }

        int getId()
        {
            return MLINK_FUNC(int, 0x02456DCC, GameType *)(this);
        }

        void updatePlayerAbilities(Abilities *abilities)
        {
            MLINK_FUNC(void, 0x02456E24, GameType *, Abilities *)(this, abilities);
        }
    };
} // namespace mc
