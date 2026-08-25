#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/Result.hpp"

namespace nn::pia::common
{
    class InetAddress
    {
    public:
        InetAddress()
        {
            MLINK_FUNC(void, 0x03540570, InetAddress *)(this);
        }

        InetAddress(uint32_t addressNetworkOrder, uint16_t portNetworkOrder)
        {
            MLINK_FUNC(void, 0x035405B0, InetAddress *, uint32_t, uint16_t)(this, addressNetworkOrder, portNetworkOrder);
        }

        InetAddress(const InetAddress &other)
        {
            MLINK_FUNC(void, 0x03540618, InetAddress *, const InetAddress *)(this, &other);
        }

        ~InetAddress()
        {
            MLINK_FUNC(void, 0x03540668, InetAddress *)(this);
        }

        InetAddress &operator=(const InetAddress &other)
        {
            MLINK_FUNC(void, 0x03540604, InetAddress *, const InetAddress *)(this, &other);
            return *this;
        }

        [[nodiscard]] uint64_t GetKey() const
        {
            return MLINK_FUNC(uint64_t, 0x0354067C, const InetAddress *)(this);
        }

        [[nodiscard]] bool IsPrivate() const
        {
            return MLINK_FUNC(bool, 0x03540920, const InetAddress *)(this);
        }

        [[nodiscard]] bool IsValid() const
        {
            return MLINK_FUNC(bool, 0x035408E8, const InetAddress *)(this);
        }

        [[nodiscard]] bool IsValidAddress() const
        {
            return MLINK_FUNC(bool, 0x03540910, const InetAddress *)(this);
        }

        Result Deserialize(const uint8_t *data)
        {
            Result result;
            MLINK_FUNC(void, 0x0354082C, InetAddress *, Result *, const uint8_t *)(this, &result, data);
            return result;
        }

        Result Serialize(uint8_t *data, uint32_t *writtenSize, uint32_t size) const
        {
            Result result;
            MLINK_FUNC(void, 0x0354070C, const InetAddress *, Result *, uint8_t *, uint32_t *, uint32_t)(this, &result, data, writtenSize, size);
            return result;
        }

        uint32_t addressNetworkOrder;
        uint16_t portNetworkOrder;
        uint8_t field_0x6;
        uint8_t field_0x7;
    };
    MC_CHECK_SIZE(InetAddress, 0x8);
} // namespace nn::pia::common
