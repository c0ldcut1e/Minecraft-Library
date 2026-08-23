#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::nex
{
    class String
    {
    public:
        String()
        {
            MLINK_FUNC(String *, 0x036F5EE4, String *)(this);
        }

        String(const char *text)
        {
            MLINK_FUNC(String *, 0x037002D8, String *, const char *)(this, text);
        }

        String(const wchar_t *text)
        {
            MLINK_FUNC(String *, 0x036F5E80, String *, const wchar_t *)(this, text);
        }

        String(const String &other)
        {
            MLINK_FUNC(String *, 0x036F6660, String *, const String &)(this, other);
        }
        ~String()
        {
            MLINK_FUNC(void, 0x036F75F4, String *, uint32_t)(this, 2);
        }

        bool CopyToBuffer(char *buffer, size_t bufferSize) const
        {
            if (bufferSize == 0)
            {
                return false;
            }

            buffer[0] = 0;
            if (text == nullptr)
            {
                return false;
            }

            const size_t length = GetLength();
            size_t copyLength   = length;
            copyLength          = std::min(bufferSize - 1, copyLength);

            for (size_t i = 0; i < copyLength; i++)
            {
                if (static_cast<uint32_t>(text[i]) < 0x80)
                {
                    buffer[i] = static_cast<char>(text[i]);
                }
                else
                {
                    buffer[i] = '?';
                }
            }

            buffer[copyLength] = 0;
            return copyLength != 0 || length == 0;
        }

        [[nodiscard]] size_t GetLength() const
        {
            return MLINK_FUNC(size_t, 0x036F7428, const String *)(this);
        }

        [[nodiscard]] wchar_t *GetText() const
        {
            return text;
        }

        String &operator=(const char *text)
        {
            MLINK_FUNC(String *, 0x037146A0, String *, const char *)(this, text);
            return *this;
        }

        String &operator=(const wchar_t *text)
        {
            MLINK_FUNC(String *, 0x036F6770, String *, const wchar_t *)(this, text);
            return *this;
        }

        String &operator=(const String &other)
        {
            MLINK_FUNC(String *, 0x036F73C8, String *, const String &)(this, other);
            return *this;
        }

        wchar_t *text;
        uint32_t data[3];
    };
    MC_CHECK_SIZE(String, 0x10);
} // namespace nn::nex
