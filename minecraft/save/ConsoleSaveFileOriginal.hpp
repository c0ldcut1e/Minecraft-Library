#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ConsoleSaveFile.hpp"
#include "ESavePlatform.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class ConsoleSaveFileOriginal : public ConsoleSaveFile
    {
    public:
        static ConsoleSaveFileOriginal *Create(const mstd::basic_string<wchar_t> &filename, void *data, uint32_t size, bool blank,
                                               ESavePlatform platform)
        {
            return MLINK_FUNC(ConsoleSaveFileOriginal *, 0x02261E80, ConsoleSaveFileOriginal *, const mstd::basic_string<wchar_t> &, void *, uint32_t,
                              bool, ESavePlatform)(nullptr, filename, data, size, blank, platform);
        }

        void flush(bool writeSave, bool async)
        {
            MLINK_FUNC(void, 0x022624E0, ConsoleSaveFileOriginal *, bool, bool)(this, writeSave, async);
        }
    };
} // namespace mc
