#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ServerboundSetCreativeModeSlotPacket : public Packet, public mboost::enable_shared_from_this<ServerboundSetCreativeModeSlotPacket>
    {
    public:
        ServerboundSetCreativeModeSlotPacket(int slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x028B09F8, ServerboundSetCreativeModeSlotPacket *, int, const mboost::shared_ptr<ItemInstance> &)(this, slot, item);
        }

        int slotNum;
        mboost::shared_ptr<ItemInstance> iteminstance;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(ServerboundSetCreativeModeSlotPacket, 0x28);
} // namespace mc
