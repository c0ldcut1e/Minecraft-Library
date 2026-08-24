#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "rendering/buffer/BufferedImage.hpp"

namespace mc
{
    class Textures
    {
    public:
        void bind(int textureId)
        {
            MLINK_FUNC(void, 0x0338EE78, Textures *, int)(this, textureId);
        }

        void replaceTextureDirect(ArrayWithLength<int> pixels, int width, int height, int textureId)
        {
            MLINK_FUNC(void, 0x03390860, Textures *, ArrayWithLength<int>, int, int, int)(this, pixels, width, height, textureId);
        }

        void bindTexture(const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(void, 0x0338EE94, Textures *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        uint32_t loadMemTexture(const mstd::basic_string<wchar_t> &str, int param_2)
        {
            return MLINK_FUNC(uint32_t, 0x03391F7C, Textures *, const mstd::basic_string<wchar_t> &, int)(this, str, param_2);
        }

        void loadTexture(struct BufferedImage *img, int textureId)
        {
            MLINK_FUNC(void, 0x0338F694, Textures *, struct BufferedImage *, int)(this, img, textureId);
        }

        BufferedImage *readImage(uint32_t _TEXTURE_NAME, const mstd::basic_string<wchar_t> &str)
        {
            return MLINK_FUNC(BufferedImage *, 0x0338BBB8, mc::Textures *, uint32_t, const mstd::basic_string<wchar_t> &)(this, _TEXTURE_NAME, str);
        }

        void releaseTexture(int textureId)
        {
            MLINK_FUNC(void, 0x03390CD4, Textures *, int)(this, textureId);
        }

        void reloadAll()
        {
            MLINK_FUNC(void, 0x03392DE0, Textures *)(this);
        }
    };
} // namespace mc
