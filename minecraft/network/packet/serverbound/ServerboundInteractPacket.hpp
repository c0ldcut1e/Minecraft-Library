#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"
#include "utils/InteractionHand.hpp"

namespace mc
{
    class ServerboundInteractPacket : public Packet
    {
    public:
        enum Action : int
        {
            RIDE            = 0,
            ATTACK          = 1,
            ENTITY_INTERACT = 2
        };

        ServerboundInteractPacket()
        {
            MLINK_FUNC(void, 0x028AC18C, ServerboundInteractPacket *)(this);
        }

        ServerboundInteractPacket(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x028AC244, ServerboundInteractPacket *, const mboost::shared_ptr<Entity> &)(this, entity);
        }
        ~ServerboundInteractPacket()
        {
            MLINK_FUNC(void, 0x028AC5A8, ServerboundInteractPacket *)(this);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t entityId;
        Action action;
        uint32_t field_0x20;
        InteractionHand::EInteractionHand hand;
    };
    MC_CHECK_SIZE(ServerboundInteractPacket, 0x28);
} // namespace mc
