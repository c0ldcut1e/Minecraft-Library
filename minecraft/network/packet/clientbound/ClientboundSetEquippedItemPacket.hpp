#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "network/packet/Packet.hpp"
#include "utils/EquipmentSlot.hpp"

namespace mc
{
    class ClientboundSetEquippedItemPacket : public Packet
    {
    public:
        ClientboundSetEquippedItemPacket()
        {
            MLINK_FUNC(void, 0x0221FCC0, ClientboundSetEquippedItemPacket *)(this);
        }

        ClientboundSetEquippedItemPacket(int entityId, EquipmentSlot *slot, const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0221FE70, ClientboundSetEquippedItemPacket *, int, EquipmentSlot *, mboost::not_null_ptr<ItemInstance>)(this, entityId,
                                                                                                                                       slot, item);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        mboost::shared_ptr<ItemInstance> item;
        int entityId;
        EquipmentSlot *slot;
    };
    MC_CHECK_SIZE(ClientboundSetEquippedItemPacket, 0x28);
} // namespace mc
