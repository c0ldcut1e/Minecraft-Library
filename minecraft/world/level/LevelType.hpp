#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class LevelType
    {
    public:
        LevelType(int id, const mstd::basic_string<wchar_t> &name, int version)
        {
            MLINK_FUNC(void, 0x0253EC88, LevelType *, int, const mstd::basic_string<wchar_t> &, int)(this, id, name, version);
        }

        LevelType(int id, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0253ED2C, LevelType *, int, const mstd::basic_string<wchar_t> &)(this, id, name);
        }

        void setHasReplacement()
        {
            MLINK_FUNC(void, 0x0253EBF8, LevelType *)(this);
        }

        void setHasHelpText()
        {
            MLINK_FUNC(void, 0x0253EDC0, LevelType *)(this);
        }

        void setSelectableByUser(bool selectable)
        {
            MLINK_FUNC(void, 0x0253EDCC, LevelType *, bool)(this, selectable);
        }

        const mstd::basic_string<wchar_t> &getGeneratorName()
        {
            return MLINK_FUNC(const mstd::basic_string<wchar_t> &, 0x0253F1C8, LevelType *)(this);
        }

        int getVersion()
        {
            return MLINK_FUNC(int, 0x0253F3B4, LevelType *)(this);
        }

        LevelType *getReplacementForVersion(int version)
        {
            return MLINK_FUNC(LevelType *, 0x0253F3BC, LevelType *, int)(this, version);
        }

        bool hasReplacement()
        {
            return MLINK_FUNC(bool, 0x0253F3E0, LevelType *)(this);
        }

        int id;
        int version;
        uint16_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        const wchar_t *generatorName;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        int replacementVersion;
        bool hasReplacementFlag;
        bool hasHelpTextFlag;
        bool selectableByUser;
        uint8_t field_0x2B;
    };
    MC_CHECK_SIZE(LevelType, 0x2C);
} // namespace mc
