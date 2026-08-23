#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundRotateHeadPacket : public Packet
    {
    public:
        ClientboundRotateHeadPacket()
        {
            MLINK_FUNC(void, 0x021E0AD4, ClientboundRotateHeadPacket *)(this);
        }

        ClientboundRotateHeadPacket(const mboost::shared_ptr<Entity> &entity, uint8_t yHeadRot)
        {
            MLINK_FUNC(void, 0x021E0B70, ClientboundRotateHeadPacket *, mboost::shared_ptr<Entity>, uint8_t)(this, entity, yHeadRot);
        }

        mboost::shared_ptr<ClientboundRotateHeadPacket> thisShared;
        int entityId;
        uint8_t yHeadRot;
    };
    MC_CHECK_SIZE(ClientboundRotateHeadPacket, 0x20);
} // namespace mc
