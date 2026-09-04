#pragma once

#include "Dimension.hpp"
#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class DimensionType
    {
    public:
        DimensionType(int id, const mstd::basic_string<wchar_t> &name, const mstd::basic_string<wchar_t> &fileSuffix)
        {
            MLINK_FUNC(void, 0x0229D490, DimensionType *, int, const mstd::basic_string<wchar_t> &,
                       const mstd::basic_string<wchar_t> &)(this, id, name, fileSuffix);
        }

        static DimensionType *getById(int id)
        {
            return MLINK_FUNC(DimensionType *, 0x0229D7EC, int)(id);
        }

        static DimensionType *getByName(const mstd::basic_string<wchar_t> &name)
        {
            return MLINK_FUNC(DimensionType *, 0x0229D824, const mstd::basic_string<wchar_t> &)(name);
        }

        Dimension *create()
        {
            return MLINK_FUNC(Dimension *, 0x0229D6D8, DimensionType *)(this);
        }

        int getId()
        {
            return MLINK_FUNC(int, 0x0229D54C, DimensionType *)(this);
        }

        const mstd::basic_string<wchar_t> &getName()
        {
            return MLINK_FUNC(const mstd::basic_string<wchar_t> &, 0x0229D554, DimensionType *)(this);
        }

        const mstd::basic_string<wchar_t> &getFileSuffix()
        {
            return MLINK_FUNC(const mstd::basic_string<wchar_t> &, 0x0229D5CC, DimensionType *)(this);
        }

        int id;
        mstd::basic_string<wchar_t> name;
        mstd::basic_string<wchar_t> fileSuffix;
    };
    MC_CHECK_SIZE(DimensionType, 0x44);
} // namespace mc
