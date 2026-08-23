#pragma once

#include <cstdint>
#include <type_traits>

#include "mlink/MLink.hpp"

namespace mstd
{
    template<typename CharT>
    class basic_string
    {
    public:
        basic_string();

        basic_string(const CharT *str);

        basic_string(const CharT *str, uint32_t count);

        basic_string(uint32_t count, CharT character);

        basic_string(const basic_string &other);
        ~basic_string();

        basic_string &append(const basic_string &other, uint32_t pos, uint32_t count);

        basic_string &append(const basic_string &other);

        basic_string &append(const CharT *str, uint32_t count);

        basic_string &append(const CharT *str);

        basic_string &append(uint32_t count, CharT character);

        basic_string &assign(const basic_string &other, uint32_t pos, uint32_t count);

        basic_string &assign(const basic_string &other);

        basic_string &assign(const CharT *str, uint32_t count);

        basic_string &assign(const CharT *str);

        basic_string &assign(uint32_t count, CharT character);

        CharT &at(uint32_t pos)
        {
            return data()[pos];
        }

        const CharT &at(uint32_t pos) const
        {
            return c_str()[pos];
        }

        CharT &back()
        {
            return data()[length - 1];
        }

        const CharT &back() const
        {
            return c_str()[length - 1];
        }

        CharT *begin()
        {
            return data();
        }

        const CharT *begin() const
        {
            return c_str();
        }

        const CharT *c_str() const
        {
            return length <= ((16 / sizeof(CharT)) - 1) ? inlineBuffer : heapPtr;
        }

        void clear();

        int compare(const basic_string &other) const;

        int compare(uint32_t pos, uint32_t count, const CharT *str, uint32_t strCount) const;

        int compare(const CharT *str) const;

        CharT *data()
        {
            return length <= ((16 / sizeof(CharT)) - 1) ? inlineBuffer : heapPtr;
        }

        [[nodiscard]] bool empty() const
        {
            return length == 0;
        }

        CharT *end()
        {
            return data() + length;
        }

        const CharT *end() const
        {
            return c_str() + length;
        }

        basic_string &erase(uint32_t pos = 0, uint32_t count = npos);

        uint32_t find(const CharT *str, uint32_t pos, uint32_t count) const;

        uint32_t find(const basic_string &other, uint32_t pos = 0) const;

        uint32_t find(const CharT *str, uint32_t pos = 0) const;

        uint32_t find(CharT character, uint32_t pos = 0) const;

        CharT &front()
        {
            return data()[0];
        }

        const CharT &front() const
        {
            return c_str()[0];
        }

        basic_string &insert(uint32_t pos, uint32_t count, CharT character);

        [[nodiscard]] uint32_t length_() const
        {
            return length;
        }

        uint32_t rfind(const CharT *str, uint32_t pos, uint32_t count) const;

        uint32_t rfind(const basic_string &other, uint32_t pos = npos) const;

        uint32_t rfind(const CharT *str, uint32_t pos = npos) const;

        uint32_t rfind(CharT character, uint32_t pos = npos) const;

        [[nodiscard]] uint32_t size() const
        {
            return length;
        }

        CharT inlineBuffer[16 / sizeof(CharT)];

        basic_string substr(uint32_t pos = 0, uint32_t count = npos) const;

        basic_string &operator=(const basic_string &other);

        basic_string &operator=(const CharT *str);

        CharT &operator[](uint32_t pos)
        {
            return data()[pos];
        }

        const CharT &operator[](uint32_t pos) const
        {
            return c_str()[pos];
        }

        basic_string &operator+=(const basic_string &other)
        {
            return append(other);
        }

        basic_string &operator+=(const CharT *str)
        {
            return append(str);
        }

        basic_string &operator+=(CharT character)
        {
            return append(1, character);
        }

        bool operator==(const basic_string &other) const
        {
            return compare(other) == 0;
        }

        bool operator!=(const basic_string &other) const
        {
            return compare(other) != 0;
        }

        bool operator<(const basic_string &other) const
        {
            return compare(other) < 0;
        }

        bool operator<=(const basic_string &other) const
        {
            return compare(other) <= 0;
        }

        bool operator>(const basic_string &other) const
        {
            return compare(other) > 0;
        }

        bool operator>=(const basic_string &other) const
        {
            return compare(other) >= 0;
        }

        bool operator==(const CharT *str) const
        {
            return compare(str) == 0;
        }

        bool operator!=(const CharT *str) const
        {
            return compare(str) != 0;
        }

        static constexpr uint32_t npos = 0xFFFFFFFF;
        uint32_t flags;
        CharT *heapPtr;
        uint32_t length;
        uint32_t capacity;
    };

    template<typename CharT>
    basic_string<CharT> operator+(const basic_string<CharT> &lhs, const CharT *rhs);

    template<typename CharT>
    basic_string<CharT> operator+(const basic_string<CharT> &lhs, const basic_string<CharT> &rhs);

    namespace detail
    {
        template<typename CharT, uintptr_t W, uintptr_t C>
        static constexpr uintptr_t addr()
        {
            if constexpr (std::is_same_v<CharT, wchar_t>)
            {
                return W;
            }
            else
            {
                return C;
            }
        }
    } // namespace detail

    template<typename CharT>
    basic_string<CharT>::basic_string()
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(void, 0x020B3F10, basic_string<CharT> *)(this);
        }
        else
        {
            flags           = 0;
            inlineBuffer[0] = CharT(0);
            heapPtr         = nullptr;
            length          = 0;
            capacity        = 0;
        }
    }

    template<typename CharT>
    basic_string<CharT>::basic_string(const CharT *str)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(void, 0x020B08D4, basic_string<CharT> *, const CharT *)(this, str);
        }
        else
        {
            MLINK_FUNC(void, 0x027B0A40, basic_string<CharT> *, const CharT *)(this, str);
        }
    }

    template<typename CharT>
    basic_string<CharT>::basic_string(const CharT *str, uint32_t count)
    {
        basic_string();
        assign(str, count);
    }

    template<typename CharT>
    basic_string<CharT>::basic_string(uint32_t count, CharT character)
    {
        basic_string();
        assign(count, character);
    }

    template<typename CharT>
    basic_string<CharT>::basic_string(const basic_string<CharT> &other)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(void, 0x02B9C618, basic_string<CharT> *, const basic_string<CharT> *)(this, &other);
        }
        else
        {
            flags           = 0;
            inlineBuffer[0] = CharT(0);
            heapPtr         = nullptr;
            length          = 0;
            capacity        = 0;
            assign(other, 0, npos);
        }
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::operator=(const basic_string<CharT> &other)
    {
        if (this != &other)
        {
            assign(other, 0, npos);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::operator=(const CharT *str)
    {
        assign(str);
        return *this;
    }

    template<typename CharT>
    basic_string<CharT>::~basic_string()
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(void, 0x020B53B8, basic_string<CharT> *, unsigned int)(this, 0U);
        }
        else
        {
            MLINK_FUNC(void, 0x02B248B0, basic_string<CharT> *, unsigned int)(this, 0U);
        }
    }

    template<typename CharT>
    void basic_string<CharT>::clear()
    {
        length  = 0;
        *data() = CharT(0);
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::assign(const basic_string<CharT> &other, uint32_t pos, uint32_t count)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(basic_string<CharT> &, 0x02001790, basic_string<CharT> *, const basic_string<CharT> &, uint32_t, uint32_t)(this, other, pos,
                                                                                                                                  count);
        }
        else
        {
            MLINK_FUNC(basic_string<CharT> &, 0x020037BC, basic_string<CharT> *, const basic_string<CharT> &, uint32_t, uint32_t)(this, other, pos,
                                                                                                                                  count);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::assign(const basic_string<CharT> &other)
    {
        return assign(other, 0, npos);
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::assign(const CharT *str, uint32_t count)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(basic_string<CharT> &, 0x02001904, basic_string<CharT> *, const CharT *, uint32_t)(this, str, count);
        }
        else
        {
            MLINK_FUNC(basic_string<CharT> &, 0x02003924, basic_string<CharT> *, const CharT *, uint32_t)(this, str, count);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::assign(const CharT *str)
    {
        uint32_t len = 0;
        while (str[len])
        {
            ++len;
        }

        return assign(str, len);
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::assign(uint32_t count, CharT character)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(void, 0x02096F60, basic_string<CharT> *, uint32_t, uint32_t, CharT)(this, 0, count, character);
        }
        else
        {
            MLINK_FUNC(void, 0x020A8EB8, basic_string<CharT> *, uint32_t, uint32_t, CharT)(this, 0, count, character);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::append(const basic_string<CharT> &other, uint32_t pos, uint32_t count)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(basic_string<CharT> &, 0x020190B0, basic_string<CharT> *, const basic_string<CharT> &, uint32_t, uint32_t)(this, other, pos,
                                                                                                                                  count);
        }
        else
        {
            MLINK_FUNC(basic_string<CharT> &, 0x020A8BB8, basic_string<CharT> *, const basic_string<CharT> &, uint32_t, uint32_t)(this, other, pos,
                                                                                                                                  count);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::append(const basic_string<CharT> &other)
    {
        return append(other, 0, npos);
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::append(const CharT *str, uint32_t count)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(basic_string<CharT> &, 0x02019224, basic_string<CharT> *, const CharT *, uint32_t)(this, str, count);
        }
        else
        {
            MLINK_FUNC(basic_string<CharT> &, 0x020A8D18, basic_string<CharT> *, const CharT *, uint32_t)(this, str, count);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::append(const CharT *str)
    {
        uint32_t len = 0;
        while (str[len])
        {
            ++len;
        }

        return append(str, len);
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::append(uint32_t count, CharT character)
    {
        insert(length, count, character);
        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::erase(uint32_t pos, uint32_t count)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(basic_string<CharT> &, 0x02001378, basic_string<CharT> *, uint32_t, uint32_t)(this, pos, count);
        }
        else
        {
            MLINK_FUNC(basic_string<CharT> &, 0x020033F8, basic_string<CharT> *, uint32_t, uint32_t)(this, pos, count);
        }

        return *this;
    }

    template<typename CharT>
    basic_string<CharT> &basic_string<CharT>::insert(uint32_t pos, uint32_t count, CharT character)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            MLINK_FUNC(basic_string<CharT> &, 0x021436F0, basic_string<CharT> *, uint32_t, uint32_t, CharT)(this, pos, count, character);
        }
        else
        {
            MLINK_FUNC(basic_string<CharT> &, 0x020A8F24, basic_string<CharT> *, uint32_t, uint32_t, CharT)(this, pos, count, character);
        }

        return *this;
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::find(const CharT *str, uint32_t pos, uint32_t count) const
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            return MLINK_FUNC(uint32_t, 0x02190CF4, const basic_string<CharT> *, const CharT *, uint32_t, uint32_t)(this, str, pos, count);
        }
        else
        {
            return npos;
        }
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::find(const basic_string<CharT> &other, uint32_t pos) const
    {
        return find(other.c_str(), pos, other.length);
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::find(const CharT *str, uint32_t pos) const
    {
        uint32_t len = 0;
        while (str[len])
        {
            ++len;
        }

        return find(str, pos, len);
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::find(CharT character, uint32_t pos) const
    {
        return find(&character, pos, 1);
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::rfind(const CharT *str, uint32_t pos, uint32_t count) const
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            return MLINK_FUNC(uint32_t, 0x023247C8, const basic_string<CharT> *, const CharT *, uint32_t, uint32_t)(this, str, pos, count);
        }
        else
        {
            return npos;
        }
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::rfind(const basic_string<CharT> &other, uint32_t pos) const
    {
        return rfind(other.c_str(), pos, other.length);
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::rfind(const CharT *str, uint32_t pos) const
    {
        uint32_t len = 0;
        while (str[len])
        {
            ++len;
        }

        return rfind(str, pos, len);
    }

    template<typename CharT>
    uint32_t basic_string<CharT>::rfind(CharT character, uint32_t pos) const
    {
        return rfind(&character, pos, 1);
    }

    template<typename CharT>
    int basic_string<CharT>::compare(const basic_string<CharT> &other) const
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            return MLINK_FUNC(int, 0x02205884, const basic_string<CharT> *, const basic_string<CharT> &)(this, other);
        }
        else
        {
            return compare(0, length, other.c_str(), other.length);
        }
    }

    template<typename CharT>
    int basic_string<CharT>::compare(uint32_t pos, uint32_t count, const CharT *str, uint32_t strCount) const
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            return MLINK_FUNC(int, 0x02011448, const basic_string<CharT> *, uint32_t, uint32_t, const CharT *, uint32_t)(this, pos, count, str,
                                                                                                                         strCount);
        }
        else
        {
            return MLINK_FUNC(int, 0x02AF1C80, const basic_string<CharT> *, uint32_t, uint32_t, const CharT *, uint32_t)(this, pos, count, str,
                                                                                                                         strCount);
        }
    }

    template<typename CharT>
    int basic_string<CharT>::compare(const CharT *str) const
    {
        uint32_t len = 0;
        while (str[len])
        {
            ++len;
        }

        return compare(0, length, str, len);
    }

    template<typename CharT>
    basic_string<CharT> basic_string<CharT>::substr(uint32_t pos, uint32_t count) const
    {
        basic_string<CharT> result;
        result.assign(*this, pos, count);
        return result;
    }

    template<typename CharT>
    basic_string<CharT> operator+(const basic_string<CharT> &lhs, const CharT *rhs)
    {
        if constexpr (std::is_same_v<CharT, wchar_t>)
        {
            return MLINK_FUNC(basic_string<CharT>, 0x020193D8, const basic_string<CharT> &, const CharT *)(lhs, rhs);
        }
        else
        {
            basic_string<CharT> result(lhs);
            result.append(rhs);
            return result;
        }
    }

    template<typename CharT>
    basic_string<CharT> operator+(const basic_string<CharT> &lhs, const basic_string<CharT> &rhs)
    {
        basic_string<CharT> result(lhs);
        result.append(rhs);
        return result;
    }

} // namespace mstd
