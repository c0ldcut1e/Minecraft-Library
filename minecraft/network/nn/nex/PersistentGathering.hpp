#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "DateTime.hpp"
#include "Gathering.hpp"
#include "MinecraftLib.hpp"
#include "String.hpp"
#include "qVector.hpp"

namespace nn::nex
{
    enum class PersistentGatheringType : uint32_t
    {
    };

    class PersistentGathering : public Gathering
    {
    public:
        PersistentGathering()
        {
            MLINK_FUNC(void, 0x0363723C, PersistentGathering *)(this);
        }

        ~PersistentGathering()
        {
            MLINK_FUNC(void, 0x036529C8, PersistentGathering *, uint32_t)(this, 2);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x0363715C, PersistentGathering *)(this);
        }

        void SetPersistentGatheringType(PersistentGatheringType type)
        {
            MLINK_FUNC(void, 0x03637410, PersistentGathering *, PersistentGatheringType)(this, type);
        }

        [[nodiscard]] PersistentGatheringType GetPersistentGatheringType() const
        {
            return MLINK_FUNC(PersistentGatheringType, 0x03637418, const PersistentGathering *)(this);
        }

        void SetAttribute(uint32_t index, uint32_t value)
        {
            MLINK_FUNC(void, 0x03637420, PersistentGathering *, uint32_t, uint32_t)(this, index, value);
        }

        [[nodiscard]] uint32_t GetAttribute(uint32_t index) const
        {
            return MLINK_FUNC(uint32_t, 0x0363744C, const PersistentGathering *, uint32_t)(this, index);
        }

        uint8_t dataVersion;
        uint8_t field_0x31;
        uint8_t field_0x32;
        uint8_t field_0x33;
        PersistentGatheringType persistentGatheringType;
        String name;
        qVector<uint32_t> attributes;
        qVector<uint8_t> applicationBuffer;
        DateTime createdTime;
        DateTime modifiedTime;
        uint32_t field_0x70;
        uint32_t field_0x74;
    };
    MC_CHECK_SIZE(PersistentGathering, 0x78);
} // namespace nn::nex
