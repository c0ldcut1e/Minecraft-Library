#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/common/InetAddress.hpp"

namespace nn::pia::common
{
    class StationAddress
    {
    public:
        StationAddress()
        {
            MLINK_FUNC(void, 0x03543D94, StationAddress *)(this);
        }

        StationAddress(const StationAddress &other)
        {
            MLINK_FUNC(void, 0x03543DE8, StationAddress *, const StationAddress *)(this, &other);
        }

        ~StationAddress()
        {
            MLINK_FUNC(void, 0x035442D8, StationAddress *)(this);
        }

        void Clear()
        {
            MLINK_FUNC(void, 0x03543E9C, StationAddress *)(this);
        }

        static int Compare(const StationAddress &lhs, const StationAddress &rhs)
        {
            return MLINK_FUNC(int, 0x03544234, const StationAddress *, const StationAddress *)(&lhs, &rhs);
        }

        Result Deserialize(const uint8_t *data)
        {
            Result result;
            MLINK_FUNC(void, 0x03544030, StationAddress *, Result *, const uint8_t *)(this, &result, data);
            return result;
        }

        [[nodiscard]] static uint32_t GetSerializedSize()
        {
            return MLINK_FUNC(uint32_t, 0x0354432C)();
        }

        [[nodiscard]] bool IsValid() const
        {
            return MLINK_FUNC(bool, 0x03544104, const StationAddress *)(this);
        }

        bool operator==(const StationAddress &other) const
        {
            return MLINK_FUNC(bool, 0x03544108, const StationAddress *, const StationAddress *)(this, &other);
        }

        StationAddress &operator=(const StationAddress &other)
        {
            MLINK_FUNC(void, 0x03544178, StationAddress *, const StationAddress *)(this, &other);
            return *this;
        }

        bool operator<(const StationAddress &other) const
        {
            return MLINK_FUNC(bool, 0x035441B4, const StationAddress *, const StationAddress *)(this, &other);
        }

        Result Serialize(uint8_t *data, uint32_t *writtenSize, uint32_t size) const
        {
            Result result;
            MLINK_FUNC(void, 0x03543EAC, const StationAddress *, Result *, uint8_t *, uint32_t *, uint32_t)(this, &result, data, writtenSize, size);
            return result;
        }

        Result SetInetAddress(const InetAddress &address)
        {
            Result result;
            MLINK_FUNC(void, 0x03543E4C, StationAddress *, Result *, const InetAddress *)(this, &result, &address);
            return result;
        }

        InetAddress inetAddress;
        mc::VTable *vtable;
    };
    MC_CHECK_SIZE(StationAddress, 0xC);
} // namespace nn::pia::common
