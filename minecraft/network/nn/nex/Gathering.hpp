#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "String.hpp"

namespace nn::nex
{
    class Gathering
    {
    public:
        Gathering()
        {
            MLINK_FUNC(void, 0x036C8134, Gathering *)(this);
        }

        ~Gathering()
        {
            MLINK_FUNC(void, 0x036C8480, Gathering *, uint32_t)(this, 2);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x036C8100, Gathering *)(this);
        }

        void SetParticipationPolicy(uint32_t policy, uint32_t argument)
        {
            MLINK_FUNC(void, 0x036C84D4, Gathering *, uint32_t, uint32_t)(this, policy, argument);
        }

        [[nodiscard]] uint32_t GetPolicyArgument() const
        {
            return MLINK_FUNC(uint32_t, 0x036C84E0, const Gathering *)(this);
        }

        void SetDescription(const String &value)
        {
            MLINK_FUNC(void, 0x036C84E8, Gathering *, const String *)(this, &value);
        }

        void Trace(uint64_t traceId) const
        {
            MLINK_FUNC(void, 0x036C84F0, const Gathering *, uint64_t)(this, traceId);
        }

        uint8_t dataVersion;
        uint8_t field_0x1;
        uint8_t field_0x2;
        uint8_t field_0x3;
        uint32_t gatheringId;
        uint32_t ownerPrincipalId;
        uint32_t hostPrincipalId;
        uint16_t minimumParticipantCount;
        uint16_t maximumParticipantCount;
        uint32_t participationPolicy;
        uint32_t participationPolicyArgument;
        uint32_t flags;
        uint32_t state;
        String description;
        void *vtable;
    };
    MC_CHECK_SIZE(Gathering, 0x30);
} // namespace nn::nex
