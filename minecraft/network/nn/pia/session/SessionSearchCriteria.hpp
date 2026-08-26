#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::session
{
    class SessionSearchCriteria
    {
    public:
        SessionSearchCriteria()
        {
            MLINK_FUNC(void, 0x03525280, SessionSearchCriteria *)(this);
        }

        ~SessionSearchCriteria()
        {
            MLINK_FUNC(void, 0x035251F8, SessionSearchCriteria *)(this);
        }

        void Copy(const SessionSearchCriteria &other)
        {
            MLINK_FUNC(void, 0x035252D4, SessionSearchCriteria *, const SessionSearchCriteria *)(this, &other);
        }

        void SetResultRange(uint32_t offset, uint32_t size)
        {
            MLINK_FUNC(void, 0x0352520C, SessionSearchCriteria *, uint32_t, uint32_t)(this, offset, size);
        }

        [[nodiscard]] uint32_t GetResultRangeOffset() const
        {
            return MLINK_FUNC(uint32_t, 0x03525250, const SessionSearchCriteria *)(this);
        }

        [[nodiscard]] uint32_t GetResultRangeSize() const
        {
            return MLINK_FUNC(uint32_t, 0x03525258, const SessionSearchCriteria *)(this);
        }

        [[nodiscard]] uint32_t GetKeyType() const
        {
            return MLINK_FUNC(uint32_t, 0x03525260, const SessionSearchCriteria *)(this);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x03525268, SessionSearchCriteria *)(this);
        }

        uint32_t resultRangeOffset;
        uint32_t resultRangeSize;
        uint32_t field_0x8;
        void *field_0xC;
    };
    MC_CHECK_SIZE(SessionSearchCriteria, 0x10);
} // namespace nn::pia::session
