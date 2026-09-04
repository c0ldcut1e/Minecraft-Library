#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "rendering/buffer/BufferedImage.hpp"
#include "rendering/buffer/ByteBuffer.hpp"

#define MC_TEXTURE_MAX_MIP_LEVELS       5
#define MC_TEXTURE_COMPONENT_ORDER_BGRA 1

namespace mc
{
    class Texture
    {
    public:
        ~Texture()
        {
            MLINK_FUNC(void, 0x033603B4, Texture *, uint32_t)(this, 0);
        }

        static int crispBlend(int firstColor, int secondColor)
        {
            return MLINK_FUNC(int, 0x03360A18, int, int)(firstColor, secondColor);
        }

        void updateOnGPU()
        {
            MLINK_FUNC(void, 0x033607B0, Texture *)(this);
        }

        void transferFromImage(BufferedImage *image)
        {
            MLINK_FUNC(void, 0x03360B48, Texture *, BufferedImage *)(this, image);
        }

        ByteBuffer *getData(uint32_t level)
        {
            return MLINK_FUNC(ByteBuffer *, 0x03361C2C, Texture *, uint32_t)(this, level);
        }

        int getHeight()
        {
            return MLINK_FUNC(int, 0x03361C3C, Texture *)(this);
        }

        int getWidth()
        {
            return MLINK_FUNC(int, 0x03361C44, Texture *)(this);
        }

        void blit(int x, int y, Texture *source, bool rotated)
        {
            MLINK_FUNC(void, 0x03361C4C, Texture *, int, int, Texture *, bool)(this, x, y, source, rotated);
        }

        int getManagerId()
        {
            return MLINK_FUNC(int, 0x03362010, Texture *)(this);
        }

        int getGlId()
        {
            return MLINK_FUNC(int, 0x03362018, Texture *)(this);
        }

        void bind(int mipMapIndex)
        {
            MLINK_FUNC(void, 0x03362020, Texture *, int)(this, mipMapIndex);
        }

        int glId;
        int managerId;
        int mode;
        int width;
        int height;
        int depth;
        int componentOrder;
        int type;
        int minFilter;
        int magFilter;
        int wrapMode;
        bool mipmapped;
        uint8_t field_0x2D;
        uint8_t field_0x2E;
        uint8_t field_0x2F;
        mstd::basic_string<wchar_t> name;
        MC_UNDEFINED_TYPE(uint32_t *, Rect2i) rect;
        bool valid;
        uint8_t field_0x55;
        uint8_t field_0x56;
        uint8_t field_0x57;
        bool uploadImmediately;
        uint8_t field_0x59;
        uint8_t field_0x5A;
        uint8_t field_0x5B;
        bool upToDateOnGPU;
        uint8_t field_0x5D;
        uint8_t field_0x5E;
        uint8_t field_0x5F;
        int mipLevels;
        ByteBuffer *mipData[10];
        bool initialized;
        uint8_t field_0x8D;
        uint8_t field_0x8E;
        uint8_t field_0x8F;
    };
    MC_CHECK_SIZE(Texture, 0x90);
} // namespace mc
