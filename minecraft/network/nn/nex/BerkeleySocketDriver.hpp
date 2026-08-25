#pragma once
#ifndef AF_INET

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "network/nn/nex/SocketDriver.hpp"
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
        class BerkeleySocket
        {
        public:
            BerkeleySocket()
            {
                MLINK_FUNC(void, 0x03704E98, BerkeleySocket *)(this);
            }

            ~BerkeleySocket()
            {
                MLINK_FUNC(void, 0x03704F48, BerkeleySocket *)(this);
            }

            bool Bind(uint16_t &portNumber)
            {
                return MLINK_FUNC(bool, 0x037050C8, BerkeleySocket *, uint16_t *)(this, &portNumber);
            }

            void Close()
            {
                MLINK_FUNC(void, 0x03705058, BerkeleySocket *)(this);
            }

            SocketDriver::_Result Connect(const SocketDriver::InetAddress &address)
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x03705478, BerkeleySocket *, const SocketDriver::InetAddress *)(this, &address);
            }

            SocketDriver::_Result GetLastSocketError(int errorCode) const
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x03704F5C, const BerkeleySocket *, int)(this, errorCode);
            }

            bool Open(SocketDriver::_TrafficType trafficType)
            {
                return MLINK_FUNC(bool, 0x03704F60, BerkeleySocket *, SocketDriver::_TrafficType)(this, trafficType);
            }

            SocketDriver::_Result Recv(uint8_t *buffer, uint32_t size, uint32_t *receivedSize)
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x03705528, BerkeleySocket *, uint8_t *, uint32_t, uint32_t *)(this, buffer, size,
                                                                                                                        receivedSize);
            }

            SocketDriver::_Result RecvFrom(uint8_t *buffer, uint32_t size, SocketDriver::InetAddress *address, uint32_t *receivedSize,
                                           SocketDriver::_SocketFlag flags)
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x03705264, BerkeleySocket *, uint8_t *, uint32_t, SocketDriver::InetAddress *, uint32_t *,
                                  SocketDriver::_SocketFlag)(this, buffer, size, address, receivedSize, flags);
            }

            SocketDriver::_Result Send(const uint8_t *buffer, uint32_t size, uint32_t *sentSize)
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x037055F0, BerkeleySocket *, const uint8_t *, uint32_t, uint32_t *)(this, buffer, size,
                                                                                                                              sentSize);
            }

            SocketDriver::_Result SendTo(const uint8_t *buffer, uint32_t size, const SocketDriver::InetAddress &address, uint32_t *sentSize)
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x03705380, BerkeleySocket *, const uint8_t *, uint32_t, const SocketDriver::InetAddress *,
                                  uint32_t *)(this, buffer, size, &address, sentSize);
            }

            bool SetAsync(bool enabled)
            {
                return MLINK_FUNC(bool, 0x03705700, BerkeleySocket *, bool)(this, enabled);
            }

            SocketDriver::_Result SetMulticastAddress(uint32_t address)
            {
                return MLINK_FUNC(SocketDriver::_Result, 0x037056B8, BerkeleySocket *, uint32_t)(this, address);
            }

            bool SetTTL(uint8_t ttl)
            {
                return MLINK_FUNC(bool, 0x037056C0, BerkeleySocket *, uint8_t)(this, ttl);
            }

            bool Shutdown()
            {
                return MLINK_FUNC(bool, 0x03705090, BerkeleySocket *)(this);
            }

            bool asynchronous;
            uint8_t field_0x1;
            uint8_t field_0x2;
            uint8_t field_0x3;
            mc::VTable *vtable;
            int descriptor;
            uint32_t *networkMetrics;
        };
        MC_CHECK_SIZE(BerkeleySocket, 0x10);

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
