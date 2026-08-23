#pragma once
#ifndef AF_INET

#include <cstdint>

#include "MinecraftLib.hpp"
#include "utils/Common.hpp"

#define AF_INET 2
#endif

namespace nn::nex
{
    class SendMultiSocketAddress
    {
    public:
        uint16_t family;
        uint16_t portNetworkOrder;
        uint32_t addressNetworkOrder;
        uint32_t zero0;
        uint32_t zero1;
    };
    MC_CHECK_SIZE(SendMultiSocketAddress, 0x10);

    class SendMultiParameter
    {
    public:
        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t addressCount;
        SendMultiSocketAddress addresses[15];
        uint32_t field_0x144;
    };
    MC_CHECK_SIZE(SendMultiParameter, 0x148);

    inline const uint32_t s_sendMultiMaxPeerAddresses = 15;

    class SendMultiPeerAddress
    {
    public:
        SendMultiPeerAddress() : family(0), portNetworkOrder(0), addressNetworkOrder(0), zero0(0), zero1(0)
        {}

        void GetAddressString(char *address, uint32_t size) const
        {
            const uint32_t value = addressNetworkOrder;
            if (!IsValid())
            {
                mc::mc_snprintf(address, size, "invalid");
                return;
            }

            mc::mc_snprintf(address, size, "%u.%u.%u.%u", (value >> 24) & 0xFF, (value >> 16) & 0xFF, (value >> 8) & 0xFF, value & 0xFF);
        }

        void GetAddressString(wchar_t *address, uint32_t size) const
        {
            const uint32_t value = addressNetworkOrder;
            if (!IsValid())
            {
                mc_swprintf(address, size, L"invalid");
                return;
            }

            mc_swprintf(address, size, L"%u.%u.%u.%u", (value >> 24) & 0xFF, (value >> 16) & 0xFF, (value >> 8) & 0xFF, value & 0xFF);
        }

        [[nodiscard]] uint16_t GetFamily() const
        {
            return family;
        }

        [[nodiscard]] uint16_t GetPortNumber() const
        {
            return portNetworkOrder;
        }

        void GetRedactedAddressString(char *address, uint32_t size) const
        {
            const uint32_t value = addressNetworkOrder;
            if (!IsValid())
            {
                mc::mc_snprintf(address, size, "invalid");
                return;
            }

            mc::mc_snprintf(address, size, "%u.%u.%u.x", (value >> 24) & 0xFF, (value >> 16) & 0xFF, (value >> 8) & 0xFF);
        }

        void GetRedactedAddressString(wchar_t *address, uint32_t size) const
        {
            const uint32_t value = addressNetworkOrder;
            if (!IsValid())
            {
                mc_swprintf(address, size, L"invalid");
                return;
            }

            mc_swprintf(address, size, L"%u.%u.%u.x", (value >> 24) & 0xFF, (value >> 16) & 0xFF, (value >> 8) & 0xFF);
        }

        [[nodiscard]] bool IsValid() const
        {
            return family == AF_INET && addressNetworkOrder != 0 && addressNetworkOrder != 0xFFFFFFFF;
        }

        uint16_t family;
        uint16_t portNetworkOrder;
        uint32_t addressNetworkOrder;
        uint32_t zero0;
        uint32_t zero1;
        friend class BerkeleySocketDriver;
    };

    class BerkeleySocketDriver
    {
    public:
        static void *GetDefaultSendMultiParameter()
        {
            return (void *) 0x10A9B694;
        }

        static bool GetRedactedSendMultiPeerAddressString(uint32_t playerIndex, char *address, uint32_t size)
        {
            SendMultiPeerAddress peerAddress;
            if (!GetSendMultiPeerAddress(playerIndex, &peerAddress))
            {
                mc::mc_snprintf(address, size, "invalid");
                return false;
            }

            peerAddress.GetRedactedAddressString(address, size);
            return true;
        }

        static bool GetRedactedSendMultiPeerAddressString(uint32_t playerIndex, wchar_t *address, uint32_t size)
        {
            SendMultiPeerAddress peerAddress;
            if (!GetSendMultiPeerAddress(playerIndex, &peerAddress))
            {
                mc_swprintf(address, size, L"invalid");
                return false;
            }

            peerAddress.GetRedactedAddressString(address, size);
            return true;
        }

        static bool GetSendMultiPeerAddress(uint32_t playerIndex, SendMultiPeerAddress *address)
        {
            if (playerIndex >= GetSendMultiPeerAddressCount())
            {
                return false;
            }

            const SendMultiParameter *parameter  = static_cast<SendMultiParameter *>(GetDefaultSendMultiParameter());
            const SendMultiSocketAddress *source = &parameter->addresses[playerIndex];
            address->family                      = source->family;
            address->portNetworkOrder            = source->portNetworkOrder;
            address->addressNetworkOrder         = source->addressNetworkOrder;
            address->zero0                       = source->zero0;
            address->zero1                       = source->zero1;

            return address->IsValid();
        }

        static uint32_t GetSendMultiPeerAddressCount()
        {
            const SendMultiParameter *parameter = (SendMultiParameter *) GetDefaultSendMultiParameter();
            const uint32_t addressCount         = parameter->addressCount;

            if (addressCount > s_sendMultiMaxPeerAddresses)
            {
                return s_sendMultiMaxPeerAddresses;
            }

            return addressCount;
        }

        static bool GetSendMultiPeerAddressString(uint32_t playerIndex, char *address, uint32_t size)
        {
            SendMultiPeerAddress peerAddress;
            if (!GetSendMultiPeerAddress(playerIndex, &peerAddress))
            {
                mc::mc_snprintf(address, size, "invalid");
                return false;
            }

            peerAddress.GetAddressString(address, size);
            return true;
        }

        static bool GetSendMultiPeerAddressString(uint32_t playerIndex, wchar_t *address, uint32_t size)
        {
            SendMultiPeerAddress peerAddress;
            if (!GetSendMultiPeerAddress(playerIndex, &peerAddress))
            {
                mc_swprintf(address, size, L"invalid");
                return false;
            }

            peerAddress.GetAddressString(address, size);
            return true;
        }
    };
    MC_CHECK_SIZE(SendMultiPeerAddress, 0x10);
} // namespace nn::nex
