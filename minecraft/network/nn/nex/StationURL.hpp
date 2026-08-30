#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "InetAddress.hpp"
#include "MinecraftLib.hpp"
#include "String.hpp"
#include "internal/map.hpp"

namespace nn::nex
{
    class StationURL
    {
    public:
        enum class URLType : uint32_t
        {
        };

        StationURL()
        {
            MLINK_FUNC(void, 0x03708B2C, StationURL *)(this);
        }

        StationURL(const StationURL &other)
        {
            MLINK_FUNC(void, 0x0370F750, StationURL *, const StationURL *)(this, &other);
        }

        StationURL(const String &url)
        {
            MLINK_FUNC(void, 0x03724318, StationURL *, const String *)(this, &url);
        }

        StationURL(const wchar_t *url)
        {
            MLINK_FUNC(void, 0x0372450C, StationURL *, const wchar_t *)(this, url);
        }

        ~StationURL()
        {
            MLINK_FUNC(void, 0x03709D6C, StationURL *, uint32_t)(this, 2);
        }

        static bool CopyInSuppliedBuffer(wchar_t *output, uint32_t outputSize, const wchar_t *input, uint32_t inputSize)
        {
            return MLINK_FUNC(bool, 0x03708534, wchar_t *, uint32_t, const wchar_t *, uint32_t)(output, outputSize, input, inputSize);
        }

        StationURL &operator=(const StationURL &other)
        {
            return *MLINK_FUNC(StationURL *, 0x03725EA0, StationURL *, const StationURL *)(this, &other);
        }

        StationURL &operator=(const String &url)
        {
            return *MLINK_FUNC(StationURL *, 0x03725ED0, StationURL *, const String *)(this, &url);
        }

        void SetAddress(const wchar_t *address)
        {
            MLINK_FUNC(void, 0x03707440, StationURL *, const wchar_t *)(this, address);
        }

        void SetPortNumber(uint16_t portNumber)
        {
            MLINK_FUNC(void, 0x0370748C, StationURL *, uint16_t)(this, portNumber);
        }

        void SetURLType(URLType type)
        {
            MLINK_FUNC(void, 0x03708AE8, StationURL *, URLType)(this, type);
        }

        void SetInetAddress(const InetAddress &address)
        {
            MLINK_FUNC(void, 0x03708D14, StationURL *, const InetAddress *)(this, &address);
        }

        void SetURL(const wchar_t *url)
        {
            MLINK_FUNC(void, 0x03708D64, StationURL *, const wchar_t *)(this, url);
        }

        [[nodiscard]] InetAddress *GetInetAddress()
        {
            return MLINK_FUNC(InetAddress *, 0x0370A404, StationURL *)(this);
        }

        [[nodiscard]] const wchar_t *GetURL() const
        {
            return MLINK_FUNC(const wchar_t *, 0x0370F26C, const StationURL *)(this);
        }

        [[nodiscard]] URLType GetURLType() const
        {
            return MLINK_FUNC(URLType, 0x03724700, const StationURL *)(this);
        }

        [[nodiscard]] String GetAddress() const
        {
            return MLINK_FUNC(String, 0x03724730, const StationURL *)(this);
        }

        [[nodiscard]] uint16_t GetPortNumber() const
        {
            return MLINK_FUNC(uint16_t, 0x0372479C, const StationURL *)(this);
        }

        [[nodiscard]] bool IsValid() const
        {
            return MLINK_FUNC(bool, 0x03725F5C, const StationURL *)(this);
        }

        [[nodiscard]] bool IsMatching(const StationURL &other) const
        {
            return MLINK_FUNC(bool, 0x03725F8C, const StationURL *, const StationURL *)(this, &other);
        }

        void Trace(uint64_t traceId) const
        {
            MLINK_FUNC(void, 0x03725F58, const StationURL *, uint64_t)(this, traceId);
        }

        InetAddress *inetAddress;
        URLType urlType;
        mstd::map<String, uint32_t> connectionParameters;
        mstd::map<String, String> streamParameters;
        mstd::map<String, String> relayParameters;
        wchar_t *url;
        uint8_t field_0x30;
        uint8_t field_0x31;
        uint8_t field_0x32;
        uint8_t field_0x33;
        void *vtable;
    };
    MC_CHECK_SIZE(StationURL, 0x38);
} // namespace nn::nex
