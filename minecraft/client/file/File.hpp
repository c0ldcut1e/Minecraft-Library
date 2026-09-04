#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class File
    {
    public:
        File()
        {
            MLINK_FUNC(void, 0x02323234, File *)(this);
        }

        File(const File &parent, const mstd::basic_string<wchar_t> &child)
        {
            MLINK_FUNC(void, 0x023234C0, File *, const File &, const mstd::basic_string<wchar_t> &)(this, parent, child);
        }

        File(const mstd::basic_string<wchar_t> &path)
        {
            MLINK_FUNC(void, 0x023237C0, File *, const mstd::basic_string<wchar_t> &)(this, path);
        }

        ~File()
        {
            MLINK_FUNC(void, 0x0323ED84, File *, uint32_t)(this, 0);
        }

        static int hash_fnct(const File &file)
        {
            return MLINK_FUNC(int, 0x02324C0C, const File &)(file);
        }

        static bool eq_test(const File &first, const File &second)
        {
            return MLINK_FUNC(bool, 0x02324E00, const File &, const File &)(first, second);
        }

        bool _delete()
        {
            return MLINK_FUNC(bool, 0x023238E4, File *)(this);
        }

        bool mkdir()
        {
            return MLINK_FUNC(bool, 0x023239B0, File *)(this);
        }

        bool exists()
        {
            return MLINK_FUNC(bool, 0x023209B8, File *)(this);
        }

        bool isFile()
        {
            return MLINK_FUNC(bool, 0x02323A40, File *)(this);
        }

        bool isDirectory()
        {
            return MLINK_FUNC(bool, 0x02320A4C, File *)(this);
        }

        uint64_t length()
        {
            return MLINK_FUNC(uint64_t, 0x023246B0, File *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(File, 0x20);
} // namespace mc
