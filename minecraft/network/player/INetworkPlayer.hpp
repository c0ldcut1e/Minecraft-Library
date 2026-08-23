#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class INetworkPlayer
    {
    public:
        int GetCurrentRtt()
        {
            return MLINK_FUNC(int, 0x0324DA3C, INetworkPlayer *)(this);
        }
    };
} // namespace mc
