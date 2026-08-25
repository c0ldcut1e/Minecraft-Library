#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace nn::nex
{
    class InetAddress
    {
    public:
        InetAddress()
        {
            MLINK_FUNC(void, 0x03705C1C, InetAddress *)(this);
        }

        InetAddress(const InetAddress &other)
        {
            MLINK_FUNC(void, 0x037072A0, InetAddress *, const InetAddress *)(this, &other);
        }

        InetAddress &operator=(const InetAddress &other)
        {
            MLINK_FUNC(void, 0x03705C70, InetAddress *, const InetAddress *)(this, &other);
            return *this;
        }

        [[nodiscard]] uint32_t GetAddress() const
        {
            return MLINK_FUNC(uint32_t, 0x03704D50, const InetAddress *)(this);
        }

        bool GetAddress(wchar_t *address, uint32_t size) const
        {
            return MLINK_FUNC(bool, 0x037066A0, const InetAddress *, wchar_t *, uint32_t)(this, address, size);
        }

        [[nodiscard]] uint16_t GetPortNumber() const
        {
            return MLINK_FUNC(uint16_t, 0x03704D58, const InetAddress *)(this);
        }

        bool GetPortNumber(wchar_t *portNumber, uint32_t size) const
        {
            return MLINK_FUNC(bool, 0x03706718, const InetAddress *, wchar_t *, uint32_t)(this, portNumber, size);
        }

        void Init()
        {
            MLINK_FUNC(void, 0x03705BE0, InetAddress *)(this);
        }

        void SetAddress(uint32_t address)
        {
            MLINK_FUNC(void, 0x03704D60, InetAddress *, uint32_t)(this, address);
        }

        bool SetAddress(const wchar_t *address)
        {
            return MLINK_FUNC(bool, 0x03707314, InetAddress *, const wchar_t *)(this, address);
        }

        void SetLocalHost()
        {
            MLINK_FUNC(void, 0x03707304, InetAddress *)(this);
        }

        void SetPortNumber(uint16_t portNumber)
        {
            MLINK_FUNC(void, 0x03704D94, InetAddress *, uint16_t)(this, portNumber);
        }

        static uint32_t String2Address(const char *address)
        {
            return MLINK_FUNC(uint32_t, 0x03707310, const char *)(address);
        }

        void ToStr(wchar_t *output) const
        {
            MLINK_FUNC(void, 0x037067B8, const InetAddress *, wchar_t *)(this, output);
        }

        uint16_t family;
        uint16_t portNetworkOrder;
        uint32_t addressNetworkOrder;
        uint32_t field_0x8;
        uint32_t field_0xC;
        mc::VTable *vtable;
    };
    MC_CHECK_SIZE(InetAddress, 0x14);
} // namespace nn::nex
