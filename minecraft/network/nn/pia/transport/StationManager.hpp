#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Station.hpp"
#include "network/nn/pia/StationIndex.hpp"

namespace nn::pia::transport
{
    class StationManager
    {
    public:
        static StationManager *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<StationManager>(0x104D1DD4);
        }

        Station *GetStation(StationIndex stationIndex)
        {
            return MLINK_FUNC(Station *, 0x03560408, StationManager *, StationIndex)(this, stationIndex);
        }

        Station *GetStation(uint64_t stationId)
        {
            return MLINK_FUNC(Station *, 0x03560470, StationManager *, uint64_t)(this, stationId);
        }

        Station *GetStationByStationIdWithoutConvert(uint64_t stationId)
        {
            return MLINK_FUNC(Station *, 0x035605D0, StationManager *, uint64_t)(this, stationId);
        }

        [[nodiscard]] uint16_t GetValidStationNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03560740, const StationManager *)(this);
        }

        [[nodiscard]] uint32_t GetParticipatingStationBitmap(bool includeLocalStation) const
        {
            return MLINK_FUNC(uint32_t, 0x03560748, const StationManager *, bool)(this, includeLocalStation);
        }

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
        uint32_t stationCount;
        Station *stations[67];
        Station *localStation;
    };
    MC_CHECK_SIZE(StationManager, 0x13C);
} // namespace nn::pia::transport
