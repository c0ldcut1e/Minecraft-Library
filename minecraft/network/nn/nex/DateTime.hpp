#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class DateTime
    {
    public:
        DateTime()
        {
            MLINK_FUNC(void, 0x0371358C, DateTime *)(this);
        }

        DateTime(const DateTime &other)
        {
            MLINK_FUNC(void, 0x037135CC, DateTime *, const DateTime *)(this, &other);
        }

        DateTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second)
        {
            MLINK_FUNC(void, 0x03713630, DateTime *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)(this, year, month, day, hour, minute,
                                                                                                            second);
        }

        static bool IsLeapYear(int year)
        {
            return MLINK_FUNC(bool, 0x037137B8, int)(year);
        }

        static int DateToDays(int year, int month, int day)
        {
            return MLINK_FUNC(int, 0x03713818, int, int, int)(year, month, day);
        }

        static void GetSystemTime(DateTime &dateTime)
        {
            MLINK_FUNC(void, 0x03713ACC, DateTime *)(&dateTime);
        }

        static DateTime FromCustomEpochTime(int64_t epochTime, int customEpoch)
        {
            return MLINK_FUNC(DateTime, 0x03713CD0, int64_t, int)(epochTime, customEpoch);
        }

        static DateTime FromEpochTime(int64_t epochTime)
        {
            return MLINK_FUNC(DateTime, 0x03713DC0, int64_t)(epochTime);
        }

        DateTime &operator=(const DateTime &other)
        {
            return MLINK_FUNC(DateTime &, 0x0371361C, DateTime *, const DateTime *)(this, &other);
        }

        [[nodiscard]] uint8_t GetSecond() const
        {
            return MLINK_FUNC(uint8_t, 0x0371377C, const DateTime *)(this);
        }

        [[nodiscard]] uint8_t GetMinute() const
        {
            return MLINK_FUNC(uint8_t, 0x03713788, const DateTime *)(this);
        }

        [[nodiscard]] uint8_t GetHour() const
        {
            return MLINK_FUNC(uint8_t, 0x037137A0, const DateTime *)(this);
        }

        [[nodiscard]] uint16_t GetYear() const
        {
            return MLINK_FUNC(uint16_t, 0x037138E4, const DateTime *)(this);
        }

        [[nodiscard]] uint8_t GetMonth() const
        {
            return MLINK_FUNC(uint8_t, 0x037138FC, const DateTime *)(this);
        }

        [[nodiscard]] uint8_t GetDay() const
        {
            return MLINK_FUNC(uint8_t, 0x03713914, const DateTime *)(this);
        }

        [[nodiscard]] int64_t ToEpochTime() const
        {
            return MLINK_FUNC(int64_t, 0x0371392C, const DateTime *)(this);
        }

        [[nodiscard]] int64_t operator-(const DateTime &other) const
        {
            return MLINK_FUNC(int64_t, 0x037139EC, const DateTime *, const DateTime *)(this, &other);
        }

        void Trace(uint64_t traceId) const
        {
            MLINK_FUNC(void, 0x03713A5C, const DateTime *, uint64_t)(this, traceId);
        }

        [[nodiscard]] bool IsValid() const
        {
            return MLINK_FUNC(bool, 0x03713A60, const DateTime *)(this);
        }

        [[nodiscard]] bool IsNever() const
        {
            return MLINK_FUNC(bool, 0x03713A74, const DateTime *)(this);
        }

        void DaysToDate(int days)
        {
            MLINK_FUNC(void, 0x03713B98, DateTime *, int)(this, days);
        }

        uint32_t valueLow;
        uint32_t valueHigh;
    };
    MC_CHECK_SIZE(DateTime, 0x8);
} // namespace nn::nex
