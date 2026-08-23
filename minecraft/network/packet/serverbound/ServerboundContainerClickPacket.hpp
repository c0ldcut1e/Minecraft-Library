#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"
#include "network/packet/Packet.hpp"
#include "utils/ClickType.hpp"

namespace mc
{
    class ServerboundContainerClickPacket : public Packet
    {
    public:
        ServerboundContainerClickPacket(int containerId, int slotNum, int buttonNum, ClickType::eClickType type,
                                        const mboost::shared_ptr<ItemInstance> &item, short stateId)
        {
            MLINK_FUNC(void, 0x028AAAFC, ServerboundContainerClickPacket *, int, int, int, ClickType::eClickType,
                       const mboost::shared_ptr<ItemInstance> &, short)(this, containerId, slotNum, buttonNum, type, item, stateId);
        }

        void getItem(mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x028AB404, ServerboundContainerClickPacket *, mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t containerId;
        int slotNum;
        uint32_t buttonNum;
        uint32_t uid;
        mstd::vector<mboost::shared_ptr<ItemInstance>> items;
        ClickType::eClickType clickType;
        uint32_t numSlots;
    };
    MC_CHECK_SIZE(ServerboundContainerClickPacket, 0x40);
} // namespace mc
