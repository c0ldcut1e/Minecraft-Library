#pragma once

#include <cstdint>
#include <cstring>

#include "mlink/MLink.hpp"

#define MC_VFUNC(return_type, class_type, function_name, ...)                                                                                        \
    int flag_##function_name;                                                                                                                        \
    return_type (*function_name)(class_type * this_, ##__VA_ARGS__)

#define DEFINE_STATIC_DEF_VAR(type, name, addr) static inline type default_##name = (type) addr;

#define DEFINE_STATIC_VAR(type, name, addr)     static inline type name = (type) addr;

#define ARR_LEN(arr)                            (sizeof(arr) / sizeof(arr[0]))

#define mc_swprintf                             ((int (*)(wchar_t *, int, const wchar_t *, ...)) 0x0382C8C0)
#define mc_wcsncpy                              ((wchar_t * (*) (wchar_t *, const wchar_t *, size_t) ) 0x0382C67C)
#define mc_swscanf                              ((int (*)(const wchar_t *, const wchar_t *, ...)) 0x0382B610)
#define mc_wcslen                               ((size_t (*)(const wchar_t *)) 0x0382C718)
#define mc_wcscpy                               ((wchar_t * (*) (wchar_t *, const wchar_t *) ) 0x0382C734)
#define mc_wcstombs                             ((size_t (*)(char *, const wchar_t *, size_t)) 0x03830E5C)
#define mc_mbstowcs                             ((size_t (*)(wchar_t *, const char *, size_t)) 0x03831958)

namespace mc
{
    inline uint32_t getR1Register()
    {
        uint32_t value = 0;
        asm volatile("mr %0, 1" : "=r"(value));
        return value;
    }

    template<typename T, typename U>
    T min(T lhs, U rhs)
    {
        return lhs > rhs ? rhs : lhs;
    }

    template<typename tChar>
    int mc_strlen(const tChar *str)
    {
        int length = 0;
        while (str[length] != 0)
        {
            length++;
        }

        return length;
    }

    template<typename... Args>
    int mc_snprintf(const char *out, uint32_t size, const char *__format, Args... args)
    {
        return MLINK_FUNC(int, 0x0382DF78, const char *, uint32_t, const char *, Args...)(out, size, __format, args...);
    }

    template<typename... Args>
    int mc_sscanf(const char *buffer, const char *__format, Args... args)
    {
        return MLINK_FUNC(int, 0x0382F634, const char *, const char *, Args...)(buffer, __format, args...);
    }

    template<typename tChar>
    int mc_strcmp(const tChar *str1, const tChar *str2)
    {
        switch (sizeof(tChar))
        {
            case 0x1: // char
                return MLINK_FUNC(int, 0x0382CB74, const tChar *, const tChar *)(str1, str2);
            case 0x2: // wchar_t
                return MLINK_FUNC(int, 0x0382C75C, const tChar *, const tChar *)(str1, str2);
            default:
                return -1;
        }
    }

    inline char *mc_strcpy(char *dest, const char *src)
    {
        return MLINK_FUNC(char *, 0x0382CB58, char *, const char *)(dest, src);
    }

    // https://stackoverflow.com/questions/2249110/how-do-i-make-a-portable-isnan-isinf-function
    inline int isinf(double x)
    {
        union
        {
            uint64_t u;
            double f;
        } ieee754;
        ieee754.f = x;
        return static_cast<int>(((unsigned) (ieee754.u >> 32) & 0x7FFFFFFF) == 0x7FF00000 && ((unsigned) ieee754.u == 0));
    }

    // https://stackoverflow.com/questions/2249110/how-do-i-make-a-portable-isnan-isinf-function
    inline int isnan(double x)
    {
        union
        {
            uint64_t u;
            double f;
        } ieee754;
        ieee754.f = x;
        return static_cast<int>(((unsigned) (ieee754.u >> 32) & 0x7FFFFFFF) + static_cast<unsigned>((unsigned) ieee754.u != 0) > 0x7FF00000);
    }

    inline void toCStr(float input, char *result, int decimalPlaces = 5)
    {
        uint32_t bits = 0;
        memcpy(&bits, &input, sizeof(float));
        const bool isNegative = (bits & 0x80000000) == 0x80000000;
        if (isNegative)
        {
            bits -= 0x80000000;
        }
        float magnitude = 0.0F;
        memcpy(&magnitude, &bits, sizeof(float));
        uint32_t scale = 1;
        for (int i = 0; i < decimalPlaces; i++)
        {
            scale *= 10;
        }
        auto scaled              = static_cast<uint32_t>(magnitude * MLink::ToFloat(scale));
        const uint32_t fraction  = scaled % scale;
        const uint32_t wholePart = (scaled - fraction) / scale;
        if (isnan(input) != 0)
        {
            mc_snprintf(result, 0x20, "NaN");
        }
        else if (isinf(input) != 0)
        {
            mc_snprintf(result, 0x20, "Inf");
        }
        else if (isNegative)
        {
            char format[0x20];
            mc_snprintf(format, 0x20, "-%d.%s0%dd", wholePart, "%", decimalPlaces);
            mc_snprintf(result, 0x20, format, fraction);
        }
        else
        {
            char format[0x20];
            mc_snprintf(format, 0x20, "%d.%s0%dd", wholePart, "%", decimalPlaces);
            mc_snprintf(result, 0x20, format, fraction);
        }
    }

    inline void *mc_new(uint32_t size)
    {
        return MLINK_FUNC(void *, 0x0382AACC, uint32_t)(size);
    }
} // namespace mc
