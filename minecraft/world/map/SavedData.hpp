#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
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
            return dirty;
        }

        void setDirty(bool state)
        {
            dirty = state;
        }

        void setDirty()
        {
            setDirty(true);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        mstd::basic_string<wchar_t> str;
        bool field_0x25;
        bool field_0x26;
        bool field_0x27;
        bool dirty;
        uint32_t field_0x2C;
    };
    MC_CHECK_SIZE(SavedData, 0x30);
} // namespace mc
