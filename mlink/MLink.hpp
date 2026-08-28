#pragma once

#include <cstdint>

#define MLINK_FUNC(ret, address, ...)                                          \
  reinterpret_cast<ret (*)(__VA_ARGS__)>(address)

namespace MLink {
inline int toInt(float input) {
  bool negative = input < 0.0f;
  if (negative)
    input *= -1.0f;

  uint32_t output = static_cast<uint32_t>(input);
  if (negative) {
    output -= 0x80000000;
    output = 0x80000000 - output;
    output -= 1;
  }

  return output;
}

inline float ToFloat(int input) {
  const bool negative = 0 > input;
  const float output = negative ? (float)-input : (float)input;
  return negative ? -output : output;
}

inline double ToDouble(int input) {
  const bool negative = input < 0;
  const double output = (double)(negative ? -(uint32_t)input : (uint32_t)input);
  return negative ? -output : output;
}

inline uint32_t CorrectPointerOffset(uint32_t offset) { return offset; }

template <typename T> T *PointerFromAddress(uint32_t address) {
  return reinterpret_cast<T *>(address);
}

template <typename T> T *PointerFromOffset(uint32_t offset) {
  return PointerFromAddress<T>(CorrectPointerOffset(offset));
}

template <typename T> T *DereferencePointerFromAddress(uint32_t address) {
  return *reinterpret_cast<T **>(address);
}

template <typename T> T *DereferencePointerFromOffset(uint32_t offset) {
  return DereferencePointerFromAddress<T>(CorrectPointerOffset(offset));
}
} // namespace MLink
