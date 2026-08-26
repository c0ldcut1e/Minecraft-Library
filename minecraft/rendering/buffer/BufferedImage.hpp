#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

#define MC_IMAGE_TYPE_INT_ARGB 2

namespace mc
{
    class BufferedImage
    {
    public:
        BufferedImage(uint8_t *buffer, uint32_t size)
        {
            MLINK_FUNC(void, 0x03029A40, BufferedImage *, uint8_t *, uint32_t)(this, buffer, size);
        }

        BufferedImage(const mstd::basic_string<wchar_t> &path1, bool unk, bool unk2, const mstd::basic_string<wchar_t> &path2, int unk3)
        {
            MLINK_FUNC(void, 0x03028614, BufferedImage *, const mstd::basic_string<wchar_t> &, bool, bool, const mstd::basic_string<wchar_t> &,
                       int)(this, path1, unk, unk2, path2, unk3);
        }

        BufferedImage(int width, int height, int type)
        {
            MLINK_FUNC(void, 0x0302811C, mc::BufferedImage *, int, int, int)(this, width, height, type);
        }

        ~BufferedImage()
        {
            MLINK_FUNC(void, 0x03029B44, mc::BufferedImage *)(this);
        }

        void *getData()
        {
            return MLINK_FUNC(void *, 0x03029D80, BufferedImage *)(this);
        }

        int getHeight()
        {
            return MLINK_FUNC(int, 0x03029C68, BufferedImage *)(this);
        }

        int getWidth()
        {
            return MLINK_FUNC(int, 0x03029C60, BufferedImage *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
    };
    MC_CHECK_SIZE(BufferedImage, 0x34);
} // namespace mc
