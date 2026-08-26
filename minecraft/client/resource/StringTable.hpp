#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"
#include "io/DataInputStream.hpp"
#include "io/DataOutputStream.hpp"
#include "utils/MCRandom.hpp"

namespace mc
{
    class StringTable
    {
    public:
        StringTable()
        {
            MLINK_FUNC(void, 0x0334231C, StringTable *)(this);
        }

        StringTable(ArrayWithLength<uint8_t> data, bool field_0x1, bool field_0x2)
        {
            MLINK_FUNC(void, 0x03346178, StringTable *, ArrayWithLength<uint8_t>, bool, bool)(this, data, field_0x1, field_0x2);
        }

        ~StringTable()
        {
            MLINK_FUNC(void, 0x03346674, StringTable *, uint32_t)(this, 0);
        }

        mstd::basic_string<wchar_t> FindLanguage(bool &field_0x1, int64_t &field_0x2)
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t>, 0x03342D94, StringTable *, bool &, int64_t &)(this, field_0x1, field_0x2);
        }

        mstd::basic_string<wchar_t> ReadLanguageFromStream(DataInputStream *stream)
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t>, 0x03344A5C, StringTable *, DataInputStream *)(this, stream);
        }

        void SelectLanguage(const mstd::basic_string<wchar_t> &language)
        {
            MLINK_FUNC(void, 0x033454BC, StringTable *, const mstd::basic_string<wchar_t> &)(this, language);
        }

        void ReadAllFromStream(DataInputStream *stream)
        {
            MLINK_FUNC(void, 0x03345504, StringTable *, DataInputStream *)(this, stream);
        }

        void ProcessStringTableData()
        {
            MLINK_FUNC(void, 0x03346000, StringTable *)(this);
        }

        void ReloadStringTable()
        {
            MLINK_FUNC(void, 0x033468B4, StringTable *)(this);
        }

        void getData(uint8_t **data, uint32_t *size)
        {
            MLINK_FUNC(void, 0x03346924, StringTable *, uint8_t **, uint32_t *)(this, data, size);
        }

        const wchar_t *getString(const mstd::basic_string<wchar_t> &stringId)
        {
            return MLINK_FUNC(const wchar_t *, 0x03346938, StringTable *, const mstd::basic_string<wchar_t> &)(this, stringId);
        }

        const wchar_t *getString(int stringId)
        {
            return MLINK_FUNC(const wchar_t *, 0x033469B8, StringTable *, int)(this, stringId);
        }

        int getRandomStringId(MCRandom *random)
        {
            return MLINK_FUNC(int, 0x03346A4C, StringTable *, MCRandom *)(this, random);
        }

        mstd::vector<int> getRandomStringIds(int count, MCRandom *random)
        {
            return MLINK_FUNC(mstd::vector<int>, 0x03346C0C, StringTable *, int, MCRandom *)(this, count, random);
        }

        void copyStringToTable(const mstd::basic_string<wchar_t> &string, StringTable *table)
        {
            MLINK_FUNC(void, 0x03346D0C, StringTable *, const mstd::basic_string<wchar_t> &, StringTable *)(this, string, table);
        }

        void write(DataOutputStream *stream)
        {
            MLINK_FUNC(void, 0x03348E14, StringTable *, DataOutputStream *)(this, stream);
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
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
    };
    MC_CHECK_SIZE(StringTable, 0x5C);
} // namespace mc
