#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class ArmorMaterial
    {
    public:
        ArmorMaterial(const mstd::basic_string<wchar_t> &materialName, uint32_t buffAmount, uint32_t *armorAmount, uint32_t enchantmentValue)
        {
            MLINK_FUNC(void, 0x0202957C, ArmorMaterial *, mstd::basic_string<wchar_t>, uint32_t, uint32_t *, uint32_t, uint32_t,
                       uint32_t)(this, materialName, buffAmount, armorAmount, enchantmentValue, 0x104C3FF0, 0);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t buffAmount;
        uint32_t *defense;
        uint32_t enchantmentValue;
        uint32_t equipSound;
        uint32_t toughness;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
    };
    MC_CHECK_SIZE(ArmorMaterial, 0x40);
} // namespace mc
