#pragma once

#include "mlink/MLink.hpp"

#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundPlayerCommandPacket : public Packet
    {
    public:
        enum Action
        {
            START_SNEAKING = 1,
            STOP_SNEAKING,
            STO_SLEEPING,
            START_SPRINTING,
            STOP_SPRINTING,
            START_IDLEANIM,
            STOP_IDLEANIM,
            RIDING_JUMP,
            OPEN_INVENTORY,
        };

        ServerboundPlayerCommandPacket(const mboost::shared_ptr<Entity> &entity, Action action)
        {
            MLINK_FUNC(void, 0x028AF170, ServerboundPlayerCommandPacket *, mboost::shared_ptr<Entity>, Action)(this, entity, action);
        }
    };
} // namespace mc
