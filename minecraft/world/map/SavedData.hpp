#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class SavedData
    {
    public:
        SavedData(const mstd::basic_string<wchar_t> &str)
        {
            MLINK_FUNC(SavedData *, 0x027EC778, SavedData *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        bool isDirty() const
        {
            return MLINK_FUNC(bool, 0x027EC864, const SavedData *)(this);
        }

        void setDirty(bool state)
        {
            MLINK_FUNC(void, 0x027EC848, SavedData *, bool)(this, state);
        }

        void setDirty()
        {
            MLINK_FUNC(void, 0x027EC850, SavedData *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        mstd::basic_string<wchar_t> str;
        bool dirty;
        uint8_t field_0x29;
        uint8_t field_0x2A;
        uint8_t field_0x2B;
        VTable *vtable;
    };
    MC_CHECK_SIZE(SavedData, 0x30);
} // namespace mc
