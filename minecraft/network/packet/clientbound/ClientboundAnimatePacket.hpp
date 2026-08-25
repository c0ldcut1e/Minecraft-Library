#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundAnimatePacket : public Packet, public mboost::enable_shared_from_this<ClientboundAnimatePacket>
    {
    public:
        ClientboundAnimatePacket()
        {
            MLINK_FUNC(void, 0x021D228C, ClientboundAnimatePacket *)(this);
        }

        ClientboundAnimatePacket(const mboost::shared_ptr<Entity> &entity, int _action)
        {
            MLINK_FUNC(void, 0x021D233C, ClientboundAnimatePacket *, mboost::shared_ptr<Entity>, int)(this, entity, _action);
        }

        int id;
        int action;
    };
    MC_CHECK_SIZE(ClientboundAnimatePacket, 0x20);
} // namespace mc
