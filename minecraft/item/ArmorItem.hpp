#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ArmorMaterial.hpp"
#include "Item.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class ArmorItem : public Item
    {
    public:
        enum ArmorTexture : uint32_t
        {
            ARMOR_TEXTURE_CLOTH   = 0x0,
            ARMOR_TEXTURE_CHAIN   = 0x1,
            ARMOR_TEXTURE_IRON    = 0x2,
            ARMOR_TEXTURE_DIAMOND = 0x3,
            ARMOR_TEXTURE_GOLD    = 0x4,
            ARMOR_TEXTURE_TURTLE  = 0x5,
        };

        ArmorItem(ArmorMaterial *armorMaterial, uint32_t armorTexture, uint32_t equipSlot)
        {
            MLINK_FUNC(void, 0x02029408, ArmorItem *, ArmorMaterial *, uint32_t, uint32_t)(this, armorMaterial, armorTexture, equipSlot);
        }

        uint32_t armorType;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        ArmorTexture texture;
        ArmorMaterial *material;
        uint32_t field_0x8C;
        uint32_t field_0x90;
    };
    MC_CHECK_SIZE(ArmorItem, 0x94);
} // namespace mc
