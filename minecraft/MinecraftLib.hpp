#pragma once

#include <cstdarg>

#define MC_UNDEFINED_TYPE(type, actual_type) type

#define MC_CHECK_SIZE(a, b)                  static_assert(sizeof(a) == b, "Size not matching")

using WiiUDouble = double __attribute__((aligned(4)));

using _va_struct = std::va_list *;
