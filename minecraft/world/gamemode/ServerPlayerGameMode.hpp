#pragma once

#include "mlink/MLink.hpp"

#include "MasterGameMode.hpp"
#include "block/BlockPos.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/GameType.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ServerPlayer;

    class ServerPlayerGameMode
    {
    public:
        uint32_t field_0x0;
        GameType *gameType;

        ServerPlayerGameMode(Level *level, MasterGameMode *masterGamemode)
        {
            MLINK_FUNC(void, 0x0329A940, ServerPlayerGameMode *, Level *, MasterGameMode *)(this, level, masterGamemode);
        }

        static ServerPlayerGameMode *Create(Level *level, MasterGameMode *masterGamemode)
        {
            return MLINK_FUNC(ServerPlayerGameMode *, 0x0329A940, ServerPlayerGameMode *, Level *, MasterGameMode *)(nullptr, level, masterGamemode);
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
