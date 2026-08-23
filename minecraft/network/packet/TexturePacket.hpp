#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class TexturePacket : public Packet
    {
    public:
        uint32_t field_0x10;
        uint32_t field_0x14;
        mstd::basic_string<wchar_t> textureName;
        uint8_t *textureData;
        uint32_t textureSize;
    };
    MC_CHECK_SIZE(TexturePacket, 0x40);
} // namespace mc
