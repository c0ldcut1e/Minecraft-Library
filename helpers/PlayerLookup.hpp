#pragma once

#include "minecraft/entity/player/ServerPlayer.hpp"
#include "minecraft/internal/shared_ptr.hpp"
#include "minecraft/network/server/MinecraftServer.hpp"
#include "minecraft/network/server/PlayerList.hpp"

namespace mc::helpers
{
    // Returns an owning reference when the small ID is present in the server list.
    inline mboost::shared_ptr<ServerPlayer> findPlayerBySmallId(PlayerList &players, int smallId)
    {
        for (const auto &player : players.players)
        {
            if (player && player->getSmallId() == smallId)
            {
                return player;
            }
        }
        return {};
    }

    inline mboost::shared_ptr<ServerPlayer> findPlayerBySmallId(MinecraftServer *server, int smallId)
    {
        if (server == nullptr)
        {
            return {};
        }
        PlayerList *players = server->getPlayers();
        return players == nullptr ? mboost::shared_ptr<ServerPlayer>{} : findPlayerBySmallId(*players, smallId);
    }
} // namespace mc::helpers
