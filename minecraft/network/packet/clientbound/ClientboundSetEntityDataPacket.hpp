#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/SynchedEntityData.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundSetEntityDataPacket : public Packet
    {
    public:
        ClientboundSetEntityDataPacket(int entityId, int param_2, const mboost::shared_ptr<SynchedEntityData> &entityData, bool notJustDirty)
        {
            MLINK_FUNC(void, 0x0221D324, ClientboundSetEntityDataPacket *, int, int, mboost::shared_ptr<SynchedEntityData>,
                       bool)(this, entityId, param_2, entityData, notJustDirty);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(ClientboundSetEntityDataPacket, 0x30);
} // namespace mc
