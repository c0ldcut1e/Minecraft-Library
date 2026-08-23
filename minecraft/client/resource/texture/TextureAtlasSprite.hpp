#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Texture.hpp"

namespace mc
{
    class TextureAtlasSprite
    {
    public:
        uint32_t field_0x00;
        uint32_t field_0x04;
        uint32_t field_0x08;
        uint32_t field_0x0C;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        Texture *texture;
        uint32_t field_0x44;
        Texture *ownTexture;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint8_t field_0x54;
        uint8_t field_0x55;
        uint8_t field_0x56;
        uint8_t field_0x57;
        uint32_t x;
        uint32_t y;
        uint32_t width;
        uint32_t height;
        float u0;
        float u1;
        float v0;
        float v1;
        float uFix;
        float vFix;
        float spriteWidth;
        float spriteHeight;
        uint32_t flags;
        uint32_t field_0x8C;
        uint32_t vtable;
    };
    MC_CHECK_SIZE(TextureAtlasSprite, 0x94);
} // namespace mc
