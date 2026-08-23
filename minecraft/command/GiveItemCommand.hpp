#pragma once

#include "mlink/MLink.hpp"

#include "entity/player/Player.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class GiveItemCommand
    {
    public:
        static mboost::shared_ptr<Packet> preparePacket(const mboost::shared_ptr<Player> &player, int itemId, int count, int aux,
                                                        const mstd::basic_string<wchar_t> &unk1)
        {
            mboost::shared_ptr<Packet> packet;
            MLINK_FUNC(void, 0x02460E54, mboost::shared_ptr<Packet> *, mboost::shared_ptr<Player>, int, int, int,
                       const mstd::basic_string<wchar_t> &)(&packet, player, itemId, count, aux, unk1);
            return packet;
        }
    };
} // namespace mc
