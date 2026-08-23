#pragma once

#include "mlink/MLink.hpp"

#include "RemotePlayer.hpp"
#include "internal/basic_string.hpp"
#include "world/Level.hpp"

namespace mc
{
    class GhostPlayer : public RemotePlayer
    {
    public:
        GhostPlayer(Level *level, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x02CB496C, GhostPlayer *, Level *, const mstd::basic_string<wchar_t> &)(this, level, name);
        }
    };
} // namespace mc
