#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/basic_string.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    class TexturePacket : public Packet, public mboost::enable_shared_from_this<TexturePacket>
    {
    public:
        mstd::basic_string<wchar_t> textureName;
        uint8_t *textureData;
        uint32_t textureSize;
    };
    MC_CHECK_SIZE(TexturePacket, 0x40);
} // namespace mc
