#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "RttProtocol.hpp"

namespace nn::pia::transport
{
    class Station
    {
    public:
        int GetRtt()
        {
            return MLINK_FUNC(int, 0x0355C390, Station *)(this);
        }

        int GetRtt(uint32_t sampleCount)
        {
            return MLINK_FUNC(int, 0x0355C3B8, Station *, uint32_t)(this, sampleCount);
        }

        void Finalize()
        {
            MLINK_FUNC(void, 0x0355C058, Station *)(this);
        }

        void Cleanup()
        {
            MLINK_FUNC(void, 0x0355C32C, Station *)(this);
        }

        void ResetRttMinMax()
        {
            MLINK_FUNC(void, 0x0355C3E4, Station *)(this);
        }

        [[nodiscard]] int GetRttMin() const
        {
            return MLINK_FUNC(int, 0x0355C404, const Station *)(this);
        }

        [[nodiscard]] int GetRttMax() const
        {
            return MLINK_FUNC(int, 0x0355C42C, const Station *)(this);
        }

        void CleanupJobs()
        {
            MLINK_FUNC(void, 0x0355C454, Station *)(this);
        }

        void GetPrincipalId(uint64_t *principalId) const
        {
            MLINK_FUNC(void, 0x0355C4F8, const Station *, uint64_t *)(this, principalId);
        }

        void GetPlayerCount(uint8_t *playerCount) const
        {
            MLINK_FUNC(void, 0x0355C6A8, const Station *, uint8_t *)(this, playerCount);
        }

        void GetParticipantCount(uint8_t *participantCount) const
        {
            MLINK_FUNC(void, 0x0355C748, const Station *, uint8_t *)(this, participantCount);
        }

        [[nodiscard]] bool IsConnectionRouteRelay() const
        {
            return MLINK_FUNC(bool, 0x0355C7E8, const Station *)(this);
        }

        [[nodiscard]] bool IsConnectionRouteDirect() const
        {
            return MLINK_FUNC(bool, 0x0355C810, const Station *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t stationIndex;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        RttProtocol *rttProtocol;
    };
    MC_CHECK_SIZE(Station, 0x30);
} // namespace nn::pia::transport
