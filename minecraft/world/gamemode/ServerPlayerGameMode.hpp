#pragma once

#include "mlink/MLink.hpp"

#include "MasterGameMode.hpp"
#include "block/BlockPos.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class ServerPlayer;

    class ServerPlayerGameMode
    {
    public:
        ServerPlayerGameMode(Level *level, MasterGameMode *masterGamemode)
        {
            MLINK_FUNC(void, 0x0329A940, ServerPlayerGameMode *, Level *, MasterGameMode *)(this, level, masterGamemode);
        }

        void destroyBlock(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x032DE9D8, ServerPlayerGameMode *, const BlockPos &)(this, pos);
        }

        void getServerPlayer(mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x032DE5D8, ServerPlayerGameMode *, mboost::shared_ptr<ServerPlayer> &)(this, player);
        }
    };
} // namespace mc
