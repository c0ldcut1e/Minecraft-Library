#pragma once

#include <cstddef>
#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "container/Inventory.hpp"
#include "internal/shared_ptr.hpp"
#include "item/Item.hpp"
#include "item/ItemInstance.hpp"
#include "network/listener/ClientPacketListener.hpp"

namespace mc
{
    class CraftItemPacket : public Packet
    {
    public:
        CraftItemPacket(int param_1, int param_2, int param_3)
        {
            MLINK_FUNC(void, 0x0222DD24, CraftItemPacket *, int, int, int)(this, param_1, param_2, param_3);
        }

        static void craft(ClientPacketListener *listener, Inventory *inventory, int craftId, int itemId, int itemAmount, int itemAux)
        {
            listener->send(mboost::shared_ptr<Packet>(new CraftItemPacket(craftId, 0, 0)));
            inventory->add(mboost::shared_ptr<ItemInstance>(new ItemInstance(Item::byId(itemId), itemAmount, itemAux)));
        }

        [[nodiscard]] int GetCustomSlot(size_t index) const
        {
            return customSlotsStart[index];
        }

        [[nodiscard]] size_t GetCustomSlotCount() const
        {
            if (customSlotsStart == nullptr)
            {
                return 0;
            }

            return static_cast<size_t>(customSlotsEnd - customSlotsStart);
        }

        [[nodiscard]] uint8_t GetRecipeCategory() const
        {
            return recipeCategory;
        }

        [[nodiscard]] int GetStackedRecipeAmount(size_t index) const
        {
            return stackedRecipesStart[(index * 2) + 1];
        }

        [[nodiscard]] size_t GetStackedRecipeCount() const
        {
            if (stackedRecipesStart == nullptr)
            {
                return 0;
            }

            return static_cast<size_t>(stackedRecipesEnd - stackedRecipesStart) / 2;
        }

        [[nodiscard]] int GetStackedRecipeId(size_t index) const
        {
            return stackedRecipesStart[index * 2];
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        int *stackedRecipesStart;
        int *stackedRecipesEnd;
        int *stackedRecipesCapacity;
        uint32_t field_0x28;
        int *customSlotsStart;
        int *customSlotsEnd;
        int *customSlotsCapacity;
        int16_t containerBackupId;
        uint8_t recipeCategory;
        uint8_t field_0x3B;
        uint32_t field_0x3C;
    };
    MC_CHECK_SIZE(CraftItemPacket, 0x40);
} // namespace mc
