#pragma once

#include "mlink/MLink.hpp"

#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class EnchantItemCommand
    {
    public:
        static mboost::shared_ptr<Packet> preparePacket(const mboost::shared_ptr<Player> &player, int enchantmentId, int lvl)
        {
            mboost::shared_ptr<Packet> packet;
            MLINK_FUNC(void, 0x022F1518, mboost::shared_ptr<Packet> *, mboost::shared_ptr<Player>, int, int)(&packet, player, enchantmentId, lvl);
            return packet;
        }
    };
} // namespace mc
