#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ESavePlatform.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class ConsoleSaveFile
    {
    public:
        uint32_t doesFileExist(MC_UNDEFINED_TYPE(const uint32_t &, const ConsoleSavePath &) path)
        {
            return MLINK_FUNC(uint32_t, 0x02260FCC, ConsoleSaveFile *, MC_UNDEFINED_TYPE(const uint32_t &, const ConsoleSavePath &))(this, path);
        }

        void finalizeWrite()
        {
            MLINK_FUNC(void, 0x02260F68, ConsoleSaveFile *)(this);
        }

        ESavePlatform getSavePlatform()
        {
            return MLINK_FUNC(ESavePlatform, 0x0226118C, ConsoleSaveFile *)(this);
        }

        uint32_t getSizeOnDisk()
        {
            return MLINK_FUNC(uint32_t, 0x022610B4, ConsoleSaveFile *)(this);
        }

        void setPlatform(ESavePlatform platform)
        {
            MLINK_FUNC(void, 0x022611BC, ConsoleSaveFile *, ESavePlatform)(this, platform);
        }

        uint32_t vtable;
    };
    MC_CHECK_SIZE(ConsoleSaveFile, 0x4);
} // namespace mc
