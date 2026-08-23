#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "client/skin/SKIN_BOX.hpp"
#include "internal/basic_string.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    struct SkinAdjustments
    {
        float field_0x0;
        float field_0x4;
        float field_0x8;
        float field_0xC;
        float field_0x10;
        float field_0x14;
        float field_0x18;
        float field_0x1C;
        float field_0x20;
        float field_0x24;
        float field_0x28;
        float field_0x2C;
        float field_0x30;
        float field_0x34;
        float field_0x38;
        float field_0x3C;
        float field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
    };
    MC_CHECK_SIZE(SkinAdjustments, 0x50);

    class TextureAndGeometryPacket : public Packet, public mboost::enable_shared_from_this<TextureAndGeometryPacket>
    {
    public:
        mstd::basic_string<wchar_t> textureName;
        uint32_t skinId;
        uint8_t *textureData;
        uint32_t textureSize;
        SKIN_BOX *geometryBoxes;
        uint32_t geometryBoxCount;
        uint32_t animOverrideBitmask;
        SkinAdjustments skinAdjustments;
    };
    MC_CHECK_SIZE(TextureAndGeometryPacket, 0xA0);
} // namespace mc
