#pragma once

#include "mlink/MLink.hpp"

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
    };
} // namespace mc
