#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class ResultRange
    {
    public:
        ~ResultRange()
        {
            MLINK_FUNC(void, 0x036527E4, ResultRange *, uint32_t)(this, 2);
        }

        [[nodiscard]] uint32_t GetOffset() const
        {
            return MLINK_FUNC(uint32_t, 0x036527F8, const ResultRange *)(this);
        }

        [[nodiscard]] uint32_t GetSize() const
        {
            return MLINK_FUNC(uint32_t, 0x03652800, const ResultRange *)(this);
        }

        uint32_t offset;
        uint32_t size;
        uint32_t field_0x8;
    };
    MC_CHECK_SIZE(ResultRange, 0xC);
} // namespace nn::nex
